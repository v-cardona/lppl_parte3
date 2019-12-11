/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 6 "src/asin.y" /* yacc.c:339  */

#include <stdio.h>
#include <string.h>
#include "header.h"
#include "libtds.h"
#include "libgci.h"

#line 74 "asin.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "asin.h".  */
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
#line 14 "src/asin.y" /* yacc.c:355  */
/*********************************************************************/
  int   cent;                               /* Para el terminal "cte" entera */
  char  *ident;                                  /* Nombre del identificador */
  int tipo;                                              /* Tipo del simbolo */
  struct CamposStruct lisCampos;  /* Estructura para los campos del registro */
  int pos;      /* Posicion del simbolo en memoria (desplazamiento relativo) */
  struct ExpreStruct tipoExpre;         /*Estructura para la posicion y tipo */
  struct OperadorStruct tipoOp;       /*Estructura para la posicion y codigo */
  struct ConstanteStruct tipoCons;    /*Estructura para la posicion y numero */

#line 169 "asin.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_ASIN_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 186 "asin.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   247

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  82
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  144

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   298

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    48,    48,    48,    56,    57,    61,    62,    67,    76,
      88,   104,   115,   119,   127,   132,   145,   146,   147,   148,
     149,   150,   154,   155,   159,   169,   180,   188,   179,   201,
     205,   200,   221,   222,   226,   230,   257,   290,   323,   327,
     348,   352,   372,   376,   396,   400,   425,   429,   454,   458,
     488,   509,   513,   531,   552,   566,   589,   599,   604,   609,
     617,   622,   627,   632,   637,   645,   646,   650,   651,   655,
     656,   657,   658,   662,   663,   667,   668,   669,   673,   678,
     683,   691,   695
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "MAS_", "MENOS_", "POR_", "DIV_", "MOD_",
  "MASASIG_", "MENOSASIG_", "PORASIG_", "DIVASIG_", "INC_", "DEC_",
  "ASIG_", "ALLA_", "CLLA_", "APAR_", "CPAR_", "ACOR_", "CCOR_", "IGU_",
  "DIST_", "MAY_", "MEN_", "MAYIGU_", "MENIGU_", "AND_", "OR_", "NOT_",
  "STRUCT_", "INT_", "BOOL_", "READ_", "PRINT_", "IF_", "ELSE_", "WHILE_",
  "TRUE_", "FALSE_", "DELI_", "PUNTO_", "ID_", "CTE_", "$accept",
  "programa", "$@1", "secuenciaSentencias", "sentencia", "declaracion",
  "tipoSimple", "listaCampos", "instruccion", "listaInstrucciones",
  "instruccionEntradaSalida", "instruccionSeleccion", "@2", "@3",
  "instruccionIteracion", "@4", "@5", "instruccionExpresion", "expresion",
  "expresionLogica", "expresionIgualdad", "expresionRelacional",
  "expresionAditiva", "expresionMultiplicativa", "expresionUnaria",
  "expresionSufija", "constante", "operadorAsignacion", "operadorLogico",
  "operadorIgualdad", "operadorRelacional", "operadorAditivo",
  "operadorMultiplicativo", "operadorUnario", "operadorIncremento", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298
};
# endif

#define YYPACT_NINF -86

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-86)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -86,    13,     0,   -86,   107,   -86,   -86,   -86,   -86,   148,
      15,   -86,     2,   -86,   -86,     3,     7,    19,   -86,   -86,
     -86,   -86,    -3,   -86,    63,   -86,   -86,    17,   -86,   -86,
     -86,   -86,   -86,    -7,    21,    49,    89,    52,    16,   -86,
     -86,   -86,    22,    20,   -86,   -86,   163,    50,    58,    32,
      15,    15,    87,   -86,   -86,   -86,   -86,   -86,    15,    66,
      15,   -86,   -86,   -86,    67,   -86,   -86,   -86,    22,   -86,
     -86,    22,   -86,   -86,   -86,   -86,    22,   -86,   -86,    22,
     -86,   -86,   -86,    22,    28,   -86,   -86,   -86,   -86,   -86,
      75,    -2,    73,    98,   105,    15,   106,    74,   -86,    34,
      82,   -86,    49,    89,    52,    16,   -86,    15,    85,    90,
      92,    93,    91,   103,   -86,   -86,    74,    15,   108,   109,
     112,   -86,   -86,   113,   114,   -86,   -86,   204,   137,    15,
     -86,   -86,   116,   -86,   -86,   -86,   -86,   204,   -86,   -86,
     121,   -86,   204,   -86
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     0,     1,     0,    78,    79,    81,    82,     0,
       0,    80,     0,    12,    13,     0,     0,     0,    29,    58,
      59,    33,    54,    57,     0,     4,     6,     0,     7,    18,
      19,    20,    21,     0,    34,    38,    40,    42,    44,    46,
      48,    56,     0,     0,    16,    22,     0,     0,     0,     0,
       0,     0,     0,    61,    62,    63,    64,    60,     0,     0,
       0,    52,     3,     5,     0,    32,    65,    66,     0,    67,
      68,     0,    69,    70,    71,    72,     0,    73,    74,     0,
      75,    76,    77,     0,    54,    49,    50,    17,    23,    51,
       0,     0,     0,     0,     0,     0,     0,    55,    35,     0,
       0,     8,    39,    41,    43,    45,    47,     0,     0,     0,
       0,     0,     0,     0,    26,    30,    53,     0,     0,     0,
       0,    55,    14,     0,     0,    24,    25,     0,     0,     0,
      37,     9,     0,    53,    11,    15,    27,     0,    36,    10,
       0,    31,     0,    28
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -86,   -86,   -86,   -86,   134,   -86,   -45,   -86,    -9,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,    -8,   -86,
      94,    88,    95,   110,   -38,   -86,    69,   -85,   -86,   -86,
     -86,   -86,   -86,   -86,   -21
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    24,    25,    26,    27,    91,    28,    46,
      29,    30,   127,   140,    31,    52,   128,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    60,    68,    71,
      76,    79,    83,    42,    43
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      45,    61,    47,    90,    85,    53,    54,    55,    56,     7,
       8,    57,   117,     3,   110,     4,    58,    48,     5,     6,
      49,    80,    81,    82,    50,     5,     6,     7,     8,    13,
      14,   129,    10,    65,     7,     8,    51,    88,    59,    10,
       7,     8,    93,    94,    11,   106,   111,   107,    66,    67,
      96,    11,    98,    19,    20,    77,    78,    22,    23,    64,
      19,    20,    86,    61,    84,    23,     5,     6,    89,   108,
      69,    70,    19,    20,    92,     7,     8,    23,     9,    62,
      10,    99,    53,    54,    55,    56,   100,   115,    57,    13,
      14,   112,    11,    12,    13,    14,    15,    16,    17,   120,
      18,    19,    20,    21,    95,    22,    23,   101,    97,   130,
       5,     6,    72,    73,    74,    75,   113,   109,   136,     7,
       8,   138,     9,   114,    10,   119,   116,   121,   141,   132,
     122,   125,   133,   143,   123,   124,    11,    12,    13,    14,
      15,    16,    17,   126,    18,    19,    20,    21,   131,    22,
      23,     5,     6,   134,   135,   137,   139,   142,    63,   103,
       7,     8,   102,     9,    44,    10,     5,     6,   118,     0,
       0,   104,     0,     0,     0,     7,     8,    11,     9,    87,
      10,    15,    16,    17,     0,    18,    19,    20,    21,   105,
      22,    23,    11,     0,     0,     0,    15,    16,    17,     0,
      18,    19,    20,    21,     0,    22,    23,     5,     6,     0,
       0,     0,     0,     0,     0,     0,     7,     8,     0,     9,
       0,    10,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    11,     0,     0,     0,    15,    16,    17,
       0,    18,    19,    20,    21,     0,    22,    23
};

static const yytype_int16 yycheck[] =
{
       9,    22,    10,    48,    42,     8,     9,    10,    11,    12,
      13,    14,    97,     0,    16,    15,    19,    15,     3,     4,
      17,     5,     6,     7,    17,     3,     4,    12,    13,    31,
      32,   116,    17,    40,    12,    13,    17,    46,    41,    17,
      12,    13,    50,    51,    29,    83,    91,    19,    27,    28,
      58,    29,    60,    38,    39,     3,     4,    42,    43,    42,
      38,    39,    42,    84,    42,    43,     3,     4,    18,    41,
      21,    22,    38,    39,    42,    12,    13,    43,    15,    16,
      17,    14,     8,     9,    10,    11,    19,    95,    14,    31,
      32,    18,    29,    30,    31,    32,    33,    34,    35,   107,
      37,    38,    39,    40,    17,    42,    43,    40,    42,   117,
       3,     4,    23,    24,    25,    26,    18,    42,   127,    12,
      13,   129,    15,    18,    17,    43,    20,    42,   137,    20,
      40,    40,    20,   142,    42,    42,    29,    30,    31,    32,
      33,    34,    35,    40,    37,    38,    39,    40,    40,    42,
      43,     3,     4,    40,    40,    18,    40,    36,    24,    71,
      12,    13,    68,    15,    16,    17,     3,     4,    99,    -1,
      -1,    76,    -1,    -1,    -1,    12,    13,    29,    15,    16,
      17,    33,    34,    35,    -1,    37,    38,    39,    40,    79,
      42,    43,    29,    -1,    -1,    -1,    33,    34,    35,    -1,
      37,    38,    39,    40,    -1,    42,    43,     3,     4,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    12,    13,    -1,    15,
      -1,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    -1,    -1,    -1,    33,    34,    35,
      -1,    37,    38,    39,    40,    -1,    42,    43
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    45,    46,     0,    15,     3,     4,    12,    13,    15,
      17,    29,    30,    31,    32,    33,    34,    35,    37,    38,
      39,    40,    42,    43,    47,    48,    49,    50,    52,    54,
      55,    58,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    77,    78,    16,    52,    53,    62,    15,    17,
      17,    17,    59,     8,     9,    10,    11,    14,    19,    41,
      71,    78,    16,    48,    42,    40,    27,    28,    72,    21,
      22,    73,    23,    24,    25,    26,    74,     3,     4,    75,
       5,     6,     7,    76,    42,    68,    42,    16,    52,    18,
      50,    51,    42,    62,    62,    17,    62,    42,    62,    14,
      19,    40,    64,    65,    66,    67,    68,    19,    41,    42,
      16,    50,    18,    18,    18,    62,    20,    71,    70,    43,
      62,    42,    40,    42,    42,    40,    40,    56,    60,    71,
      62,    40,    20,    20,    40,    40,    52,    18,    62,    40,
      57,    52,    36,    52
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    44,    46,    45,    47,    47,    48,    48,    49,    49,
      49,    49,    50,    50,    51,    51,    52,    52,    52,    52,
      52,    52,    53,    53,    54,    54,    56,    57,    55,    59,
      60,    58,    61,    61,    62,    62,    62,    62,    63,    63,
      64,    64,    65,    65,    66,    66,    67,    67,    68,    68,
      68,    69,    69,    69,    69,    69,    69,    70,    70,    70,
      71,    71,    71,    71,    71,    72,    72,    73,    73,    74,
      74,    74,    74,    75,    75,    76,    76,    76,    77,    77,
      77,    78,    78
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     4,     1,     2,     1,     1,     3,     5,
       6,     6,     1,     1,     3,     4,     2,     3,     1,     1,
       1,     1,     1,     2,     5,     5,     0,     0,     9,     0,
       0,     7,     2,     1,     1,     3,     6,     5,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     2,
       2,     3,     2,     4,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 48 "src/asin.y" /* yacc.c:1646  */
    { dvar = 0; si = 0;}
#line 1392 "asin.c" /* yacc.c:1646  */
    break;

  case 3:
#line 50 "src/asin.y" /* yacc.c:1646  */
    {
      if (verTDS) verTdS();
    }
#line 1400 "asin.c" /* yacc.c:1646  */
    break;

  case 8:
#line 68 "src/asin.y" /* yacc.c:1646  */
    {
        if (! insTdS((yyvsp[-1].ident), (yyvsp[-2].tipo), dvar, -1)) {
          yyerror("Identificador repetido");
        } else {
          dvar += TALLA_TIPO_SIMPLE;
        }
      }
#line 1412 "asin.c" /* yacc.c:1646  */
    break;

  case 9:
#line 77 "src/asin.y" /* yacc.c:1646  */
    {
        if ((yyvsp[-4].tipo) != (yyvsp[-1].tipoCons).tipo) {
          yyerror("Tipos incompatibles");
        }
        else if (! insTdS((yyvsp[-3].ident), (yyvsp[-4].tipo), dvar, -1)) {
          yyerror("Identificador repetido");
        } else {
          dvar += TALLA_TIPO_SIMPLE;
        }
      }
#line 1427 "asin.c" /* yacc.c:1646  */
    break;

  case 10:
#line 89 "src/asin.y" /* yacc.c:1646  */
    {
        int numelem = (yyvsp[-2].cent);
        if (numelem <= 0) {
          yyerror("Talla negativa del array");
          numelem = 0;
        }
        int refe = insTdA((yyvsp[-5].tipo), numelem);
        if (! insTdS((yyvsp[-4].ident), T_ARRAY, dvar, refe)) {
          yyerror("Identificador repetido");
        } else {
          dvar += numelem * TALLA_TIPO_SIMPLE;
        }
        
      }
#line 1446 "asin.c" /* yacc.c:1646  */
    break;

  case 11:
#line 105 "src/asin.y" /* yacc.c:1646  */
    {
        if (! insTdS((yyvsp[-1].ident), T_RECORD, dvar, (yyvsp[-3].lisCampos).ref)) {
          yyerror("Identificador repetido");
        } else {
          dvar += TALLA_TIPO_SIMPLE;
        }
      }
#line 1458 "asin.c" /* yacc.c:1646  */
    break;

  case 12:
#line 116 "src/asin.y" /* yacc.c:1646  */
    {
        (yyval.tipo) = T_ENTERO;
      }
#line 1466 "asin.c" /* yacc.c:1646  */
    break;

  case 13:
#line 120 "src/asin.y" /* yacc.c:1646  */
    {
        (yyval.tipo) = T_LOGICO;
      }
#line 1474 "asin.c" /* yacc.c:1646  */
    break;

  case 14:
#line 128 "src/asin.y" /* yacc.c:1646  */
    {
        (yyval.lisCampos).ref = insTdR(-1, (yyvsp[-1].ident), (yyvsp[-2].tipo), 0);
        (yyval.lisCampos).talla= TALLA_TIPO_SIMPLE;
      }
#line 1483 "asin.c" /* yacc.c:1646  */
    break;

  case 15:
#line 133 "src/asin.y" /* yacc.c:1646  */
    {
        (yyval.lisCampos).ref = (yyvsp[-3].lisCampos).ref;
        int refe = insTdR((yyvsp[-3].lisCampos).ref, (yyvsp[-1].ident), (yyvsp[-2].tipo), (yyvsp[-3].lisCampos).talla);
        if ( refe == -1) {
          yyerror("Campo repetido");
        } else{
          (yyval.lisCampos).talla = (yyvsp[-3].lisCampos).talla + TALLA_TIPO_SIMPLE;
        }
      }
#line 1497 "asin.c" /* yacc.c:1646  */
    break;

  case 24:
#line 160 "src/asin.y" /* yacc.c:1646  */
    {
      SIMB sim = obtTdS((yyvsp[-2].ident));
      if (sim.tipo == T_ERROR) {
        yyerror("Objeto no declarado");
      } else if (sim.tipo != T_ENTERO) {
        yyerror("El argumento del read debe ser entero");
      }
      emite(EREAD, crArgNul(), crArgNul(), crArgNul(sim.desp));
    }
#line 1511 "asin.c" /* yacc.c:1646  */
    break;

  case 25:
#line 170 "src/asin.y" /* yacc.c:1646  */
    {
      if ((yyvsp[-2].tipoExpre).tipo != T_ENTERO && (yyvsp[-2].tipoExpre).tipo != T_ERROR) {
        yyerror("El argumento del print debe ser entero");
      }
      emite(EWRITE, crArgNul(), crArgNul(), crArgNul((yyvsp[-2].tipoExpre).pos));
    }
#line 1522 "asin.c" /* yacc.c:1646  */
    break;

  case 26:
#line 180 "src/asin.y" /* yacc.c:1646  */
    {
      if ((yyvsp[-1].tipoExpre).tipo != T_LOGICO && (yyvsp[-1].tipoExpre).tipo != T_ERROR) {
        yyerror("La condicion del if debe ser logica");
      }
      (yyval.cent) = creaLans(si);
      emite(EIGUAL, crArgPos((yyvsp[-1].tipoExpre).pos), crArgEnt(FALSE), crArgEtq(-1));
    }
#line 1534 "asin.c" /* yacc.c:1646  */
    break;

  case 27:
#line 188 "src/asin.y" /* yacc.c:1646  */
    {
      (yyval.cent) = creaLans(si);
      emite(GOTOS, crArgNul(), crArgNul(), crArgEtq(-1));
      completaLans((yyvsp[-1].cent), crArgEnt(si));
    }
#line 1544 "asin.c" /* yacc.c:1646  */
    break;

  case 28:
#line 194 "src/asin.y" /* yacc.c:1646  */
    {
      completaLans((yyvsp[-2].cent), crArgEnt(si));
    }
#line 1552 "asin.c" /* yacc.c:1646  */
    break;

  case 29:
#line 201 "src/asin.y" /* yacc.c:1646  */
    {
      (yyval.cent) = si;
    }
#line 1560 "asin.c" /* yacc.c:1646  */
    break;

  case 30:
#line 205 "src/asin.y" /* yacc.c:1646  */
    {
      if ((yyvsp[0].tipoExpre).tipo != T_LOGICO && (yyvsp[0].tipoExpre).tipo != T_ERROR) {
        yyerror("La condicion del while deber ser logica");
      }
      (yyval.cent) = creaLans(si);
      emite(EIGUAL, crArgPos((yyvsp[0].tipoExpre).pos), crArgEnt(FALSE), crArgEtq(-1));
    }
#line 1572 "asin.c" /* yacc.c:1646  */
    break;

  case 31:
#line 213 "src/asin.y" /* yacc.c:1646  */
    {
      emite(GOTOS, crArgNul(), crArgNul(), crArgEtq((yyvsp[-5].cent)));
      completaLans((yyvsp[-2].cent), crArgEnt(si));
    }
#line 1581 "asin.c" /* yacc.c:1646  */
    break;

  case 34:
#line 227 "src/asin.y" /* yacc.c:1646  */
    {
      (yyval.tipoExpre) = (yyvsp[0].tipoExpre);
    }
#line 1589 "asin.c" /* yacc.c:1646  */
    break;

  case 35:
#line 231 "src/asin.y" /* yacc.c:1646  */
    {
      (yyval.tipoExpre).tipo = T_ERROR;
      SIMB sim = obtTdS((yyvsp[-2].ident));

      if (sim.tipo == T_ERROR) {
        yyerror("Objeto no declarado");
      } else if (! ((sim.tipo == (yyvsp[0].tipoExpre).tipo == T_ENTERO) || (sim.tipo == (yyvsp[0].tipoExpre).tipo == T_LOGICO))) {
        if ((yyvsp[0].tipoExpre).tipo != T_ERROR) {
          yyerror("Tipos incompatibles en la asignacion");
        }
      } else if ((yyvsp[0].tipoExpre).tipo == T_LOGICO && (yyvsp[-1].tipoOp).tipo != T_ASIG) {
        yyerror("Operador no compatible con el tipo logico");
      } else {
        (yyval.tipoExpre).tipo = sim.tipo;
      }

      if ((yyvsp[-1].tipoOp).tipo == T_ASIG) {
        emite((yyvsp[-1].tipoOp).cod, crArgPos((yyvsp[0].tipoExpre).pos), crArgNul(), crArgPos(sim.desp));
      } else {
        emite((yyvsp[-1].tipoOp).cod, crArgPos(sim.desp), crArgPos((yyvsp[0].tipoExpre).pos), crArgPos(sim.desp));
      }

      (yyval.tipoExpre).pos = creaVarTemp();
      emite(EASIG, crArgPos(sim.desp), crArgNul(), crArgPos((yyval.tipoExpre).pos));
      
    }
#line 1620 "asin.c" /* yacc.c:1646  */
    break;

  case 36:
#line 258 "src/asin.y" /* yacc.c:1646  */
    {
      (yyval.tipoExpre).tipo = T_ERROR;
      SIMB sim = obtTdS((yyvsp[-5].ident));

      if (sim.tipo == T_ERROR) {
        yyerror("Objeto no declarado");
      } else if ((yyvsp[-3].tipoExpre).tipo != T_ENTERO) {
        if ((yyvsp[-3].tipoExpre).tipo != T_ERROR) {
          yyerror("Incompatibilidad de tipo en el indice del array");
        }
      } else if (sim.tipo != T_ARRAY) {
        yyerror("El objeto no es de tipo array");
      } else {
        DIM dim = obtTdA(sim.ref);
        if (dim.telem != (yyvsp[0].tipoExpre).tipo) {
          if ((yyvsp[0].tipoExpre).tipo != T_ERROR) {
            yyerror("Incomptabilidad de tipo entre el array y la asignacion");
          }
        } else if ((yyvsp[0].tipoExpre).tipo == T_LOGICO && (yyvsp[-1].tipoOp).tipo != T_ASIG) {
            yyerror("Operador no compatible con el tipo logico");
        } else {
            (yyval.tipoExpre).tipo = dim.telem;
        }

        (yyval.tipoExpre).pos = creaVarTemp();
        emite(EAV, crArgPos(sim.desp), crArgPos((yyvsp[-3].tipoExpre).pos), crArgPos((yyval.tipoExpre).pos));
        if ((yyvsp[-1].tipoOp).cod != EASIG) {
          emite((yyvsp[-1].tipoOp).cod, crArgPos((yyval.tipoExpre).pos), crArgPos((yyvsp[0].tipoExpre).pos), crArgPos((yyval.tipoExpre).pos));
        }
        emite(EVA, crArgPos(sim.desp), crArgPos((yyvsp[-3].tipoExpre).pos), crArgPos((yyval.tipoExpre).pos));
      }
    }
#line 1657 "asin.c" /* yacc.c:1646  */
    break;

  case 37:
#line 291 "src/asin.y" /* yacc.c:1646  */
    {
      (yyval.tipoExpre).tipo = T_ERROR;
      SIMB sim = obtTdS((yyvsp[-4].ident));
      CAMP cam;

      if (sim.tipo == T_ERROR) {
        yyerror("Objeto no declarado");
      } else if (sim.tipo != T_RECORD) {
        yyerror("El objeto no es de tipo registro");
      } else {
        cam = obtTdR(sim.ref, (yyvsp[-2].ident));
        if (cam.tipo == T_ERROR) {
          yyerror("No existe el campo del registro");
        } else if (cam.tipo != (yyvsp[0].tipoExpre).tipo) {
          if ((yyvsp[0].tipoExpre).tipo != T_ERROR) {
            yyerror("Incomptabilidad de tipos entre el campo del registro y la asignacion");
          }
        } else if (cam.tipo == T_LOGICO && (yyvsp[-1].tipoOp).tipo != T_ASIG) {
            yyerror("Operador no compatible con el tipo logico");
        } else {
          (yyval.tipoExpre).tipo = cam.tipo;
        }
      }

      (yyval.tipoExpre).pos = creaVarTemp();
      int pos = sim.desp + cam.desp;
      emite(EASIG, crArgPos((yyvsp[0].tipoExpre).pos), crArgNul(), crArgPos(pos));
      emite(EASIG, crArgPos((yyvsp[0].tipoExpre).pos), crArgNul(), crArgPos((yyval.tipoExpre).pos));
    }
#line 1691 "asin.c" /* yacc.c:1646  */
    break;

  case 38:
#line 324 "src/asin.y" /* yacc.c:1646  */
    {
      (yyval.tipoExpre) = (yyvsp[0].tipoExpre);
    }
#line 1699 "asin.c" /* yacc.c:1646  */
    break;

  case 39:
#line 328 "src/asin.y" /* yacc.c:1646  */
    {
      (yyval.tipoExpre).tipo = T_ERROR;
      if (! (((yyvsp[-2].tipoExpre).tipo == T_LOGICO) && ((yyvsp[0].tipoExpre).tipo == T_LOGICO))) {
        if ((yyvsp[-2].tipoExpre).tipo != T_ERROR && (yyvsp[0].tipoExpre).tipo != T_ERROR) {
          yyerror("Los tipos del operador logico son incompatibles, deben ser logicos");
        }
      } else {
        (yyval.tipoExpre).tipo = T_LOGICO;
      }

      (yyval.tipoExpre).pos = creaVarTemp();
      emite((yyvsp[-1].tipo), crArgPos((yyvsp[-2].tipoExpre).pos), crArgPos((yyvsp[0].tipoExpre).pos), crArgPos((yyval.tipoExpre).pos));
      if ((yyvsp[-1].tipo) == ESUM) {
        emite(EMENEQ, crArgPos((yyval.tipoExpre).pos), crArgEnt(1), crArgEtq(si + 2));
        emite(EASIG, crArgEnt(1), crArgNul(), crArgPos((yyval.tipoExpre).pos));
      }
    }
#line 1721 "asin.c" /* yacc.c:1646  */
    break;

  case 40:
#line 349 "src/asin.y" /* yacc.c:1646  */
    {
      (yyval.tipoExpre) = (yyvsp[0].tipoExpre);
    }
#line 1729 "asin.c" /* yacc.c:1646  */
    break;

  case 41:
#line 353 "src/asin.y" /* yacc.c:1646  */
    {
      (yyval.tipoExpre).tipo = T_ERROR;

      if ((yyvsp[-2].tipoExpre).tipo != (yyvsp[0].tipoExpre).tipo) {
        if ((yyvsp[-2].tipoExpre).tipo != T_ERROR && (yyvsp[0].tipoExpre).tipo != T_ERROR) {
          yyerror("Los tipos del operador de igualdad son incompatibles");
        }
      } else {
        (yyval.tipoExpre).tipo = T_LOGICO;
      }

      (yyval.tipoExpre).pos = creaVarTemp();
      emite(EASIG, crArgEnt(1), crArgNul(), crArgPos((yyval.tipoExpre).pos));
      emite((yyvsp[-1].tipo), crArgPos((yyvsp[-2].tipoExpre).pos), crArgPos((yyvsp[0].tipoExpre).pos), crArgEtq(si + 2));
      emite(EASIG, crArgEnt(0), crArgNul(), crArgPos((yyval.tipoExpre).pos));
    }
#line 1750 "asin.c" /* yacc.c:1646  */
    break;

  case 42:
#line 373 "src/asin.y" /* yacc.c:1646  */
    {
      (yyval.tipoExpre) = (yyvsp[0].tipoExpre);
    }
#line 1758 "asin.c" /* yacc.c:1646  */
    break;

  case 43:
#line 377 "src/asin.y" /* yacc.c:1646  */
    {
      (yyval.tipoExpre).tipo = T_ERROR;

      if (! (((yyvsp[-2].tipoExpre).tipo == T_ENTERO) && ((yyvsp[0].tipoExpre).tipo == T_ENTERO))) {
        if ((yyvsp[-2].tipoExpre).tipo != T_ERROR && (yyvsp[0].tipoExpre).tipo != T_ERROR) {
          yyerror("Los tipos del operador relacional son incompatibles, deben ser enteros");
        }
      } else {
        (yyval.tipoExpre).tipo = T_LOGICO;
      }

      (yyval.tipoExpre).pos = creaVarTemp();
      emite(EASIG, crArgEnt(1), crArgNul(), crArgPos((yyval.tipoExpre).pos));
      emite((yyvsp[-1].tipo), crArgPos((yyvsp[-2].tipoExpre).pos), crArgPos((yyvsp[0].tipoExpre).pos), crArgEtq(si + 2));
      emite(EASIG, crArgEnt(0), crArgNul(), crArgPos((yyval.tipoExpre).pos));
    }
#line 1779 "asin.c" /* yacc.c:1646  */
    break;

  case 44:
#line 397 "src/asin.y" /* yacc.c:1646  */
    {
      (yyval.tipoExpre) = (yyvsp[0].tipoExpre);
    }
#line 1787 "asin.c" /* yacc.c:1646  */
    break;

  case 45:
#line 401 "src/asin.y" /* yacc.c:1646  */
    {
      (yyval.tipoExpre).tipo = T_ERROR;

      if (! ((yyvsp[-2].tipoExpre).tipo == (yyvsp[0].tipoExpre).tipo == T_ENTERO))
      {
        // Si los operandos no son enteros y todavía no se ha lanzado el error, lo lanzamos.
        if ((yyvsp[-2].tipoExpre).tipo != T_ERROR && (yyvsp[0].tipoExpre).tipo != T_ERROR)
        {
          yyerror("Los tipos del operador aditivo son incompatibles, deben ser enteros");
        }
      }
      else
      {
        (yyval.tipoExpre).tipo = T_ENTERO;
      }

	    (yyval.tipoExpre).pos = creaVarTemp();

	    /************** Expresion a partir de un operador aritmetico */
	    emite((yyvsp[-1].tipo), crArgPos((yyvsp[-2].tipoExpre).pos), crArgPos((yyvsp[0].tipoExpre).pos), crArgPos((yyval.tipoExpre).pos));
    }
#line 1813 "asin.c" /* yacc.c:1646  */
    break;

  case 46:
#line 426 "src/asin.y" /* yacc.c:1646  */
    {
      (yyval.tipoExpre) = (yyvsp[0].tipoExpre);
    }
#line 1821 "asin.c" /* yacc.c:1646  */
    break;

  case 47:
#line 430 "src/asin.y" /* yacc.c:1646  */
    {
      (yyval.tipoExpre).tipo = T_ERROR;

      if (! ((yyvsp[-2].tipoExpre).tipo == (yyvsp[0].tipoExpre).tipo == T_ENTERO))
      {
        // Si los operandos no son de tipo entero y todavía no se ha lanzado el error, lo lanzamos.
        if ((yyvsp[-2].tipoExpre).tipo != T_ERROR && (yyvsp[0].tipoExpre).tipo != T_ERROR)
        {
          yyerror("Los tipos del operador multiplicativo son incompatibles, deben ser enteros");
        }
      } 
      else
      {
        (yyval.tipoExpre).tipo = T_ENTERO;
      }
      
      (yyval.tipoExpre).pos = creaVarTemp();
	    
      /********** Expresion a partir de un operador multiplicativo */
	    emite((yyvsp[-1].tipo), crArgPos((yyvsp[-2].tipoExpre).pos), crArgPos((yyvsp[0].tipoExpre).pos), crArgPos((yyval.tipoExpre).pos));
    }
#line 1847 "asin.c" /* yacc.c:1646  */
    break;

  case 48:
#line 455 "src/asin.y" /* yacc.c:1646  */
    {
      (yyval.tipoExpre) = (yyvsp[0].tipoExpre);
    }
#line 1855 "asin.c" /* yacc.c:1646  */
    break;

  case 49:
#line 459 "src/asin.y" /* yacc.c:1646  */
    {
      (yyval.tipoExpre).tipo = T_ERROR;

      if ((yyvsp[-1].tipoOp).tipo != (yyvsp[0].tipoExpre).tipo)
      {
        // Si el operando no es del mismo tipo que la expresión y todavía no se ha lanzado error, lo lanzamos.
        if ((yyvsp[-1].tipoOp).tipo != T_ERROR && (yyvsp[0].tipoExpre).tipo != T_ERROR)
        {
          yyerror("El tipo del operador unario no es compatible");
        }
      }
      else
      {
        (yyval.tipoExpre).tipo = (yyvsp[-1].tipoOp).tipo;
      }

	    (yyval.tipoExpre).pos = creaVarTemp();

      if ( (yyval.tipoExpre).tipo == T_ENTERO)
      {
        /************** Expresion a partir de un operador unario de tipo entero */
        emite((yyvsp[-1].tipoOp).cod, crArgPos((yyvsp[0].tipoExpre).pos), crArgNul(), crArgPos((yyval.tipoExpre).pos));
      }
      else
      {
        /************** Expresion a partir de un operador unario de tipo lógico */
        emite((yyvsp[-1].tipoOp).cod, crArgEnt(1), crArgPos((yyvsp[0].tipoExpre).pos), crArgPos((yyval.tipoExpre).pos));
      }
    }
#line 1889 "asin.c" /* yacc.c:1646  */
    break;

  case 50:
#line 489 "src/asin.y" /* yacc.c:1646  */
    {
      (yyval.tipoExpre).tipo = T_ERROR;
      SIMB sim = obtTdS((yyvsp[0].ident));
      if (sim.tipo == T_ERROR) {
        yyerror("Objeto no declarado");
      } else if (sim.tipo != T_ENTERO) {
        yyerror("Incomptabilidad de tipos, debe ser entero");
      } else {
        (yyval.tipoExpre).tipo = T_ENTERO;
      }

      (yyval.tipoExpre).pos = creaVarTemp();

      /* Primero se suma el identificador y luego se asigna */
      emite((yyvsp[-1].tipo), crArgPos(sim.desp), crArgEnt(1), crArgPos(sim.desp));
      emite(EASIG, crArgPos(sim.desp), crArgNul(), crArgPos((yyval.tipoExpre).pos));
    }
#line 1911 "asin.c" /* yacc.c:1646  */
    break;

  case 51:
#line 510 "src/asin.y" /* yacc.c:1646  */
    {
      (yyval.tipoExpre) = (yyvsp[-1].tipoExpre);
    }
#line 1919 "asin.c" /* yacc.c:1646  */
    break;

  case 52:
#line 514 "src/asin.y" /* yacc.c:1646  */
    {
      (yyval.tipoExpre).tipo = T_ERROR;
      SIMB sim = obtTdS((yyvsp[-1].ident));
      if (sim.tipo == T_ERROR) {
        yyerror("Objeto no declarado");
      } else if (sim.tipo != T_ENTERO) {
        yyerror("Incomptabilidad de tipos, debe ser entero");
      } else {
        (yyval.tipoExpre).tipo = T_ENTERO;
      }

      (yyval.tipoExpre).pos = creaVarTemp();

      /* Primero se asigna y luego se suma el identificador */
      emite(EASIG, crArgPos(sim.desp), crArgNul(), crArgPos((yyval.tipoExpre).pos));
      emite((yyvsp[0].tipo), crArgPos(sim.desp), crArgEnt(1), crArgPos(sim.desp));
    }
#line 1941 "asin.c" /* yacc.c:1646  */
    break;

  case 53:
#line 532 "src/asin.y" /* yacc.c:1646  */
    {
      (yyval.tipoExpre).tipo = T_ERROR;
      SIMB sim = obtTdS((yyvsp[-3].ident));

      if (sim.tipo == T_ERROR) {
        yyerror("Objeto no declarado");
      } else if ((yyvsp[-1].tipoExpre).tipo != T_ENTERO) {
        if ((yyvsp[-1].tipoExpre).tipo != T_ERROR) {
          yyerror("Incompatibilidad de tipo en el indice del array");
        }
      } else if (sim.tipo != T_ARRAY) {
        yyerror("El objeto no es de tipo array");
      } else {
        DIM dim = obtTdA(sim.ref);
        (yyval.tipoExpre).tipo = dim.telem;
      }

      (yyval.tipoExpre).pos = creaVarTemp();
      emite(EAV, crArgPos(sim.desp), crArgPos((yyvsp[-1].tipoExpre).pos), crArgPos((yyval.tipoExpre).pos));
    }
#line 1966 "asin.c" /* yacc.c:1646  */
    break;

  case 54:
#line 553 "src/asin.y" /* yacc.c:1646  */
    {
      (yyval.tipoExpre).tipo = T_ERROR;
      SIMB sim = obtTdS((yyvsp[0].ident));

      if (sim.tipo == T_ERROR) {
        yyerror("Objeto no declarado");
      } else {
        (yyval.tipoExpre).tipo = sim.tipo;
      }

      (yyval.tipoExpre).pos = creaVarTemp();
      emite(EASIG, crArgPos(sim.desp), crArgNul(), crArgPos((yyval.tipoExpre).pos));
    }
#line 1984 "asin.c" /* yacc.c:1646  */
    break;

  case 55:
#line 567 "src/asin.y" /* yacc.c:1646  */
    {
      (yyval.tipoExpre).tipo = T_ERROR;
      SIMB sim = obtTdS((yyvsp[-2].ident));
      CAMP cam;

      if (sim.tipo == T_ERROR) {
        yyerror("Objeto no declarado");
      } else if (sim.tipo != T_RECORD) {
        yyerror("El objeto no es de tipo registro");
      } else {
        cam = obtTdR(sim.ref, (yyvsp[0].ident));
        if (cam.tipo == T_ERROR) {
          yyerror("No existe el campo del registro");
        } else {
          (yyval.tipoExpre).tipo = cam.tipo;
        }
      }

      (yyval.tipoExpre).pos = creaVarTemp();
      int pos = sim.desp + cam.desp;
      emite(EASIG, crArgPos(pos), crArgNul(), crArgPos((yyval.tipoExpre).pos));
    }
#line 2011 "asin.c" /* yacc.c:1646  */
    break;

  case 56:
#line 590 "src/asin.y" /* yacc.c:1646  */
    {
      (yyval.tipoExpre).tipo = (yyvsp[0].tipoCons).tipo;

      (yyval.tipoExpre).pos = creaVarTemp();
      emite(EASIG, crArgEnt((yyvsp[0].tipoCons).num), crArgNul(), crArgPos((yyval.tipoExpre).pos));
    }
#line 2022 "asin.c" /* yacc.c:1646  */
    break;

  case 57:
#line 600 "src/asin.y" /* yacc.c:1646  */
    {
        (yyval.tipoCons).tipo = T_ENTERO;
        (yyval.tipoCons).num = (yyvsp[0].cent);
      }
#line 2031 "asin.c" /* yacc.c:1646  */
    break;

  case 58:
#line 605 "src/asin.y" /* yacc.c:1646  */
    {
        (yyval.tipoCons).tipo = T_LOGICO;
        (yyval.tipoCons).num = TRUE;
      }
#line 2040 "asin.c" /* yacc.c:1646  */
    break;

  case 59:
#line 610 "src/asin.y" /* yacc.c:1646  */
    {
        (yyval.tipoCons).tipo = T_LOGICO;
        (yyval.tipoCons).num = FALSE;
      }
#line 2049 "asin.c" /* yacc.c:1646  */
    break;

  case 60:
#line 618 "src/asin.y" /* yacc.c:1646  */
    {
      (yyval.tipoOp).tipo = T_ASIG;
      (yyval.tipoOp).cod = EASIG;
    }
#line 2058 "asin.c" /* yacc.c:1646  */
    break;

  case 61:
#line 623 "src/asin.y" /* yacc.c:1646  */
    {
      (yyval.tipoOp).tipo = T_ENTERO;
      (yyval.tipoOp).cod = ESUM;
    }
#line 2067 "asin.c" /* yacc.c:1646  */
    break;

  case 62:
#line 628 "src/asin.y" /* yacc.c:1646  */
    {
      (yyval.tipoOp).tipo = T_ENTERO;
      (yyval.tipoOp).cod = EDIF;
    }
#line 2076 "asin.c" /* yacc.c:1646  */
    break;

  case 63:
#line 633 "src/asin.y" /* yacc.c:1646  */
    {
      (yyval.tipoOp).tipo = T_ENTERO;
      (yyval.tipoOp).cod = EMULT;
    }
#line 2085 "asin.c" /* yacc.c:1646  */
    break;

  case 64:
#line 638 "src/asin.y" /* yacc.c:1646  */
    {
      (yyval.tipoOp).tipo = T_ENTERO;
      (yyval.tipoOp).cod = EDIVI;
    }
#line 2094 "asin.c" /* yacc.c:1646  */
    break;

  case 65:
#line 645 "src/asin.y" /* yacc.c:1646  */
    { (yyval.tipo) = EMULT;}
#line 2100 "asin.c" /* yacc.c:1646  */
    break;

  case 66:
#line 646 "src/asin.y" /* yacc.c:1646  */
    { (yyval.tipo) = ESUM;}
#line 2106 "asin.c" /* yacc.c:1646  */
    break;

  case 67:
#line 650 "src/asin.y" /* yacc.c:1646  */
    { (yyval.tipo) = EIGUAL;}
#line 2112 "asin.c" /* yacc.c:1646  */
    break;

  case 68:
#line 651 "src/asin.y" /* yacc.c:1646  */
    { (yyval.tipo) = EDIST;}
#line 2118 "asin.c" /* yacc.c:1646  */
    break;

  case 69:
#line 655 "src/asin.y" /* yacc.c:1646  */
    { (yyval.tipo) = EMAY; }
#line 2124 "asin.c" /* yacc.c:1646  */
    break;

  case 70:
#line 656 "src/asin.y" /* yacc.c:1646  */
    { (yyval.tipo) = EMEN; }
#line 2130 "asin.c" /* yacc.c:1646  */
    break;

  case 71:
#line 657 "src/asin.y" /* yacc.c:1646  */
    { (yyval.tipo) = EMAYEQ; }
#line 2136 "asin.c" /* yacc.c:1646  */
    break;

  case 72:
#line 658 "src/asin.y" /* yacc.c:1646  */
    { (yyval.tipo) = EMENEQ; }
#line 2142 "asin.c" /* yacc.c:1646  */
    break;

  case 73:
#line 662 "src/asin.y" /* yacc.c:1646  */
    { (yyval.tipo) = ESUM; }
#line 2148 "asin.c" /* yacc.c:1646  */
    break;

  case 74:
#line 663 "src/asin.y" /* yacc.c:1646  */
    { (yyval.tipo) = EDIF; }
#line 2154 "asin.c" /* yacc.c:1646  */
    break;

  case 75:
#line 667 "src/asin.y" /* yacc.c:1646  */
    { (yyval.tipo) = EMULT; }
#line 2160 "asin.c" /* yacc.c:1646  */
    break;

  case 76:
#line 668 "src/asin.y" /* yacc.c:1646  */
    { (yyval.tipo) = EDIVI; }
#line 2166 "asin.c" /* yacc.c:1646  */
    break;

  case 77:
#line 669 "src/asin.y" /* yacc.c:1646  */
    { (yyval.tipo) = RESTO; }
#line 2172 "asin.c" /* yacc.c:1646  */
    break;

  case 78:
#line 674 "src/asin.y" /* yacc.c:1646  */
    {
      (yyval.tipoOp).tipo = T_ENTERO;
      (yyval.tipoOp).cod = EASIG;
    }
#line 2181 "asin.c" /* yacc.c:1646  */
    break;

  case 79:
#line 679 "src/asin.y" /* yacc.c:1646  */
    {
      (yyval.tipoOp).tipo = T_ENTERO;
      (yyval.tipoOp).cod = EASIG;
    }
#line 2190 "asin.c" /* yacc.c:1646  */
    break;

  case 80:
#line 684 "src/asin.y" /* yacc.c:1646  */
    {
      (yyval.tipoOp).tipo = T_LOGICO;
      (yyval.tipoOp).cod = EDIF;
    }
#line 2199 "asin.c" /* yacc.c:1646  */
    break;

  case 81:
#line 692 "src/asin.y" /* yacc.c:1646  */
    {
      (yyval.tipo) = ESUM;
    }
#line 2207 "asin.c" /* yacc.c:1646  */
    break;

  case 82:
#line 696 "src/asin.y" /* yacc.c:1646  */
    {
      (yyval.tipo) = EDIF;
    }
#line 2215 "asin.c" /* yacc.c:1646  */
    break;


#line 2219 "asin.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 701 "src/asin.y" /* yacc.c:1906  */

/*****************************************************************************/


