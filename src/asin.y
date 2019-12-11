/*****************************************************************************/
/**     2019-2020                         Cardona Lorenzo, Victor           **/
/**  Analizador sintactico                Murcia Serrano, Andrea            **/
/**                                       Serrano Hernandez, Luis           **/
/*****************************************************************************/
%{
#include <stdio.h>
#include <string.h>
#include "header.h"
#include "libtds.h"
#include "libgci.h"
%}

%union {/*********************************************************************/
  int   cent;                               /* Para el terminal "cte" entera */
  char  *ident;                                  /* Nombre del identificador */
  int tipo;                                              /* Tipo del simbolo */
  struct CamposStruct lisCampos;  /* Estructura para los campos del registro */
  int pos;      /* Posicion del simbolo en memoria (desplazamiento relativo) */
  struct ExpreStruct tipoExpre;         /*Estructura para la posicion y tipo */
  struct OperadorStruct tipoOp;       /*Estructura para la posicion y codigo */
  struct ConstanteStruct tipoCons;    /*Estructura para la posicion y numero */
}/****************************************************************************/

%token MAS_ MENOS_ POR_ DIV_ MOD_
MASASIG_ MENOSASIG_ PORASIG_ DIVASIG_ INC_ DEC_ ASIG_
ALLA_ CLLA_ APAR_ CPAR_ ACOR_ CCOR_
IGU_ DIST_ MAY_ MEN_ MAYIGU_ MENIGU_
AND_ OR_ NOT_
STRUCT_ INT_ BOOL_
READ_ PRINT_
IF_ ELSE_ WHILE_
TRUE_ FALSE_
DELI_ PUNTO_

%token<ident> ID_ 
%token<cent> CTE_ 

%type<tipo> tipoSimple
%type<lisCampos> listaCampos
%type<tipoExpre> expresionMultiplicativa expresionAditiva expresionUnaria expresionSufija expresion expresionIgualdad expresionLogica
 expresionRelacional 
%type<tipoOp> operadorUnario operadorAsignacion
%type<tipo> operadorAditivo operadorRelacional operadorMultiplicativo operadorIncremento operadorLogico operadorIgualdad
%type<tipoCons> constante 
%%
programa
  : { dvar = 0; si = 0;} 
    ALLA_ secuenciaSentencias CLLA_
    {
      if (verTDS) verTdS();
    }
  ;

secuenciaSentencias
  : sentencia
  | secuenciaSentencias sentencia
  ;

sentencia
  : declaracion 
  | instruccion
  ;

declaracion
    //declaracion de un tipo simple
  : tipoSimple ID_ DELI_
      {
        if (! insTdS($2, $1, dvar, -1)) {
          yyerror("Identificador repetido");
        } else {
          dvar += TALLA_TIPO_SIMPLE;
        }
      }
    //declaracion y asignacion de un tipo simple
  | tipoSimple ID_ ASIG_ constante DELI_ 
      {
        if ($1 != $4.tipo) {
          yyerror("Tipos incompatibles");
        }
        else if (! insTdS($2, $1, dvar, -1)) {
          yyerror("Identificador repetido");
        } else {
          dvar += TALLA_TIPO_SIMPLE;
        }
      }
    //declaracion de un array
  | tipoSimple ID_ ACOR_ CTE_ CCOR_ DELI_
      {
        int numelem = $4;
        if (numelem <= 0) {
          yyerror("Talla negativa del array");
          numelem = 0;
        }
        int refe = insTdA($1, numelem);
        if (! insTdS($2, T_ARRAY, dvar, refe)) {
          yyerror("Identificador repetido");
        } else {
          dvar += numelem * TALLA_TIPO_SIMPLE;
        }
        
      }
    //declaracion de una estructura
  | STRUCT_ ALLA_ listaCampos CLLA_ ID_ DELI_
      {
        if (! insTdS($5, T_RECORD, dvar, $3.ref)) {
          yyerror("Identificador repetido");
        } else {
          dvar += TALLA_TIPO_SIMPLE;
        }
      }
  ;

tipoSimple
  : INT_
      {
        $$ = T_ENTERO;
      }
  | BOOL_
      {
        $$ = T_LOGICO;
      }
  ;

/*campos para las estructuras*/
listaCampos
  : tipoSimple ID_ DELI_
      {
        $$.ref = insTdR(-1, $2, $1, 0);
        $$.talla= TALLA_TIPO_SIMPLE;
      }
  | listaCampos tipoSimple ID_ DELI_
      {
        $$.ref = $1.ref;
        int refe = insTdR($1.ref, $3, $2, $1.talla);
        if ( refe == -1) {
          yyerror("Campo repetido");
        } else{
          $$.talla = $1.talla + TALLA_TIPO_SIMPLE;
        }
      }
  ;

instruccion
  : ALLA_ CLLA_ 
  | ALLA_ listaInstrucciones CLLA_
  | instruccionEntradaSalida
  | instruccionSeleccion
  | instruccionIteracion
  | instruccionExpresion
  ;

listaInstrucciones
  : instruccion
  | listaInstrucciones instruccion
  ;

instruccionEntradaSalida
  : READ_ APAR_ ID_ CPAR_ DELI_
    {
      SIMB sim = obtTdS($3);
      if (sim.tipo == T_ERROR) {
        yyerror("Objeto no declarado");
      } else if (sim.tipo != T_ENTERO) {
        yyerror("El argumento del read debe ser entero");
      }
      emite(EREAD, crArgNul(), crArgNul(), crArgNul(sim.desp));
    }
  | PRINT_ APAR_ expresion CPAR_ DELI_
    {
      if ($3.tipo != T_ENTERO && $3.tipo != T_ERROR) {
        yyerror("El argumento del print debe ser entero");
      }
      emite(EWRITE, crArgNul(), crArgNul(), crArgNul($3.pos));
    }
  ;

instruccionSeleccion
  : IF_ APAR_ expresion CPAR_ 
    {
      if ($3.tipo != T_LOGICO && $3.tipo != T_ERROR) {
        yyerror("La condicion del if debe ser logica");
      }
      $<cent>$ = creaLans(si);
      emite(EIGUAL, crArgPos($3.pos), crArgEnt(FALSE), crArgEtq(-1));
    }
    instruccion
    {
      $<cent>$ = creaLans(si);
      emite(GOTOS, crArgNul(), crArgNul(), crArgEtq(-1));
      completaLans($<cent>5, crArgEnt(si));
    }
    ELSE_ instruccion
    {
      completaLans($<cent>7, crArgEnt(si));
    }
  ;

instruccionIteracion
  : WHILE_ 
    {
      $<cent>$ = si;
    }
    APAR_ expresion 
    {
      if ($4.tipo != T_LOGICO && $4.tipo != T_ERROR) {
        yyerror("La condicion del while deber ser logica");
      }
      $<cent>$ = creaLans(si);
      emite(EIGUAL, crArgPos($4.pos), crArgEnt(FALSE), crArgEtq(-1));
    }
    CPAR_ instruccion
    {
      emite(GOTOS, crArgNul(), crArgNul(), crArgEtq($<cent>2));
      completaLans($<cent>5, crArgEnt(si));
    }

  ;

instruccionExpresion
  : expresion DELI_
  | DELI_
  ;

expresion
  : expresionLogica
    {
      $$ = $1;
    }
  | ID_ operadorAsignacion expresion
    {
      $$.tipo = T_ERROR;
      SIMB sim = obtTdS($1);

      if (sim.tipo == T_ERROR) {
        yyerror("Objeto no declarado");
      } else if (! ((sim.tipo == $3.tipo == T_ENTERO) || (sim.tipo == $3.tipo == T_LOGICO))) {
        if ($3.tipo != T_ERROR) {
          yyerror("Tipos incompatibles en la asignacion");
        }
      } else if ($3.tipo == T_LOGICO && $2.tipo != T_ASIG) {
        yyerror("Operador no compatible con el tipo logico");
      } else {
        $$.tipo = sim.tipo;
      }

      if ($2.tipo == T_ASIG) {
        emite($2.cod, crArgPos($3.pos), crArgNul(), crArgPos(sim.desp));
      } else {
        emite($2.cod, crArgPos(sim.desp), crArgPos($3.pos), crArgPos(sim.desp));
      }

      $$.pos = creaVarTemp();
      emite(EASIG, crArgPos(sim.desp), crArgNul(), crArgPos($$.pos));
      
    }
  | ID_ ACOR_ expresion CCOR_ operadorAsignacion expresion
    {
      $$.tipo = T_ERROR;
      SIMB sim = obtTdS($1);

      if (sim.tipo == T_ERROR) {
        yyerror("Objeto no declarado");
      } else if ($3.tipo != T_ENTERO) {
        if ($3.tipo != T_ERROR) {
          yyerror("Incompatibilidad de tipo en el indice del array");
        }
      } else if (sim.tipo != T_ARRAY) {
        yyerror("El objeto no es de tipo array");
      } else {
        DIM dim = obtTdA(sim.ref);
        if (dim.telem != $6.tipo) {
          if ($6.tipo != T_ERROR) {
            yyerror("Incomptabilidad de tipo entre el array y la asignacion");
          }
        } else if ($6.tipo == T_LOGICO && $5.tipo != T_ASIG) {
            yyerror("Operador no compatible con el tipo logico");
        } else {
            $$.tipo = dim.telem;
        }

        $$.pos = creaVarTemp();
        emite(EAV, crArgPos(sim.desp), crArgPos($3.pos), crArgPos($$.pos));
        if ($5.cod != EASIG) {
          emite($5.cod, crArgPos($$.pos), crArgPos($6.pos), crArgPos($$.pos));
        }
        emite(EVA, crArgPos(sim.desp), crArgPos($3.pos), crArgPos($$.pos));
      }
    }
  | ID_ PUNTO_ ID_ operadorAsignacion expresion
    {
      $$.tipo = T_ERROR;
      SIMB sim = obtTdS($1);
      CAMP cam;

      if (sim.tipo == T_ERROR) {
        yyerror("Objeto no declarado");
      } else if (sim.tipo != T_RECORD) {
        yyerror("El objeto no es de tipo registro");
      } else {
        cam = obtTdR(sim.ref, $3);
        if (cam.tipo == T_ERROR) {
          yyerror("No existe el campo del registro");
        } else if (cam.tipo != $5.tipo) {
          if ($5.tipo != T_ERROR) {
            yyerror("Incomptabilidad de tipos entre el campo del registro y la asignacion");
          }
        } else if (cam.tipo == T_LOGICO && $4.tipo != T_ASIG) {
            yyerror("Operador no compatible con el tipo logico");
        } else {
          $$.tipo = cam.tipo;
        }
      }

      $$.pos = creaVarTemp();
      int pos = sim.desp + cam.desp;
      emite(EASIG, crArgPos($5.pos), crArgNul(), crArgPos(pos));
      emite(EASIG, crArgPos($5.pos), crArgNul(), crArgPos($$.pos));
    }
  ;

expresionLogica
  : expresionIgualdad
    {
      $$ = $1;
    }
  | expresionLogica operadorLogico expresionIgualdad
    {
      $$.tipo = T_ERROR;
      if (! (($1.tipo == T_LOGICO) && ($3.tipo == T_LOGICO))) {
        if ($1.tipo != T_ERROR && $3.tipo != T_ERROR) {
          yyerror("Los tipos del operador logico son incompatibles, deben ser logicos");
        }
      } else {
        $$.tipo = T_LOGICO;
      }

      $$.pos = creaVarTemp();
      emite($2, crArgPos($1.pos), crArgPos($3.pos), crArgPos($$.pos));
      if ($2 == ESUM) {
        emite(EMENEQ, crArgPos($$.pos), crArgEnt(1), crArgEtq(si + 2));
        emite(EASIG, crArgEnt(1), crArgNul(), crArgPos($$.pos));
      }
    }
  ;

expresionIgualdad
  : expresionRelacional
    {
      $$ = $1;
    }
  | expresionIgualdad operadorIgualdad expresionRelacional
    {
      $$.tipo = T_ERROR;

      if ($1.tipo != $3.tipo) {
        if ($1.tipo != T_ERROR && $3.tipo != T_ERROR) {
          yyerror("Los tipos del operador de igualdad son incompatibles");
        }
      } else {
        $$.tipo = T_LOGICO;
      }

      $$.pos = creaVarTemp();
      emite(EASIG, crArgEnt(1), crArgNul(), crArgPos($$.pos));
      emite($2, crArgPos($1.pos), crArgPos($3.pos), crArgEtq(si + 2));
      emite(EASIG, crArgEnt(0), crArgNul(), crArgPos($$.pos));
    }
  ;

expresionRelacional
  : expresionAditiva
    {
      $$ = $1;
    }
  | expresionRelacional operadorRelacional expresionAditiva
    {
      $$.tipo = T_ERROR;

      if (! (($1.tipo == T_ENTERO) && ($3.tipo == T_ENTERO))) {
        if ($1.tipo != T_ERROR && $3.tipo != T_ERROR) {
          yyerror("Los tipos del operador relacional son incompatibles, deben ser enteros");
        }
      } else {
        $$.tipo = T_LOGICO;
      }

      $$.pos = creaVarTemp();
      emite(EASIG, crArgEnt(1), crArgNul(), crArgPos($$.pos));
      emite($2, crArgPos($1.pos), crArgPos($3.pos), crArgEtq(si + 2));
      emite(EASIG, crArgEnt(0), crArgNul(), crArgPos($$.pos));
    }
  ;

expresionAditiva
  : expresionMultiplicativa
    {
      $$ = $1;
    }
  | expresionAditiva operadorAditivo expresionMultiplicativa
    {
      $$.tipo = T_ERROR;

      if (! ($1.tipo == $3.tipo == T_ENTERO))
      {
        // Si los operandos no son enteros y todavía no se ha lanzado el error, lo lanzamos.
        if ($1.tipo != T_ERROR && $3.tipo != T_ERROR)
        {
          yyerror("Los tipos del operador aditivo son incompatibles, deben ser enteros");
        }
      }
      else
      {
        $$.tipo = T_ENTERO;
      }

	    $$.pos = creaVarTemp();

	    /************** Expresion a partir de un operador aritmetico */
	    emite($2, crArgPos($1.pos), crArgPos($3.pos), crArgPos($$.pos));
    }
  ;

expresionMultiplicativa
  : expresionUnaria
    {
      $$ = $1;
    }
  | expresionMultiplicativa operadorMultiplicativo expresionUnaria
    {
      $$.tipo = T_ERROR;

      if (! ($1.tipo == $3.tipo == T_ENTERO))
      {
        // Si los operandos no son de tipo entero y todavía no se ha lanzado el error, lo lanzamos.
        if ($1.tipo != T_ERROR && $3.tipo != T_ERROR)
        {
          yyerror("Los tipos del operador multiplicativo son incompatibles, deben ser enteros");
        }
      } 
      else
      {
        $$.tipo = T_ENTERO;
      }
      
      $$.pos = creaVarTemp();
	    
      /********** Expresion a partir de un operador multiplicativo */
	    emite($2, crArgPos($1.pos), crArgPos($3.pos), crArgPos($$.pos));
    }
  ;

expresionUnaria
  : expresionSufija
    {
      $$ = $1;
    }
  | operadorUnario expresionUnaria
    {
      $$.tipo = T_ERROR;

      if ($1.tipo != $2.tipo)
      {
        // Si el operando no es del mismo tipo que la expresión y todavía no se ha lanzado error, lo lanzamos.
        if ($1.tipo != T_ERROR && $2.tipo != T_ERROR)
        {
          yyerror("El tipo del operador unario no es compatible");
        }
      }
      else
      {
        $$.tipo = $1.tipo;
      }

	    $$.pos = creaVarTemp();

      if ( $$.tipo == T_ENTERO)
      {
        /************** Expresion a partir de un operador unario de tipo entero */
        emite($1.cod, crArgPos($2.pos), crArgNul(), crArgPos($$.pos));
      }
      else
      {
        /************** Expresion a partir de un operador unario de tipo lógico */
        emite($1.cod, crArgEnt(1), crArgPos($2.pos), crArgPos($$.pos));
      }
    }
  | operadorIncremento ID_
    {
      $$.tipo = T_ERROR;
      SIMB sim = obtTdS($2);
      if (sim.tipo == T_ERROR) {
        yyerror("Objeto no declarado");
      } else if (sim.tipo != T_ENTERO) {
        yyerror("Incomptabilidad de tipos, debe ser entero");
      } else {
        $$.tipo = T_ENTERO;
      }

      $$.pos = creaVarTemp();

      /* Primero se suma el identificador y luego se asigna */
      emite($1, crArgPos(sim.desp), crArgEnt(1), crArgPos(sim.desp));
      emite(EASIG, crArgPos(sim.desp), crArgNul(), crArgPos($$.pos));
    }
  ;

expresionSufija
  : APAR_ expresion CPAR_
    {
      $$ = $2;
    }
  | ID_ operadorIncremento
    {
      $$.tipo = T_ERROR;
      SIMB sim = obtTdS($1);
      if (sim.tipo == T_ERROR) {
        yyerror("Objeto no declarado");
      } else if (sim.tipo != T_ENTERO) {
        yyerror("Incomptabilidad de tipos, debe ser entero");
      } else {
        $$.tipo = T_ENTERO;
      }

      $$.pos = creaVarTemp();

      /* Primero se asigna y luego se suma el identificador */
      emite(EASIG, crArgPos(sim.desp), crArgNul(), crArgPos($$.pos));
      emite($2, crArgPos(sim.desp), crArgEnt(1), crArgPos(sim.desp));
    }
  | ID_ ACOR_ expresion CCOR_
    {
      $$.tipo = T_ERROR;
      SIMB sim = obtTdS($1);

      if (sim.tipo == T_ERROR) {
        yyerror("Objeto no declarado");
      } else if ($3.tipo != T_ENTERO) {
        if ($3.tipo != T_ERROR) {
          yyerror("Incompatibilidad de tipo en el indice del array");
        }
      } else if (sim.tipo != T_ARRAY) {
        yyerror("El objeto no es de tipo array");
      } else {
        DIM dim = obtTdA(sim.ref);
        $$.tipo = dim.telem;
      }

      $$.pos = creaVarTemp();
      emite(EAV, crArgPos(sim.desp), crArgPos($3.pos), crArgPos($$.pos));
    }
  | ID_
    {
      $$.tipo = T_ERROR;
      SIMB sim = obtTdS($1);

      if (sim.tipo == T_ERROR) {
        yyerror("Objeto no declarado");
      } else {
        $$.tipo = sim.tipo;
      }

      $$.pos = creaVarTemp();
      emite(EASIG, crArgPos(sim.desp), crArgNul(), crArgPos($$.pos));
    }
  | ID_ PUNTO_ ID_
    {
      $$.tipo = T_ERROR;
      SIMB sim = obtTdS($1);
      CAMP cam;

      if (sim.tipo == T_ERROR) {
        yyerror("Objeto no declarado");
      } else if (sim.tipo != T_RECORD) {
        yyerror("El objeto no es de tipo registro");
      } else {
        cam = obtTdR(sim.ref, $3);
        if (cam.tipo == T_ERROR) {
          yyerror("No existe el campo del registro");
        } else {
          $$.tipo = cam.tipo;
        }
      }

      $$.pos = creaVarTemp();
      int pos = sim.desp + cam.desp;
      emite(EASIG, crArgPos(pos), crArgNul(), crArgPos($$.pos));
    }
  | constante
    {
      $$.tipo = $1.tipo;

      $$.pos = creaVarTemp();
      emite(EASIG, crArgEnt($1.num), crArgNul(), crArgPos($$.pos));
    }
  ;

constante
  : CTE_ 
      {
        $$.tipo = T_ENTERO;
        $$.num = $1;
      }
  | TRUE_ 
      {
        $$.tipo = T_LOGICO;
        $$.num = TRUE;
      }
  | FALSE_
      {
        $$.tipo = T_LOGICO;
        $$.num = FALSE;
      }
  ;

operadorAsignacion
  : ASIG_
    {
      $$.tipo = T_ASIG;
      $$.cod = EASIG;
    }
  | MASASIG_ 
    {
      $$.tipo = T_ENTERO;
      $$.cod = ESUM;
    }
  | MENOSASIG_
    {
      $$.tipo = T_ENTERO;
      $$.cod = EDIF;
    }
  | PORASIG_
    {
      $$.tipo = T_ENTERO;
      $$.cod = EMULT;
    }
  | DIVASIG_
    {
      $$.tipo = T_ENTERO;
      $$.cod = EDIVI;
    }
  ;

operadorLogico
  : AND_ { $$ = EMULT;}
  | OR_ { $$ = ESUM;}
  ;

operadorIgualdad
  : IGU_ { $$ = EIGUAL;}
  | DIST_ { $$ = EDIST;}
  ;

operadorRelacional
  : MAY_ 	{ $$ = EMAY; }
  | MEN_ 	{ $$ = EMEN; }
  | MAYIGU_ { $$ = EMAYEQ; }
  | MENIGU_ { $$ = EMENEQ; }
  ;

operadorAditivo
  : MAS_ 	{ $$ = ESUM; }
  | MENOS_ 	{ $$ = EDIF; }
  ;

operadorMultiplicativo
  : POR_ 	{ $$ = EMULT; }
  | DIV_ 	{ $$ = EDIVI; }
  | MOD_ 	{ $$ = RESTO; }
  ;

operadorUnario
  : MAS_
    {
      $$.tipo = T_ENTERO;
      $$.cod = EASIG;
    }
  | MENOS_
    {
      $$.tipo = T_ENTERO;
      $$.cod = EASIG;
    }
  | NOT_
    {
      $$.tipo = T_LOGICO;
      $$.cod = EDIF;
    }
  ;

operadorIncremento
  : INC_
    {
      $$ = ESUM;
    }
  | DEC_
    {
      $$ = EDIF;
    }
  ;

%%
/*****************************************************************************/


