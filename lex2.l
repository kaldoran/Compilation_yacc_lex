%{
  #include "yacc.h"
%}

%%

\/\*([^\"\*\/]|\*|(\**\"[^\"]*\"))*\*+\/ ;
\#.* ;
--.*-- ;
\/\/.* ;

".." {printf("POINT_ET_POINT");return(POINT_ET_POINT);}
"["  {printf("CROCHET_OUVRANT");return(CROCHET_OUVRANT);}
"]"  {printf("CROCHET_FERMANT");return(CROCHET_FERMANT);}
","  {printf("VIRGULE");return(VIRGULE);}
";"  {printf("POINT_VIRGULE");return(POINT_VIRGULE);}
"("  {printf("PARENTHESE_OUVRANTE");return(PARENTHESE_OUVRANTE);}
")"  {printf("PARENTHESE_FERMANTE");return(PARENTHESE_FERMANTE);}
":"  {printf("DEUX_POINTS");return(DEUX_POINTS);}
"="  {printf("OPAFF");return(OPAFF);}

\./[a-zA-Z_][a-zA-Z0-9_]* {printf("POINT");return(POINT);}

\"(\\.|[^\"])*\"         {printf("CSTE_CHAINE");return(CSTE_CHAINE);}
'([^']|\\t|\\n|\\r|\\')' {printf("CSTE_CARACTERE");return(CSTE_CARACTERE);}
(0|[1-9][0-9]*)          {printf("CSTE_ENTIERE");return(CSTE_ENTIERE);}
(0|[1-9][0-9]*)?\.[0-9]+ {printf("CSTE_REELLE");return(CSTE_REELLE);}
true|false               {printf("CSTE_BOOLEENNE");return(CSTE_BOOLEENNE);}

rand  {printf("RAND");return(RAND);}
write {printf("ECRIRE");return(ECRIRE);}
read  {printf("LIRE");return(LIRE);} 

%[A-Z _0-9]*% {printf(PROG");return(PROG);}

"{"         {printf("ACC_DEBUT");return(ACC_DEBUT);}
"}"         {printf("ACC_FIN");return(ACC_FIN);}
if          {printf("SI");return(SI);}
then        {printf("ALORS");return(ALORS);}
else        {printf("SINON");return(SINON);}
while       {printf("TANT_QUE");return(TANT_QUE);}
for         {printf("POUR");return(POUR);}
do          {printf("FAIRE");return(FAIRE);}
return      {printf("RETOURNE");return(RETOURNE);}
struct      {printf("STRUCT");return(STRUCT);}
end\ struct {printf("FSTRUCT");return(FSTRUCT);}
array       {printf("TABLEAU");return(TABLEAU);}
type        {printf("TYPE");return(TYPE);}
of          {printf("DE");return(DE);}
proc        {printf("PROCEDURE");return(PROCEDURE);}
function    {printf("FONCTION");return(FONCTION);}
var         {printf("VARIABLE");return(VARIABLE);}
switch      {printf("SWITCH");return(SWITCH);}
case        {printf("CASE");return(CASE);}
default     {printf("DEFAULT");return(DEFAULT);}
start       {printf("START");return(START);}
continue    {printf("CONTINUE");return(CONTINUE);}
break       {printf("BREAK");return(BREAK);}

int    {printf("ENTIER");return(ENTIER);}
float  {printf("REEL");return(REEL);}
bool   {printf("BOOLEEN");return(BOOLEEN);}
char   {printf("CARACTERE");return(CARACTERE);}
string {printf("CHAINE");return(CHAINE);}

"+=" {printf("PLUS_EGAL");return(PLUS_EGAL);}
"-=" {printf("MOINS_EGAL");return(MOINS_EGAL);}
"*=" {printf("MULT_EGAL");return(MULT_EGAL);}
"/=" {printf("DIV_EGAL");return(DIV_EGAL);}
"%=" {printf("MODULO_EGAL");return(MODULO_EGAL);}

"++" {printf("PLUS_ET_PLUS");return(PLUS_ET_PLUS);}
"--" {printf("MOINS_ET_MOINS");return(MOINS_ET_MOINS);}
"+"  {printf("PLUS");return(PLUS);}
"-"  {printf("MOINS");return(MOINS);}
"*"  {printf("MULTIPLICATION");return(MULTIPLICATION);}
"/"  {printf("DIVISION");return(DIVISION);}
"%"  {printf("MODULO");return(MODULO);}
"!"  {printf("NEGATION");return(NEGATION);}
"?"  {printf("INTERROGATION");return(INTERROGATION);}

"<"   {printf("INFERIEUR");return(INFERIEUR);}
"<="  {printf("INFERIEUR_OU_EGAL");return(INFERIEUR_OU_EGAL);}
">"   {printf("SUPERIEUR");return(SUPERIEUR);}
">="  {printf("SUPERIEUR_OU_EGAL");return(SUPERIEUR_OU_EGAL);}
"=="  {printf("EGAL");return(EGAL);}
"!="  {printf("DIFFERENT");return(DIFFERENT);}

and {printf("ET");return(ET);}
or  {printf("OU");return(OU);}

[a-zA-Z_][a-zA-Z0-9_]* {printf("IDF");return(IDF);}

" "|\n|\t ;

%%

void yyerror (char *s) {
    fprintf (stderr, "%s\n", s);
}
