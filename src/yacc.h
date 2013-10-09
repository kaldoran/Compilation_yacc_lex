/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison interface for Yacc-like parsers in C
   
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

extern YYSTYPE yylval;


