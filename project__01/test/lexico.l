%{
# include <cerrno>
#include <stdio.h>
#include <string>
#include <fstream>
#include <iostream>
#include "driver.h"
#include "parser.tab.hh"
#include "location.hh"
#undef yywrap
#define yywrap() 1
static yy::location loc;
using namespace std;
ofstream archivo;
ofstream archivom;
%}
%option noyywrap nounput batch debug noinput
%option outfile="scanner.cpp"
%option yylineno
DIGITO [0-9]
LETRA [a-zA-ZñÑ]

NUMERO {DIGITO}+("."{DIGITO}+)?
ID {LETRA}({LETRA}|{DIGITO}|"_")*

DELIMITADOR [\t\r\f" "]
%%
{NUMERO}        {archivo << "Correcto " << yytext << "\n";return yy::analizador_fran::make_NUMERO(strtol (yytext, NULL, 10),loc);}

"+"			{archivo << "Correcto " << yytext << "\n" ;return yy::analizador_fran::make_MAS(loc);}
"-"			{archivo << "Correcto " << yytext << "\n" ;return yy::analizador_fran::make_MENOS(loc);}
"*"			{archivo << "Correcto " << yytext << "\n" ;return yy::analizador_fran::make_POR(loc);}
"/"			{archivo << "Correcto " << yytext << "\n" ;return yy::analizador_fran::make_DIVISION(loc);}
"if" 		{archivo << "Correcto " << yytext << "\n" ;return yy::analizador_fran::make_IF(yytext, loc);}
"else" 		{archivo << "Correcto " << yytext << "\n" ;return yy::analizador_fran::make_ELSE(yytext, loc);}
"while" 	{archivo << "Correcto " << yytext << "\n" ;return yy::analizador_fran::make_WHILE(yytext, loc);}
"for" 		{archivo << "Correcto " << yytext << "\n" ;return yy::analizador_fran::make_FOR(yytext, loc);}
")" 		{archivo << "Correcto " << yytext << "\n" ;return yy::analizador_fran::make_PC(loc);}
"(" 		{archivo << "Correcto " << yytext << "\n" ;return yy::analizador_fran::make_PA(loc);}
";" 		{archivo << "Correcto " << yytext << "\n" ;return yy::analizador_fran::make_PUNTOCOMA(loc);}
"{" 		{archivo << "Correcto " << yytext << "\n" ;return yy::analizador_fran::make_CA(loc);}
"}" 		{archivo << "Correcto " << yytext << "\n" ;return yy::analizador_fran::make_CC(loc);}
":" 		{archivo << "Correcto " << yytext << "\n" ;return yy::analizador_fran::make_DOSPUNTOS(loc);}
"="			{archivo << "Correcto " << yytext << "\n" ;return yy::analizador_fran::make_IGUAL(loc);}
"function"	{archivo << "Correcto " << yytext << "\n" ;return yy::analizador_fran::make_FUNCION(yytext, loc);}
"!="		{archivo << "Correcto " << yytext << "\n" ;return yy::analizador_fran::make_DISTINTO(loc);}
"<"			{archivo << "Correcto " << yytext << "\n" ;return yy::analizador_fran::make_MENORQ(loc);}
">"			{archivo << "Correcto " << yytext << "\n" ;return yy::analizador_fran::make_MAYORQ(loc);}
"<="		{archivo << "Correcto " << yytext << "\n" ;return yy::analizador_fran::make_MENORIGUAL(loc);}
">="		{archivo << "Correcto " << yytext << "\n" ;return yy::analizador_fran::make_MAYORIGUAL(loc);}
","			{archivo << "Correcto " << yytext << "\n" ;return yy::analizador_fran::make_COMA(loc);}
"++"		{archivo << "Correcto " << yytext << "\n" ;return yy::analizador_fran::make_MASMAS(loc);}
"--"		{archivo << "Correcto " << yytext << "\n" ;return yy::analizador_fran::make_MENOSMENOS(loc);}
"=="		{archivo << "Correcto " << yytext << "\n" ;return yy::analizador_fran::make_IGUALIGUAL(loc);}
"print"		{archivo << "Correcto " << yytext << "\n" ;return yy::analizador_fran::make_PRINT(yytext, loc);}

{ID}	{archivo << "Correcto " << yytext << "\n"; return yy::analizador_fran::make_ID(yytext,loc);}

{DELIMITADOR}   {}
.               {archivo << "Error " << yytext << "\n" ;}
<<EOF>>		{return yy::analizador_fran::make_FIN(loc);}
%%

void analizador_driver::iniciarScanner()
{
  yy_flex_debug = false;
  if(file.empty() || file == "-"){
    printf("No se encuentra el archivo de entrada");
    exit(1);
  }else{
    yyin = fopen (file.c_str (), "r");
	archivo.open("tokens_lexico.txt");
  }
}
void analizador_driver::terminarScanner()
{
  fclose(yyin);
  archivo.close();
  archivom.close();
}