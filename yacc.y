/* -----------------------------------------------------*/
/* TOKENS                                               */
/* -----------------------------------------------------*/

%{
  /* Pour le flag de compilation -Wall */
  extern int yylex(void);
  extern void yyerror(char *txt);
%}

/* Vide */
%token VIDE

/* Fonctions prédefinies */
%token RAND ECRIRE LIRE

/* Ponctuation */
%token CROCHET_OUVRANT CROCHET_FERMANT
%token VIRGULE POINT_VIRGULE POINT
%token PARENTHESE_OUVRANTE PARENTHESE_FERMANTE 
%token DEUX_POINTS 
%token POINT_ET_POINT
%token INTERROGATION

/* Constantes */
%token CSTE_ENTIERE
%token CSTE_REELLE
%token CSTE_BOOLEENNE
%token CSTE_CARACTERE
%token CSTE_CHAINE

/* Affectation */
%token OPAFF

/* Variables */
%token IDF

/* Mots clefs */
%token PROG ACC_DEBUT ACC_FIN
%token SI ALORS SINON 
%token TANT_QUE POUR FAIRE
%token RETOURNE
%token STRUCT FSTRUCT
%token TABLEAU 
%token TYPE
%token DE
%token PROCEDURE FONCTION
%token VARIABLE
%token SWITCH CASE DEFAULT

/* Types */
%token ENTIER REEL BOOLEEN CARACTERE CHAINE

/* Opérateurs */ 
%token PLUS MOINS MULTIPLICATION DIVISION MODULO

 /* Opérateurs binaires */
%token PLUS_ET_PLUS MOINS_ET_MOINS
%token NEGATION

/* Opérateurs raccourcis */
%token PLUS_EGAL MOINS_EGAL MULT_EGAL DIV_EGAL MODULO_EGAL

/* Comparateurs */
%token INFERIEUR 
%token SUPERIEUR 
%token INFERIEUR_OU_EGAL
%token SUPERIEUR_OU_EGAL
%token EGAL 
%token DIFFERENT 
%token ET 
%token OU

/* Break & Continue */
%token CONTINUE
%token BREAK

%token START

%%

/* -----------------------------------------------------*/
/* Programme général                                    */
/* -----------------------------------------------------*/

programme: PROG corps
         ;
          
corps: liste_declarations START liste_instructions
     | START liste_instructions
     ;

/* -----------------------------------------------------*/
/* Déclarations                                         */
/* -----------------------------------------------------*/

liste_declarations: declaration POINT_VIRGULE
                  | liste_declarations declaration POINT_VIRGULE 
                  ;

declaration: declaration_type
           | declaration_variable
           | declaration_procedure
           | declaration_fonction
           ;
          
declaration_type: TYPE IDF DEUX_POINTS suite_declaration_type
                ;
          
suite_declaration_type: TABLEAU dimension DE nom_type
                      | STRUCT liste_champs FSTRUCT
                      ;

/* -----------------------------------------------------*/
/* Déclarations : TABLEAUX                              */
/* -----------------------------------------------------*/                

dimension: CROCHET_OUVRANT liste_dimensions CROCHET_FERMANT
         ;
                                                 
liste_dimensions: une_dimension
                | liste_dimensions VIRGULE une_dimension
                ;
                                                 
une_dimension: expression POINT_ET_POINT expression
             ;
                
/* -----------------------------------------------------*/
/* Déclarations : STRUCTURES                            */
/* -----------------------------------------------------*/
               
liste_champs: un_champ POINT_VIRGULE 
            | liste_champs un_champ POINT_VIRGULE
            ;

un_champ: IDF DEUX_POINTS nom_type
        ;
     
/* -----------------------------------------------------*/
/* Déclarations : VARIABLES                            */
/* -----------------------------------------------------*/     

declaration_variable: VARIABLE declaration_suite_variable DEUX_POINTS nom_type
                    ;
          
declaration_suite_variable: IDF
                          | declaration_suite_variable VIRGULE IDF
                          ;

/* -----------------------------------------------------*/
/* Déclarations  : PROCEDURES/ FONCTIONS                */
/* -----------------------------------------------------*/

declaration_procedure: PROCEDURE IDF liste_parametres corps
                     ;
      
declaration_fonction: FONCTION IDF liste_parametres RETOURNE type_simple corps
                    ;
          
liste_parametres:
                | PARENTHESE_OUVRANTE PARENTHESE_FERMANTE
                | PARENTHESE_OUVRANTE liste_param PARENTHESE_FERMANTE
                ;
          
liste_param: un_param
           | liste_param VIRGULE un_param
           ;
          
un_param: IDF DEUX_POINTS nom_type
        ;

/* -----------------------------------------------------*/
/* Déclarations  : TYPES                                */
/* -----------------------------------------------------*/

nom_type: type_simple
        | IDF
        ;
          
type_simple: ENTIER
           | REEL
           | BOOLEEN
           | CARACTERE
           | CHAINE CROCHET_OUVRANT CSTE_ENTIERE CROCHET_FERMANT /* Chaîne constante */
           ;

/* -----------------------------------------------------*/
/* Instructions                                         */
/* -----------------------------------------------------*/

liste_instructions: ACC_DEBUT suite_liste_inst ACC_FIN
                  ;
          
suite_liste_inst: instruction
                | suite_liste_inst instruction
                ;
                                                             
instruction: POINT_VIRGULE
           | affectation POINT_VIRGULE
           | condition
           | tant_que
           | pour
           | faire_tant_que
           | switch
           | appel POINT_VIRGULE
           | VIDE
           | RETOURNE resultat_retourne POINT_VIRGULE
           | instr_pre POINT_VIRGULE
           ;
     
instr_pre: RAND PARENTHESE_OUVRANTE PARENTHESE_FERMANTE 
         | ECRIRE PARENTHESE_OUVRANTE format suite_ecriture PARENTHESE_FERMANTE 
         | LIRE PARENTHESE_OUVRANTE liste_variables PARENTHESE_FERMANTE 
	 ;

/* -----------------------------------------------------*/
/* Affectation                                          */
/* -----------------------------------------------------*/
  
affectation: affectation_base
           | incr_bin
           ; 

affectation_base: variable OPAFF expression   /* x = 5 + 3 * 5 + fun(5) ... */
                | variable OPAFF ternaire     /* x = 5 + 6 > 3 ? 10 : 26 */
                | variable op_rac expression  /* x += 5; x /= 6 + 9 */
                ;
 
incr_bin: variable op_bin
        | op_bin variable
        ;

op_bin: PLUS_ET_PLUS
      | MOINS_ET_MOINS 
      ;

op_rac: PLUS_EGAL
      | MOINS_EGAL
      | MULT_EGAL
      | DIV_EGAL
      | MODULO_EGAL
      ;

variable: IDF suite_variable
        ;

suite_variable: suite_variable CROCHET_OUVRANT expression CROCHET_FERMANT
              | suite_variable POINT IDF 
              |
              ;

/* -----------------------------------------------------*/
/* Condition                                            */
/* -----------------------------------------------------*/
  
condition: SI expression ALORS liste_instructions
         | SI expression ALORS liste_instructions SINON liste_instructions
	 | SI expression ALORS liste_instructions SINON condition
         ;

/* -----------------------------------------------------*/
/* Tant que/pour/faire tant que                         */
/* -----------------------------------------------------*/

tant_que: TANT_QUE expression FAIRE liste_instructions
        ;
    
pour: POUR pour_cont FAIRE liste_instructions
    | POUR PARENTHESE_OUVRANTE pour_cont PARENTHESE_FERMANTE FAIRE liste_instructions
    ;

pour_cont: pour_a POINT_VIRGULE pour_e POINT_VIRGULE pour_a
         ;

pour_a: affectation
      |
      ;

pour_e: expression
      |
      ;

faire_tant_que: FAIRE liste_instructions TANT_QUE expression POINT_VIRGULE
              ;

/* -----------------------------------------------------*/
/* Ternaire                                             */
/* -----------------------------------------------------*/

ternaire: expression INTERROGATION expression DEUX_POINTS expression
        ;

/* -----------------------------------------------------*/
/* Switch                                               */
/* -----------------------------------------------------*/

switch: SWITCH expression ACC_DEBUT suite_switch default ACC_FIN
      ;

suite_switch: suite_switch CASE expression DEUX_POINTS liste_instructions
            | suite_switch CASE expression DEUX_POINTS instruction
            | CASE expression DEUX_POINTS liste_instructions
            | CASE expression DEUX_POINTS instruction
            ;

default: DEFAULT DEUX_POINTS liste_instructions
       | DEFAULT DEUX_POINTS instruction
       |
       ;

/* -----------------------------------------------------*/
/* Appel                                                */
/* -----------------------------------------------------*/

appel: IDF liste_arguments
     ;
          
liste_arguments: PARENTHESE_OUVRANTE PARENTHESE_FERMANTE
               | PARENTHESE_OUVRANTE liste_args PARENTHESE_FERMANTE
               ;

liste_args: un_arg
          | liste_args VIRGULE un_arg
          ;
          
un_arg: expression
      ;

/* -----------------------------------------------------*/
/* WRITE                                                */
/* -----------------------------------------------------*/

format: CSTE_CHAINE
      ;
 
suite_ecriture: VIRGULE expression suite_ecriture
	      |
              ;

/* -----------------------------------------------------*/
/* READ                                                 */
/* -----------------------------------------------------*/

liste_variables: liste_variables VIRGULE variable 
               | variable
               ;
  
/* -----------------------------------------------------*/
/* EXPRESSIONS                                          */
/* -----------------------------------------------------*/
       
resultat_retourne:
                 | expression
                 ;
             
expression: expression PLUS expression2 
          | expression MOINS expression2
          | expression OU expression2
          | expression2
          | test
          ;
          
expression2: expression2 MULTIPLICATION expression3 
           | expression2 DIVISION expression3
	   | expression2 MODULO expression3
           | expression2 ET expression3
           | expression3
           | MOINS expression3
           ; 

expression3: PARENTHESE_OUVRANTE expression PARENTHESE_FERMANTE
           | CSTE_REELLE
           | CSTE_ENTIERE
           | CSTE_CARACTERE
           | CSTE_BOOLEENNE
           | CSTE_CHAINE 
           | appel
           | instr_pre /* READ/WRITE/RAND */
           | incr_bin  /* ++x, x++ ... */ 
           | variable
           | PARENTHESE_OUVRANTE affectation_base PARENTHESE_FERMANTE
           | PARENTHESE_OUVRANTE ternaire PARENTHESE_FERMANTE
           | NEGATION expression3 /* Autoriser: !!!5 par exemple */
           ;   

test: expression liste_comparateur expression2
    ;
     
liste_comparateur: INFERIEUR
                 | INFERIEUR_OU_EGAL
                 | SUPERIEUR
                 | SUPERIEUR_OU_EGAL
                 | EGAL
                 | DIFFERENT
                 ;

%%
