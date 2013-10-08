/* A Bison parser, made by GNU Bison 3.0.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */

#line 67 "src/yacc.c" /* yacc.c:339  */

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
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
   by #include "yacc.h".  */
#ifndef YY_YY_SRC_YACC_H_INCLUDED
# define YY_YY_SRC_YACC_H_INCLUDED
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
    VIDE = 258,
    ECRIRE = 259,
    LIRE = 260,
    CROCHET_OUVRANT = 261,
    CROCHET_FERMANT = 262,
    VIRGULE = 263,
    POINT_VIRGULE = 264,
    POINT = 265,
    PARENTHESE_OUVRANTE = 266,
    PARENTHESE_FERMANTE = 267,
    DEUX_POINTS = 268,
    POINT_ET_POINT = 269,
    INTERROGATION = 270,
    CSTE_ENTIERE = 271,
    CSTE_REELLE = 272,
    CSTE_BOOLEENNE = 273,
    CSTE_CARACTERE = 274,
    CSTE_CHAINE = 275,
    OPAFF = 276,
    IDF = 277,
    PROG = 278,
    ACC_DEBUT = 279,
    ACC_FIN = 280,
    SI = 281,
    ALORS = 282,
    SINON = 283,
    TANT_QUE = 284,
    POUR = 285,
    FAIRE = 286,
    RETOURNE = 287,
    STRUCT = 288,
    FSTRUCT = 289,
    TABLEAU = 290,
    TYPE = 291,
    DE = 292,
    PROCEDURE = 293,
    FONCTION = 294,
    VARIABLE = 295,
    SWITCH = 296,
    CASE = 297,
    DEFAULT = 298,
    ENTIER = 299,
    REEL = 300,
    BOOLEEN = 301,
    CARACTERE = 302,
    CHAINE = 303,
    PLUS = 304,
    MOINS = 305,
    MULTIPLICATION = 306,
    DIVISION = 307,
    MODULO = 308,
    PLUS_ET_PLUS = 309,
    MOINS_ET_MOINS = 310,
    NEGATION = 311,
    PLUS_EGAL = 312,
    MOINS_EGAL = 313,
    MULT_EGAL = 314,
    DIV_EGAL = 315,
    MODULO_EGAL = 316,
    INFERIEUR = 317,
    SUPERIEUR = 318,
    INFERIEUR_OU_EGAL = 319,
    SUPERIEUR_OU_EGAL = 320,
    EGAL = 321,
    DIFFERENT = 322,
    ET = 323,
    OU = 324,
    START = 325
  };
#endif
/* Tokens.  */
#define VIDE 258
#define ECRIRE 259
#define LIRE 260
#define CROCHET_OUVRANT 261
#define CROCHET_FERMANT 262
#define VIRGULE 263
#define POINT_VIRGULE 264
#define POINT 265
#define PARENTHESE_OUVRANTE 266
#define PARENTHESE_FERMANTE 267
#define DEUX_POINTS 268
#define POINT_ET_POINT 269
#define INTERROGATION 270
#define CSTE_ENTIERE 271
#define CSTE_REELLE 272
#define CSTE_BOOLEENNE 273
#define CSTE_CARACTERE 274
#define CSTE_CHAINE 275
#define OPAFF 276
#define IDF 277
#define PROG 278
#define ACC_DEBUT 279
#define ACC_FIN 280
#define SI 281
#define ALORS 282
#define SINON 283
#define TANT_QUE 284
#define POUR 285
#define FAIRE 286
#define RETOURNE 287
#define STRUCT 288
#define FSTRUCT 289
#define TABLEAU 290
#define TYPE 291
#define DE 292
#define PROCEDURE 293
#define FONCTION 294
#define VARIABLE 295
#define SWITCH 296
#define CASE 297
#define DEFAULT 298
#define ENTIER 299
#define REEL 300
#define BOOLEEN 301
#define CARACTERE 302
#define CHAINE 303
#define PLUS 304
#define MOINS 305
#define MULTIPLICATION 306
#define DIVISION 307
#define MODULO 308
#define PLUS_ET_PLUS 309
#define MOINS_ET_MOINS 310
#define NEGATION 311
#define PLUS_EGAL 312
#define MOINS_EGAL 313
#define MULT_EGAL 314
#define DIV_EGAL 315
#define MODULO_EGAL 316
#define INFERIEUR 317
#define SUPERIEUR 318
#define INFERIEUR_OU_EGAL 319
#define SUPERIEUR_OU_EGAL 320
#define EGAL 321
#define DIFFERENT 322
#define ET 323
#define OU 324
#define START 325

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SRC_YACC_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 258 "src/yacc.c" /* yacc.c:358  */

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

#ifndef __attribute__
/* This feature is available in gcc versions 2.5 and later.  */
# if (! defined __GNUC__ || __GNUC__ < 2 \
      || (__GNUC__ == 2 && __GNUC_MINOR__ < 5))
#  define __attribute__(Spec) /* empty */
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
#define YYFINAL  15
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   443

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  71
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  50
/* YYNRULES -- Number of rules.  */
#define YYNRULES  125
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  248

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   325

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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    76,    76,    79,    80,    87,    88,    91,    92,    93,
      94,    97,   100,   101,   108,   111,   112,   115,   122,   123,
     126,   133,   136,   137,   144,   147,   150,   151,   152,   155,
     156,   159,   166,   167,   170,   171,   172,   173,   174,   175,
     182,   185,   186,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   207,   208,   209,   210,   211,
     214,   215,   218,   219,   220,   221,   222,   225,   228,   229,
     230,   237,   238,   239,   246,   249,   250,   253,   260,   267,
     270,   271,   272,   273,   276,   277,   278,   285,   288,   289,
     292,   293,   296,   303,   306,   307,   314,   315,   322,   323,
     326,   327,   328,   329,   330,   334,   335,   336,   337,   338,
     341,   342,   343,   344,   345,   346,   347,   348,   349,   352,
     355,   356,   357,   358,   359,   360
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "VIDE", "ECRIRE", "LIRE",
  "CROCHET_OUVRANT", "CROCHET_FERMANT", "VIRGULE", "POINT_VIRGULE",
  "POINT", "PARENTHESE_OUVRANTE", "PARENTHESE_FERMANTE", "DEUX_POINTS",
  "POINT_ET_POINT", "INTERROGATION", "CSTE_ENTIERE", "CSTE_REELLE",
  "CSTE_BOOLEENNE", "CSTE_CARACTERE", "CSTE_CHAINE", "OPAFF", "IDF",
  "PROG", "ACC_DEBUT", "ACC_FIN", "SI", "ALORS", "SINON", "TANT_QUE",
  "POUR", "FAIRE", "RETOURNE", "STRUCT", "FSTRUCT", "TABLEAU", "TYPE",
  "DE", "PROCEDURE", "FONCTION", "VARIABLE", "SWITCH", "CASE", "DEFAULT",
  "ENTIER", "REEL", "BOOLEEN", "CARACTERE", "CHAINE", "PLUS", "MOINS",
  "MULTIPLICATION", "DIVISION", "MODULO", "PLUS_ET_PLUS", "MOINS_ET_MOINS",
  "NEGATION", "PLUS_EGAL", "MOINS_EGAL", "MULT_EGAL", "DIV_EGAL",
  "MODULO_EGAL", "INFERIEUR", "SUPERIEUR", "INFERIEUR_OU_EGAL",
  "SUPERIEUR_OU_EGAL", "EGAL", "DIFFERENT", "ET", "OU", "START", "$accept",
  "programme", "corps", "liste_declarations", "declaration",
  "declaration_type", "suite_declaration_type", "dimension",
  "liste_dimensions", "une_dimension", "liste_champs", "un_champ",
  "declaration_variable", "declaration_suite_variable",
  "declaration_procedure", "declaration_fonction", "liste_parametres",
  "liste_param", "un_param", "nom_type", "type_simple",
  "liste_instructions", "suite_liste_inst", "instruction", "affectation",
  "op_bin", "op_rac", "variable", "suite_variable", "condition",
  "tant_que", "pour", "faire_tant_que", "ternaire", "switch",
  "suite_switch", "default", "appel", "liste_arguments", "liste_args",
  "un_arg", "format", "suite_ecriture", "liste_variables",
  "resultat_retourne", "expression", "expression2", "expression3", "test",
  "liste_comparateur", YY_NULL
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325
};
# endif

#define YYPACT_NINF -94

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-94)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -9,   -16,    11,     9,    23,    26,    31,    34,   -94,     3,
      47,   -94,   -94,   -94,   -94,   -94,    65,   100,   100,   -94,
       8,   340,   -94,    34,    70,   -94,    -3,    -4,   -16,    85,
      96,   156,   -94,   116,   117,   -94,   121,   416,   416,   102,
      34,   416,   416,   -94,   -94,   276,   -94,   124,   118,   232,
     -94,   -94,   -94,   -94,   -94,   133,   -94,   -94,   127,   145,
     -94,   -94,   139,    32,   -94,   -94,   395,   -94,   -94,   -94,
     -94,   -94,   -94,   148,   -94,   -94,   142,   118,   406,    49,
     -94,   336,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   311,
     -17,   -94,   -94,   337,    61,   -94,   155,   136,   157,   347,
     260,   -94,   -94,   -94,   -94,   416,   -94,   -94,   -94,   -94,
     -94,   -94,   416,   -94,   158,    -7,   160,   416,   144,   156,
     169,   -94,   -16,   154,   -94,   187,   -94,    68,   -94,    88,
     -94,   347,   416,   174,   193,   232,   171,    34,   416,   416,
     -94,   -94,   -94,   -94,   -94,   -94,   416,   416,   416,   416,
     416,   416,    34,   190,   416,   416,   -94,   168,   -94,   209,
     347,   156,   -94,   204,   -94,    30,   -94,   200,   156,   -94,
     -94,   -94,   215,   118,   213,   118,   207,   416,   -94,    22,
     -94,   -94,   -94,   199,   -17,   -17,   -17,   -17,   -94,   -94,
     -94,   -94,   -94,   416,    43,    72,   416,    83,   416,   -94,
     -94,   -94,   416,   416,   -94,   -94,   187,   221,   -94,   -94,
     -94,   -94,    75,    81,    61,   -94,     0,   416,   218,   214,
     110,   -94,   347,   -94,   -94,   -94,   -94,    61,   201,   310,
     179,   310,   -94,   416,   235,    34,   -94,   -94,   310,   -94,
     -94,   347,   220,   -94,   -94,   -94,    34,   -94
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     2,     0,
       0,     7,     8,     9,    10,     1,     0,    26,    26,    22,
       0,     0,     4,     0,     0,     5,     0,     0,     0,     0,
       0,     0,    51,     0,     0,    43,    70,     0,     0,     0,
       0,    98,     0,    60,    61,     0,    41,     0,     0,     0,
      45,    46,    47,    48,    49,     0,     3,     6,     0,     0,
      11,    27,     0,     0,    29,    24,     0,    23,    33,    34,
      35,    36,    37,    39,    21,    32,     0,     0,     0,    67,
      87,     0,   112,   111,   114,   113,   115,   116,   117,     0,
     103,   109,   104,     0,     0,    70,     0,     0,     0,    99,
       0,    40,    42,    44,    57,     0,    62,    63,    64,    65,
      66,    56,     0,    50,     0,     0,     0,     0,     0,     0,
       0,    28,     0,     0,    93,    95,    97,     0,    88,     0,
      90,    92,     0,     0,     0,   116,     0,     0,     0,     0,
     120,   122,   121,   123,   124,   125,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    52,     0,    58,    55,
      59,     0,    13,     0,    18,     0,    15,     0,     0,    31,
      30,    25,     0,     0,     0,     0,     0,     0,    89,     0,
      69,   118,   110,    71,   100,   101,   102,   119,   105,   106,
     107,   108,    74,     0,     0,     0,     0,    86,     0,    20,
      19,    14,     0,     0,    12,    38,    95,     0,    96,    54,
      91,    68,     0,     0,     0,    77,     0,     0,     0,     0,
       0,    16,    17,    94,    53,    72,    73,     0,     0,     0,
       0,     0,    79,     0,     0,     0,    82,    83,     0,    84,
      85,    78,     0,    75,    80,    81,     0,    76
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -94,   -94,   -18,   -94,   243,   -94,   -94,   -94,   -94,    52,
     -94,   140,   -94,   -94,   -94,   -94,   238,   -94,   137,   -93,
     194,   -23,   -94,   -41,   -34,   -37,   -94,   -20,   -94,    56,
     -94,   -94,   -94,   -94,   -94,   -94,   -94,   -12,   -94,   -94,
      84,   -94,    64,   -94,   -94,   -35,   -44,    36,   -94,   -94
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     8,     9,    10,    11,    60,   118,   165,   166,
     115,   116,    12,    20,    13,    14,    28,    63,    64,    74,
      75,    22,    45,    46,    47,    48,   112,    87,    79,    50,
      51,    52,    53,   158,    54,   197,   219,    88,    80,   129,
     130,   125,   174,   127,    98,   131,    90,    91,    92,   147
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      56,    49,    89,    93,   102,    96,    99,   100,    61,    55,
      65,    15,   111,   229,     1,   114,    30,    97,    62,    49,
       3,    31,     4,     5,     6,    49,   169,   162,   104,   211,
      58,    16,    59,    55,   148,   149,   150,   201,   202,     3,
     120,     4,     5,     6,   121,    17,   136,   134,    18,   138,
     139,   151,   214,    19,     7,   132,    25,   126,    21,   133,
     153,   135,   140,   141,   142,   143,   144,   145,   199,   146,
     159,   138,   139,    23,    49,   204,   175,   160,    26,    57,
     176,   215,   167,    95,   140,   141,   142,   143,   144,   145,
     227,   146,   138,   139,   184,   185,   177,   179,   111,    21,
     178,    37,   186,   187,   171,   140,   141,   142,   143,   144,
     145,    27,   146,    94,   183,    43,    44,    66,    67,   194,
     195,   138,   139,   233,    95,   217,   218,    76,    77,   192,
     138,   139,    78,   103,   140,   141,   142,   143,   144,   145,
      95,   146,   113,   140,   141,   142,   143,   144,   145,   114,
     146,   117,   119,   206,   123,   208,    43,    44,   213,   138,
     139,   216,   124,   220,   154,   155,   156,   167,   222,   164,
     172,   161,   140,   141,   142,   143,   144,   145,    68,   146,
     228,   168,   230,   182,   188,   189,   190,   191,   237,   225,
     240,    62,   238,   234,    49,   173,   180,   245,   241,   193,
      69,    70,    71,    72,    73,   181,   236,    49,   239,    49,
     196,    49,   243,   200,   203,   244,   209,    55,    49,    55,
     138,   139,   205,   247,   198,   207,    55,   212,   138,   139,
     224,   231,   235,   140,   141,   142,   143,   144,   145,   232,
     146,   140,   141,   142,   143,   144,   145,   242,   146,   138,
     139,   246,    24,   105,   221,   163,    29,   170,   138,   139,
     122,   210,   140,   141,   142,   143,   144,   145,   226,   146,
     223,   140,   141,   142,   143,   144,   145,     0,   146,    32,
      33,    34,     0,     0,   157,    35,    43,    44,     0,   106,
     107,   108,   109,   110,     0,     0,     0,     0,    36,     0,
       0,   101,    37,     0,     0,    38,    39,    40,    41,   138,
     139,     0,     0,    32,    33,    34,     0,    42,     0,    35,
       0,     0,   140,   141,   142,   143,   144,   145,     0,   146,
      43,    44,    36,     0,    21,     0,    37,     0,   137,    38,
      39,    40,    41,    32,    33,    34,     0,    81,     0,    35,
       0,    42,    82,    83,    84,    85,    86,     0,    36,     0,
     138,   139,    36,     0,    43,    44,    37,     0,   152,    38,
      39,    40,    41,   140,   141,   142,   143,   144,   145,     0,
     146,    42,     0,     0,     0,     0,   138,   139,     0,     0,
      43,    44,     0,     0,    43,    44,   138,   139,     0,   140,
     141,   142,   143,   144,   145,     0,   146,     0,     0,   140,
     141,   142,   143,   144,   145,     0,   146,    81,   128,     0,
       0,     0,    82,    83,    84,    85,    86,    81,    36,     0,
       0,     0,    82,    83,    84,    85,    86,     0,    36,    69,
      70,    71,    72,    73
};

static const yytype_int16 yycheck[] =
{
      23,    21,    37,    38,    45,    39,    41,    42,    12,    21,
      28,     0,    49,    13,    23,    22,     8,    40,    22,    39,
      36,    13,    38,    39,    40,    45,   119,    34,    48,     7,
      33,    22,    35,    45,    51,    52,    53,     7,     8,    36,
       8,    38,    39,    40,    12,    22,    81,    81,    22,    49,
      50,    68,     9,    22,    70,     6,     9,    77,    24,    10,
      94,    81,    62,    63,    64,    65,    66,    67,   161,    69,
     105,    49,    50,    70,    94,   168,     8,   112,    13,     9,
      12,     9,   117,    22,    62,    63,    64,    65,    66,    67,
       9,    69,    49,    50,   138,   139,     8,   132,   135,    24,
      12,    26,   146,   147,   122,    62,    63,    64,    65,    66,
      67,    11,    69,    11,   137,    54,    55,    32,    22,   154,
     155,    49,    50,    13,    22,    42,    43,    11,    11,   152,
      49,    50,    11,     9,    62,    63,    64,    65,    66,    67,
      22,    69,     9,    62,    63,    64,    65,    66,    67,    22,
      69,     6,    13,   173,     6,   175,    54,    55,   193,    49,
      50,   196,    20,   198,     9,    29,     9,   202,   203,     9,
      16,    13,    62,    63,    64,    65,    66,    67,    22,    69,
     214,    37,   217,    12,   148,   149,   150,   151,   229,   212,
     231,    22,    13,   227,   214,     8,    22,   238,   233,     9,
      44,    45,    46,    47,    48,    12,   229,   227,   231,   229,
      42,   231,   235,     9,    14,   238,     9,   229,   238,   231,
      49,    50,     7,   246,    15,    12,   238,    28,    49,    50,
       9,    13,    31,    62,    63,    64,    65,    66,    67,    25,
      69,    62,    63,    64,    65,    66,    67,    12,    69,    49,
      50,    31,     9,    21,   202,   115,    18,   120,    49,    50,
      66,   177,    62,    63,    64,    65,    66,    67,   212,    69,
     206,    62,    63,    64,    65,    66,    67,    -1,    69,     3,
       4,     5,    -1,    -1,    24,     9,    54,    55,    -1,    57,
      58,    59,    60,    61,    -1,    -1,    -1,    -1,    22,    -1,
      -1,    25,    26,    -1,    -1,    29,    30,    31,    32,    49,
      50,    -1,    -1,     3,     4,     5,    -1,    41,    -1,     9,
      -1,    -1,    62,    63,    64,    65,    66,    67,    -1,    69,
      54,    55,    22,    -1,    24,    -1,    26,    -1,    27,    29,
      30,    31,    32,     3,     4,     5,    -1,    11,    -1,     9,
      -1,    41,    16,    17,    18,    19,    20,    -1,    22,    -1,
      49,    50,    22,    -1,    54,    55,    26,    -1,    31,    29,
      30,    31,    32,    62,    63,    64,    65,    66,    67,    -1,
      69,    41,    -1,    -1,    -1,    -1,    49,    50,    -1,    -1,
      54,    55,    -1,    -1,    54,    55,    49,    50,    -1,    62,
      63,    64,    65,    66,    67,    -1,    69,    -1,    -1,    62,
      63,    64,    65,    66,    67,    -1,    69,    11,    12,    -1,
      -1,    -1,    16,    17,    18,    19,    20,    11,    22,    -1,
      -1,    -1,    16,    17,    18,    19,    20,    -1,    22,    44,
      45,    46,    47,    48
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    23,    72,    36,    38,    39,    40,    70,    73,    74,
      75,    76,    83,    85,    86,     0,    22,    22,    22,    22,
      84,    24,    92,    70,    75,     9,    13,    11,    87,    87,
       8,    13,     3,     4,     5,     9,    22,    26,    29,    30,
      31,    32,    41,    54,    55,    93,    94,    95,    96,    98,
     100,   101,   102,   103,   105,   108,    92,     9,    33,    35,
      77,    12,    22,    88,    89,    73,    32,    22,    22,    44,
      45,    46,    47,    48,    90,    91,    11,    11,    11,    99,
     109,    11,    16,    17,    18,    19,    20,    98,   108,   116,
     117,   118,   119,   116,    11,    22,    95,    92,   115,   116,
     116,    25,    94,     9,    98,    21,    57,    58,    59,    60,
      61,    96,    97,     9,    22,    81,    82,     6,    78,    13,
       8,    12,    91,     6,    20,   112,    98,   114,    12,   110,
     111,   116,     6,    10,    95,    98,   116,    27,    49,    50,
      62,    63,    64,    65,    66,    67,    69,   120,    51,    52,
      53,    68,    31,    95,     9,    29,     9,    24,   104,   116,
     116,    13,    34,    82,     9,    79,    80,   116,    37,    90,
      89,    73,    16,     8,   113,     8,    12,     8,    12,   116,
      22,    12,    12,    92,   117,   117,   117,   117,   118,   118,
     118,   118,    92,     9,   116,   116,    42,   106,    15,    90,
       9,     7,     8,    14,    90,     7,    98,    12,    98,     9,
     111,     7,    28,   116,     9,     9,   116,    42,    43,   107,
     116,    80,   116,   113,     9,    92,   100,     9,    95,    13,
     116,    13,    25,    13,    95,    31,    92,    94,    13,    92,
      94,   116,    12,    92,    92,    94,    31,    92
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    71,    72,    73,    73,    74,    74,    75,    75,    75,
      75,    76,    77,    77,    78,    79,    79,    80,    81,    81,
      82,    83,    84,    84,    85,    86,    87,    87,    87,    88,
      88,    89,    90,    90,    91,    91,    91,    91,    91,    91,
      92,    93,    93,    94,    94,    94,    94,    94,    94,    94,
      94,    94,    94,    94,    94,    95,    95,    95,    95,    95,
      96,    96,    97,    97,    97,    97,    97,    98,    99,    99,
      99,   100,   100,   100,   101,   102,   102,   103,   104,   105,
     106,   106,   106,   106,   107,   107,   107,   108,   109,   109,
     110,   110,   111,   112,   113,   113,   114,   114,   115,   115,
     116,   116,   116,   116,   116,   117,   117,   117,   117,   117,
     118,   118,   118,   118,   118,   118,   118,   118,   118,   119,
     120,   120,   120,   120,   120,   120
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     3,     2,     2,     3,     1,     1,     1,
       1,     4,     4,     3,     3,     1,     3,     3,     2,     3,
       3,     4,     1,     3,     4,     6,     0,     2,     3,     1,
       3,     3,     1,     1,     1,     1,     1,     1,     4,     1,
       3,     1,     2,     1,     2,     1,     1,     1,     1,     1,
       2,     1,     3,     6,     5,     3,     2,     2,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     2,     4,     3,
       0,     4,     6,     6,     4,     8,    10,     5,     5,     6,
       5,     5,     4,     4,     3,     3,     0,     2,     2,     3,
       1,     3,     1,     1,     3,     0,     3,     1,     0,     1,
       3,     3,     3,     1,     1,     3,     3,     3,     3,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       1,     1,     1,     1,     1,     1
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
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
      
#line 1544 "src/yacc.c" /* yacc.c:1646  */
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
