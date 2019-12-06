/*****************************************************************************/
/**   Ejemplo de un posible fichero de cabeceras ("header.h") donde situar  **/
/** las definiciones de constantes, variables y estructuras para MenosC.20  **/
/** Los alumos deberan adaptarlo al desarrollo de su propio compilador.     **/ 
/*****************************************************************************/
#ifndef _HEADER_H
#define _HEADER_H

/****************************************************** Constantes generales */
#define TRUE  1
#define FALSE 0
#define TALLA_TIPO_SIMPLE 1
#define T_ASIG 6
/************************ Variables externas definidas en Programa Principal */
extern int verTDS;                       /* Flag para saber si mostrar la TDS*/
/***************************** Variables externas definidas en las librerıas */
extern int dvar;               /* Desplazamiento en el Segmento de Variables */
extern int si;		  /* Desplazamiento relativo en el Segmento de Código*/
/************************************* Variables externas definidas en el AL */
extern int yylex();
extern int yyparse();

extern FILE *yyin;                           /* Fichero de entrada           */
extern int   yylineno;                       /* Contador del numero de linea */
extern char *yytext;                         /* Patron detectado             */
/********* Funciones y variables externas definidas en el Programa Principal */
extern void yyerror(const char * msg) ;   /* Tratamiento de errores          */

extern int verbosidad;                   /* Flag si se desea una traza       */
extern int numErrores;              /* Contador del numero de errores        */
struct CamposStruct {    /* Estructura para los campos de un registro */
  int talla;
  int ref;
}CAMPOSSTRUCT;
struct ExpreStruct {    /* Estructura para los campos de un registro */
  int tipo;
  int pos;
}EXPRESTRUCT;
#endif  /* _HEADER_H */
/*****************************************************************************/
