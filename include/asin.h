/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_ASIN_H_INCLUDED
# define YY_YY_ASIN_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    MAS_ = 258,
    MENOS_ = 259,
    POR_ = 260,
    DIV_ = 261,
    MOD_ = 262,
    MASASIG_ = 263,
    MENOSASIG_ = 264,
    PORASIG_ = 265,
    DIVASIG_ = 266,
    INC_ = 267,
    DEC_ = 268,
    ASIG_ = 269,
    ALLA_ = 270,
    CLLA_ = 271,
    APAR_ = 272,
    CPAR_ = 273,
    ACOR_ = 274,
    CCOR_ = 275,
    IGU_ = 276,
    DIST_ = 277,
    MAY_ = 278,
    MEN_ = 279,
    MAYIGU_ = 280,
    MENIGU_ = 281,
    AND_ = 282,
    OR_ = 283,
    NOT_ = 284,
    STRUCT_ = 285,
    INT_ = 286,
    BOOL_ = 287,
    READ_ = 288,
    PRINT_ = 289,
    IF_ = 290,
    ELSE_ = 291,
    WHILE_ = 292,
    TRUE_ = 293,
    FALSE_ = 294,
    DELI_ = 295,
    PUNTO_ = 296,
    ID_ = 297,
    CTE_ = 298
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 14 "src/asin.y" /* yacc.c:1909  */
/*********************************************************************/
  int   cent;                               /* Para el terminal "cte" entera */
  char  *ident;                                  /* Nombre del identificador */
  int tipo;                                              /* Tipo del simbolo */
  struct CamposStruct lisCampos;  /* Estructura para los campos del registro */
  int pos;      /* Posicion del simbolo en memoria (desplazamiento relativo) */
  struct ExpreStruct tipoExpre;         /*Estructura para la posicion y tipo */
  struct OperadorStruct tipoOp;       /*Estructura para la posicion y codigo */
  struct ConstanteStruct tipoCons;    /*Estructura para la posicion y numero */

#line 109 "asin.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_ASIN_H_INCLUDED  */
