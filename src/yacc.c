/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */


/* Line 268 of yacc.c  */
#line 71 "src/yacc.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
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




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 253 "src/yacc.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  15
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   411

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  71
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  53
/* YYNRULES -- Number of rules.  */
<<<<<<< HEAD
#define YYNRULES  124
/* YYNRULES -- Number of states.  */
#define YYNSTATES  239
=======
#define YYNRULES  131
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  249
>>>>>>> f83f815b203c2bfbfe4d7d851f05d8bde9d1fbd1

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   325

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,    10,    13,    16,    20,    22,    24,
      26,    28,    33,    38,    42,    46,    48,    52,    56,    59,
      63,    67,    72,    74,    78,    83,    90,    91,    94,    98,
     100,   104,   108,   110,   112,   114,   116,   118,   120,   125,
     127,   131,   133,   136,   138,   141,   143,   145,   147,   149,
     151,   154,   156,   160,   167,   173,   177,   180,   183,   187,
     191,   193,   195,   197,   199,   201,   203,   205,   208,   213,
     217,   218,   223,   230,   237,   242,   251,   257,   263,   270,
     276,   282,   287,   292,   296,   300,   301,   304,   307,   311,
     313,   317,   319,   321,   325,   326,   330,   332,   333,   335,
     339,   343,   347,   349,   351,   355,   359,   363,   367,   369,
     373,   375,   377,   379,   381,   383,   385,   387,   391,   395,
     397,   399,   401,   403,   405
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      72,     0,    -1,    23,    73,    -1,    74,    70,    92,    -1,
      70,    92,    -1,    75,     9,    -1,    74,    75,     9,    -1,
      76,    -1,    83,    -1,    85,    -1,    86,    -1,    36,    22,
      13,    77,    -1,    35,    78,    37,    90,    -1,    33,    81,
      34,    -1,     6,    79,     7,    -1,    80,    -1,    79,     8,
      80,    -1,   116,    14,   116,    -1,    82,     9,    -1,    81,
      82,     9,    -1,    22,    13,    90,    -1,    40,    84,    13,
      90,    -1,    22,    -1,    84,     8,    22,    -1,    38,    22,
      87,    73,    -1,    39,    22,    87,    32,    91,    73,    -1,
      -1,    11,    12,    -1,    11,    88,    12,    -1,    89,    -1,
      88,     8,    89,    -1,    22,    13,    90,    -1,    91,    -1,
      22,    -1,    44,    -1,    45,    -1,    46,    -1,    47,    -1,
      48,     6,    16,     7,    -1,    48,    -1,    24,    93,    25,
      -1,    94,    -1,    93,    94,    -1,     9,    -1,    95,     9,
      -1,   100,    -1,   101,    -1,   102,    -1,   103,    -1,   105,
      -1,   108,     9,    -1,     3,    -1,    32,   115,     9,    -1,
       4,    11,   112,   113,    12,     9,    -1,     5,    11,   114,
      12,     9,    -1,    98,    21,   116,    -1,    98,    96,    -1,
      96,    98,    -1,    98,    21,   104,    -1,    98,    97,   116,
      -1,    54,    -1,    55,    -1,    57,    -1,    58,    -1,    59,
      -1,    60,    -1,    61,    -1,    22,    99,    -1,    99,     6,
     116,     7,    -1,    99,    10,    22,    -1,    -1,    26,   116,
      27,    92,    -1,    26,   116,    27,    92,    28,    92,    -1,
      26,   116,    27,    92,    28,   100,    -1,    29,   116,    31,
      92,    -1,    30,    95,     9,   116,     9,    95,    31,    92,
      -1,    31,    92,    29,   116,     9,    -1,   116,    15,   116,
      13,   116,    -1,    41,   116,    24,   106,   107,    25,    -1,
     106,    42,   116,    13,    92,    -1,   106,    42,   116,    13,
      94,    -1,    42,   116,    13,    92,    -1,    42,   116,    13,
      94,    -1,    43,    13,    92,    -1,    43,    13,    94,    -1,
      -1,    22,   109,    -1,    11,    12,    -1,    11,   110,    12,
      -1,   111,    -1,   110,     8,   111,    -1,   116,    -1,    20,
      -1,     8,    98,   113,    -1,    -1,   114,     8,    98,    -1,
      98,    -1,    -1,   116,    -1,   116,    49,   117,    -1,   116,
      50,   117,    -1,   116,    69,   117,    -1,   117,    -1,   119,
      -1,   117,    51,   118,    -1,   117,    52,   118,    -1,   117,
      53,   118,    -1,   117,    68,   118,    -1,   118,    -1,    11,
     116,    12,    -1,    17,    -1,    16,    -1,    19,    -1,    18,
      -1,    20,    -1,    98,    -1,   108,    -1,    11,    95,    12,
      -1,   116,   120,   117,    -1,    62,    -1,    64,    -1,    63,
      -1,    65,    -1,    66,    -1,    67,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    76,    76,    79,    80,    87,    88,    91,    92,    93,
      94,    97,   100,   101,   108,   111,   112,   115,   122,   123,
     126,   133,   136,   137,   144,   147,   150,   151,   152,   155,
     156,   159,   166,   167,   170,   171,   172,   173,   174,   175,
     182,   185,   186,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   207,   208,   209,   210,   211,
     214,   215,   218,   219,   220,   221,   222,   225,   228,   229,
     230,   237,   238,   239,   246,   249,   250,   253,   256,   257,
     260,   261,   264,   271,   278,   281,   282,   283,   284,   287,
     288,   289,   296,   299,   300,   303,   304,   307,   314,   317,
     318,   325,   326,   333,   334,   337,   338,   339,   340,   341,
     344,   345,   346,   347,   348,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   363,   366,   367,   368,   369,
     370,   371
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
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
<<<<<<< HEAD
  "tant_que", "pour", "faire_tant_que", "ternaire", "switch",
  "suite_switch", "default", "appel", "liste_arguments", "liste_args",
  "un_arg", "format", "suite_ecriture", "liste_variables",
  "resultat_retourne", "expression", "expression2", "expression3", "test",
  "liste_comparateur", 0
=======
  "tant_que", "pour", "pour_cont", "pour_a", "pour_e", "faire_tant_que",
  "ternaire", "switch", "suite_switch", "default", "appel",
  "liste_arguments", "liste_args", "un_arg", "format", "suite_ecriture",
  "liste_variables", "resultat_retourne", "expression", "expression2",
  "expression3", "test", "liste_comparateur", YY_NULL
>>>>>>> f83f815b203c2bfbfe4d7d851f05d8bde9d1fbd1
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
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

<<<<<<< HEAD
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
      99,   100,   100,   100,   101,   102,   103,   104,   105,   106,
     106,   106,   106,   107,   107,   107,   108,   109,   109,   110,
     110,   111,   112,   113,   113,   114,   114,   115,   115,   116,
     116,   116,   116,   116,   117,   117,   117,   117,   117,   118,
     118,   118,   118,   118,   118,   118,   118,   118,   119,   120,
     120,   120,   120,   120,   120
};
=======
#define YYPACT_NINF -91

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-91)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0
>>>>>>> f83f815b203c2bfbfe4d7d851f05d8bde9d1fbd1

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
<<<<<<< HEAD
       0,     2,     2,     3,     2,     2,     3,     1,     1,     1,
       1,     4,     4,     3,     3,     1,     3,     3,     2,     3,
       3,     4,     1,     3,     4,     6,     0,     2,     3,     1,
       3,     3,     1,     1,     1,     1,     1,     1,     4,     1,
       3,     1,     2,     1,     2,     1,     1,     1,     1,     1,
       2,     1,     3,     6,     5,     3,     2,     2,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     2,     4,     3,
       0,     4,     6,     6,     4,     8,     5,     5,     6,     5,
       5,     4,     4,     3,     3,     0,     2,     2,     3,     1,
       3,     1,     1,     3,     0,     3,     1,     0,     1,     3,
       3,     3,     1,     1,     3,     3,     3,     3,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     1,
       1,     1,     1,     1,     1
=======
      -4,   -23,    38,    48,    59,    64,    72,    90,   -91,   122,
      95,   -91,   -91,   -91,   -91,   -91,   104,   117,   117,   -91,
      32,   317,   -91,    90,   124,   -91,   -13,    39,   -23,   108,
     126,   134,   -91,   144,   152,   -91,   164,   334,   334,    30,
      90,   334,   334,   -91,   -91,   253,   -91,   174,   165,    77,
     -91,   -91,   -91,   -91,   -91,   181,   -91,   -91,   171,   147,
     -91,   -91,   173,    89,   -91,   -91,    44,   -91,   -91,   -91,
     -91,   -91,   -91,   189,   -91,   -91,   178,   165,   313,    93,
     -91,    17,   -91,   -91,   -91,   -91,   -91,   334,   -91,   -91,
     311,   -22,   -91,   -91,   332,    -1,   -91,   -91,   168,   197,
     179,   200,   342,   237,   -91,   -91,   -91,   -91,   334,   -91,
     -91,   -91,   -91,   -91,   -91,   334,   -91,   198,    -8,   201,
     334,   190,   134,   192,   -91,   -23,   212,   -91,   221,   -91,
     142,   -91,   177,   -91,   342,   334,   208,   219,    77,    56,
     -91,    90,   334,   334,   -91,   -91,   -91,   -91,   -91,   -91,
     334,   334,   334,   334,   334,   334,    90,   220,    90,   334,
     334,   -91,   193,   -91,   205,   342,   134,   -91,   227,   -91,
      35,   -91,   102,   134,   -91,   -91,   -91,   236,   165,   233,
     165,   243,   334,   -91,     0,   -91,   -91,   -91,   231,   -22,
     -22,   -22,   -22,   -91,   -91,   -91,   -91,   -91,   229,   -91,
     254,   342,    46,   334,   131,   334,   -91,   -91,   -91,   334,
     334,   -91,   -91,   221,   255,   -91,   -91,   -91,   -91,    33,
      90,    -1,   -91,    80,   334,   252,   241,   175,   -91,   342,
     -91,   -91,   -91,   -91,   -91,   -91,   287,   184,   287,   -91,
     334,   -91,   -91,   287,   -91,   -91,   342,   -91,   -91
>>>>>>> f83f815b203c2bfbfe4d7d851f05d8bde9d1fbd1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     2,     0,
       0,     7,     8,     9,    10,     1,     0,    26,    26,    22,
       0,     0,     4,     0,     0,     5,     0,     0,     0,     0,
       0,     0,    51,     0,     0,    43,    70,     0,     0,    79,
       0,   103,     0,    60,    61,     0,    41,     0,     0,     0,
      45,    46,    47,    48,    49,     0,     3,     6,     0,     0,
      11,    27,     0,     0,    29,    24,     0,    23,    33,    34,
      35,    36,    37,    39,    21,    32,     0,     0,     0,    67,
      92,     0,   117,   116,   119,   118,   120,     0,   121,   122,
       0,   108,   114,   109,     0,    79,    70,    78,     0,     0,
       0,     0,   104,     0,    40,    42,    44,    57,     0,    62,
      63,    64,    65,    66,    56,     0,    50,     0,     0,     0,
       0,     0,     0,     0,    28,     0,     0,    98,   100,   102,
       0,    93,     0,    95,    97,     0,     0,     0,   121,     0,
     124,     0,     0,     0,   126,   128,   127,   129,   130,   131,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    81,
       0,    52,     0,    58,    55,    59,     0,    13,     0,    18,
       0,    15,     0,     0,    31,    30,    25,     0,     0,     0,
       0,     0,     0,    94,     0,    69,   123,   115,    71,   105,
     106,   107,   125,   110,   111,   112,   113,    74,     0,    75,
       0,    80,     0,     0,    91,     0,    20,    19,    14,     0,
       0,    12,    38,   100,     0,   101,    54,    96,    68,     0,
       0,    79,    82,     0,     0,     0,     0,     0,    16,    17,
      99,    53,    72,    73,    76,    77,     0,     0,     0,    84,
       0,    87,    88,     0,    89,    90,    83,    85,    86
};

<<<<<<< HEAD
/* YYDEFGOTO[NTERM-NUM].  */
=======
  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -91,   -91,   -18,   -91,   264,   -91,   -91,   -91,   -91,    67,
     -91,   159,   -91,   -91,   -91,   -91,   262,   -91,   158,   -90,
     222,   -17,   -91,   -42,   -37,   -38,   -91,   -21,   -91,    70,
     -91,   -91,   202,    74,   -91,   -91,   -91,   -91,   -91,   -91,
     -20,   -91,   -91,   111,   -91,    85,   -91,   -91,   -33,    62,
     -75,   -91,   -91
};

  /* YYDEFGOTO[NTERM-NUM].  */
>>>>>>> f83f815b203c2bfbfe4d7d851f05d8bde9d1fbd1
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     8,     9,    10,    11,    60,   121,   170,   171,
     118,   119,    12,    20,    13,    14,    28,    63,    64,    74,
      75,    22,    45,    46,    47,    48,   115,    88,    79,    50,
      51,    52,    98,    99,   200,    53,   163,    54,   204,   226,
      89,    80,   132,   133,   128,   179,   130,   101,   134,    91,
      92,    93,   151
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -106
static const yytype_int16 yypact[] =
{
     -12,   -17,    17,    18,    35,    58,    68,    92,  -106,    84,
      85,  -106,  -106,  -106,  -106,  -106,   108,   115,   115,  -106,
       7,   335,  -106,    92,   129,  -106,    78,    33,   -17,   107,
     124,    53,  -106,   137,   138,  -106,   140,   332,   332,    -6,
      92,   332,   332,  -106,  -106,   271,  -106,   144,   135,   227,
    -106,  -106,  -106,  -106,  -106,   150,  -106,  -106,   139,   156,
    -106,  -106,   153,    20,  -106,  -106,   338,  -106,  -106,  -106,
    -106,  -106,  -106,   157,  -106,  -106,   147,   135,   125,    52,
    -106,    19,  -106,  -106,  -106,  -106,  -106,  -106,  -106,   306,
      -9,  -106,  -106,   331,  -106,   165,   148,   170,   342,   255,
    -106,  -106,  -106,  -106,   332,  -106,  -106,  -106,  -106,  -106,
    -106,   332,  -106,   168,    -8,   173,   332,   155,    53,   162,
    -106,   -17,   174,  -106,   188,  -106,    70,  -106,    71,  -106,
     342,   332,   177,   185,   227,    65,    92,   332,   332,  -106,
    -106,  -106,  -106,  -106,  -106,   332,   332,   332,   332,   332,
     332,    92,   332,   332,  -106,   158,  -106,   204,   342,    53,
    -106,   192,  -106,    26,  -106,   196,    53,  -106,  -106,  -106,
     195,   135,   197,   135,   198,   332,  -106,     1,  -106,  -106,
    -106,   180,    -9,    -9,    -9,    -9,  -106,  -106,  -106,  -106,
    -106,    22,    43,   332,    61,   332,  -106,  -106,  -106,   332,
     332,  -106,  -106,   188,   205,  -106,  -106,  -106,  -106,   109,
      -6,  -106,   106,   332,   207,   201,   167,  -106,   342,  -106,
    -106,  -106,  -106,   191,   305,   175,   305,  -106,   332,    92,
    -106,  -106,   305,  -106,  -106,   342,  -106,  -106,  -106
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -106,  -106,   -19,  -106,   214,  -106,  -106,  -106,  -106,    28,
    -106,   114,  -106,  -106,  -106,  -106,   217,  -106,   128,  -105,
     189,   -11,  -106,   -41,   -34,   -39,  -106,   -21,  -106,    34,
    -106,  -106,  -106,  -106,  -106,  -106,  -106,   -20,  -106,  -106,
      81,  -106,    54,  -106,  -106,   -35,    49,   102,  -106,  -106
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      49,    55,    97,   105,    90,    94,    56,   218,   102,   103,
      65,   114,   140,     3,   117,     4,     5,     6,    49,     1,
      58,    96,    59,   100,    49,    55,   167,   107,    81,   152,
     153,   154,   174,    82,    83,    84,    85,    86,    15,    36,
      30,    95,   208,   209,   137,    31,   155,     7,   139,   142,
     143,    61,    96,    43,    44,   222,   129,    21,    97,    37,
     138,    62,   144,   145,   146,   147,   148,   149,   187,   150,
      16,    43,    44,    87,    49,   164,   206,   193,   194,   195,
     196,    17,   165,   211,    43,    44,    18,   172,    69,    70,
      71,    72,    73,   236,    19,   142,   143,   123,   108,   135,
     114,   124,   184,   136,    25,   142,   143,   176,   144,   145,
     146,   147,   148,   149,    21,   150,   210,    26,   144,   145,
     146,   147,   148,   149,   188,   150,   201,   202,    27,   142,
     143,    43,    44,    57,   109,   110,   111,   112,   113,   197,
      66,   199,   144,   145,   146,   147,   148,   149,    67,   150,
     180,   142,   143,   120,   181,    76,    68,   213,     3,   215,
       4,     5,     6,    77,   144,   145,   146,   147,   148,   149,
     223,   150,   227,   224,   225,    78,   172,   229,    69,    70,
      71,    72,    73,   106,    97,   182,   122,    96,   240,   183,
     116,   237,    23,   117,   242,   126,   245,   243,   127,   158,
      49,   248,   232,   234,   189,   190,   159,   246,   160,   161,
     169,   166,   191,   192,    62,    49,    55,    49,    55,   241,
     205,   244,    49,    55,   142,   143,   247,   173,   177,   178,
     185,   186,   198,   142,   143,   203,   207,   144,   145,   146,
     147,   148,   149,   212,   150,   214,   144,   145,   146,   147,
     148,   149,   216,   150,   142,   143,    32,    33,    34,   219,
     220,   162,    35,   221,   231,   238,   239,   144,   145,   146,
     147,   148,   149,    24,   150,    36,   228,   168,   104,    37,
      29,   175,    38,    39,    40,    41,   142,   143,   125,   233,
      32,    33,    34,   217,    42,   235,    35,   157,   230,   144,
     145,   146,   147,   148,   149,     0,   150,    43,    44,    36,
       0,    21,     0,    37,     0,     0,    38,    39,    40,    41,
      32,    33,    34,     0,    81,   131,    35,     0,    42,    82,
      83,    84,    85,    86,     0,    36,     0,     0,   141,    36,
       0,    43,    44,    37,     0,    81,    38,    39,    40,    41,
      82,    83,    84,    85,    86,     0,    36,     0,    42,     0,
     142,   143,     0,   156,     0,     0,     0,     0,     0,    87,
       0,    43,    44,   144,   145,   146,   147,   148,   149,     0,
     150,   142,   143,     0,     0,     0,     0,     0,     0,     0,
      87,   142,   143,     0,   144,   145,   146,   147,   148,   149,
       0,   150,     0,     0,   144,   145,   146,   147,   148,   149,
       0,   150
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-106))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      21,    21,    39,    45,    37,    38,    23,     7,    41,    42,
      28,    49,    87,    36,    22,    38,    39,    40,    39,    23,
      33,    22,    35,    40,    45,    45,    34,    48,    11,    51,
      52,    53,   122,    16,    17,    18,    19,    20,     0,    22,
       8,    11,     7,     8,    81,    13,    68,    70,    81,    49,
      50,    12,    22,    54,    55,     9,    77,    24,    95,    26,
      81,    22,    62,    63,    64,    65,    66,    67,    12,    69,
      22,    54,    55,    56,    95,   108,   166,   152,   153,   154,
     155,    22,   115,   173,    54,    55,    22,   120,    44,    45,
      46,    47,    48,    13,    22,    49,    50,     8,    21,     6,
     138,    12,   135,    10,     9,    49,    50,   125,    62,    63,
      64,    65,    66,    67,    24,    69,    14,    13,    62,    63,
      64,    65,    66,    67,   141,    69,   159,   160,    11,    49,
      50,    54,    55,     9,    57,    58,    59,    60,    61,   156,
      32,   158,    62,    63,    64,    65,    66,    67,    22,    69,
       8,    49,    50,     6,    12,    11,    22,   178,    36,   180,
      38,    39,    40,    11,    62,    63,    64,    65,    66,    67,
     203,    69,   205,    42,    43,    11,   209,   210,    44,    45,
      46,    47,    48,     9,   221,     8,    13,    22,    13,    12,
       9,   224,    70,    22,   236,     6,   238,    13,    20,    31,
     221,   243,   219,   220,   142,   143,     9,   240,    29,     9,
       9,    13,   150,   151,    22,   236,   236,   238,   238,   236,
      15,   238,   243,   243,    49,    50,   243,    37,    16,     8,
      22,    12,    12,    49,    50,    42,     9,    62,    63,    64,
      65,    66,    67,     7,    69,    12,    62,    63,    64,    65,
      66,    67,     9,    69,    49,    50,     3,     4,     5,    28,
      31,    24,     9,     9,     9,    13,    25,    62,    63,    64,
      65,    66,    67,     9,    69,    22,   209,   118,    25,    26,
      18,   123,    29,    30,    31,    32,    49,    50,    66,   219,
       3,     4,     5,   182,    41,   221,     9,    95,   213,    62,
      63,    64,    65,    66,    67,    -1,    69,    54,    55,    22,
      -1,    24,    -1,    26,    -1,    -1,    29,    30,    31,    32,
       3,     4,     5,    -1,    11,    12,     9,    -1,    41,    16,
      17,    18,    19,    20,    -1,    22,    -1,    -1,    27,    22,
      -1,    54,    55,    26,    -1,    11,    29,    30,    31,    32,
      16,    17,    18,    19,    20,    -1,    22,    -1,    41,    -1,
      49,    50,    -1,    31,    -1,    -1,    -1,    -1,    -1,    56,
      -1,    54,    55,    62,    63,    64,    65,    66,    67,    -1,
      69,    49,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      56,    49,    50,    -1,    62,    63,    64,    65,    66,    67,
      -1,    69,    -1,    -1,    62,    63,    64,    65,    66,    67,
      -1,    69
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
     100,   101,   102,   106,   108,   111,    92,     9,    33,    35,
      77,    12,    22,    88,    89,    73,    32,    22,    22,    44,
      45,    46,    47,    48,    90,    91,    11,    11,    11,    99,
     112,    11,    16,    17,    18,    19,    20,    56,    98,   111,
     119,   120,   121,   122,   119,    11,    22,    95,   103,   104,
      92,   118,   119,   119,    25,    94,     9,    98,    21,    57,
      58,    59,    60,    61,    96,    97,     9,    22,    81,    82,
       6,    78,    13,     8,    12,    91,     6,    20,   115,    98,
     117,    12,   113,   114,   119,     6,    10,    95,    98,   119,
     121,    27,    49,    50,    62,    63,    64,    65,    66,    67,
      69,   123,    51,    52,    53,    68,    31,   103,    31,     9,
      29,     9,    24,   107,   119,   119,    13,    34,    82,     9,
      79,    80,   119,    37,    90,    89,    73,    16,     8,   116,
       8,    12,     8,    12,   119,    22,    12,    12,    92,   120,
     120,   120,   120,   121,   121,   121,   121,    92,    12,    92,
     105,   119,   119,    42,   109,    15,    90,     9,     7,     8,
      14,    90,     7,    98,    12,    98,     9,   114,     7,    28,
      31,     9,     9,   119,    42,    43,   110,   119,    80,   119,
     116,     9,    92,   100,    92,   104,    13,   119,    13,    25,
      13,    92,    94,    13,    92,    94,   119,    92,    94
};

<<<<<<< HEAD
#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif
=======
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
      99,   100,   100,   100,   101,   102,   102,   103,   104,   104,
     105,   105,   106,   107,   108,   109,   109,   109,   109,   110,
     110,   110,   111,   112,   112,   113,   113,   114,   115,   116,
     116,   117,   117,   118,   118,   119,   119,   119,   119,   119,
     120,   120,   120,   120,   120,   121,   121,   121,   121,   121,
     121,   121,   121,   121,   121,   122,   123,   123,   123,   123,
     123,   123
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
       0,     4,     6,     6,     4,     4,     6,     5,     1,     0,
       1,     0,     5,     5,     6,     5,     5,     4,     4,     3,
       3,     0,     2,     2,     3,     1,     3,     1,     1,     3,
       0,     3,     1,     0,     1,     3,     3,     3,     1,     1,
       3,     3,     3,     3,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     3,     2,     3,     1,     1,     1,     1,
       1,     1
};

>>>>>>> f83f815b203c2bfbfe4d7d851f05d8bde9d1fbd1

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* This macro is provided for backward compatibility. */

#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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
  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  YYSIZE_T yysize1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = 0;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
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
                yysize1 = yysize + yytnamerr (0, yytname[yyx]);
                if (! (yysize <= yysize1
                       && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                yysize = yysize1;
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

  yysize1 = yysize + yystrlen (yyformat);
  if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  yysize = yysize1;

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

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
      yychar = YYLEX;
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
  *++yyvsp = yylval;

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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
      
<<<<<<< HEAD

/* Line 1806 of yacc.c  */
#line 1747 "src/yacc.c"
=======
#line 1543 "src/yacc.c" /* yacc.c:1646  */
>>>>>>> f83f815b203c2bfbfe4d7d851f05d8bde9d1fbd1
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

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 2067 of yacc.c  */
#line 362 "yacc.y"


