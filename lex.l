%{
  #include "yacc.h"
%}

%%

\/\*(([^\"])|(\**\"[^\"]*\"))*\*+\/ ;
\#.* ;
--.*-- ;
\/\/.* ;

".." {return(POINT_ET_POINT);}
"["  {return(CROCHET_OUVRANT);}
"]"  {return(CROCHET_FERMANT);}
","  {return(VIRGULE);}
";"  {return(POINT_VIRGULE);}
"("  {return(PARENTHESE_OUVRANTE);}
")"  {return(PARENTHESE_FERMANTE);}
":"  {return(DEUX_POINTS);}
"="  {return(OPAFF);}

\./[a-zA-Z_][a-zA-Z0-9_]* {return(POINT);}

\"(\\.|[^\"])*\"           {return(CSTE_CHAINE);}
'([^']|\\t|\\n|\\r|\\')'   {return(CSTE_CARACTERE);}
-?(0|[1-9][0-9]*)          {return(CSTE_ENTIERE);}
-?(0|[1-9][0-9]*)?\.[0-9]+ {return(CSTE_REELLE);}
true|false                 {return(CSTE_BOOLEENNE);}

write {return(ECRIRE);}
read  {return(LIRE);} 

%[A-Z _0-9]*% {return(PROG);}

"{"         {return(ACC_DEBUT);}
"}"         {return(ACC_FIN);}
if          {return(SI);}
then        {return(ALORS);}
else        {return(SINON);}
while       {return(TANT_QUE);}
for         {return(POUR);}
do          {return(FAIRE);}
return      {return(RETOURNE);}
struct      {return(STRUCT);}
end\ struct {return(FSTRUCT);}
array       {return(TABLEAU);}
type        {return(TYPE);}
of          {return(DE);}
proc        {return(PROCEDURE);}
function    {return(FONCTION);}
var         {return(VARIABLE);}
switch      {return(SWITCH);}
case        {return(CASE);}
default     {return(DEFAULT);}
start       {return(START);}

int    {return(ENTIER);}
float  {return(REEL);}
bool   {return(BOOLEEN);}
char   {return(CARACTERE);}
string {return(CHAINE);}

"+=" {return(PLUS_EGAL);}
"-=" {return(MOINS_EGAL);}
"*=" {return(MULT_EGAL);}
"/=" {return(DIV_EGAL);}
"%=" {return(MODULO_EGAL);}

"++" {return(PLUS_ET_PLUS);}
"--" {return(MOINS_ET_MOINS);}
"+"  {return(PLUS);}
"-"  {return(MOINS);}
"*"  {return(MULTIPLICATION);}
"/"  {return(DIVISION);}
"%"  {return(MODULO);}
"!"  {return(NEGATION);}
"?"  {return(INTERROGATION);}

"<"   {return(INFERIEUR);}
"<="  {return(INFERIEUR_OU_EGAL);}
">"   {return(SUPERIEUR);}
">="  {return(SUPERIEUR_OU_EGAL);}
"=="  {return(EGAL);}
"!="  {return(DIFFERENT);}

and {return(ET);}
or  {return(OU);}

[a-zA-Z_][a-zA-Z0-9_]* {return(IDF);}

" "|\n|\t ;

%%

void yyerror (char *s) {
    fprintf (stderr, "%s\n", s);
}
