%skeleton "lalr1.cc" /* -*- C++ -*- */
%require "3.0.2"
%defines
%define parser_class_name {analizador_fran}
%define api.token.constructor
%define api.namespace {yy}
%define api.value.type variant
%define parse.assert
%code requires
{
#include <string>
#include <stdio.h>
#include <fstream>
#include <iostream>
#include <cstdlib>
#include <cstdio>
class analizador_driver;
extern int yylineno;

}
%param { analizador_driver& driver }
%locations
%define parse.trace
%define parse.error verbose
%code
{
#include "driver.h"
#include <iostream>
extern int lineno;
extern int yylex();
extern int yylval;
void yyerror(const char * msg);
}
%define api.token.prefix {TOK_}

//Listadode Terminales
%token MAS "+"
%token MENOS "-"
%token POR "*"
%token DIVISION "/"
%token PA "("
%token PC ")"
%token PUNTOCOMA ";"
%token CA "{"
%token CC "}"
%token DOSPUNTOS ":"
%token IGUAL "="
%token DISTINTO "!="
%token MENORQ "<" 
%token MAYORQ ">"
%token COMA ","
%token MAYORIGUAL ">="
%token MENORIGUAL "<="
%token MASMAS "++"
%token MENOSMENOS "--"
%token IGUALIGUAL "=="

%token <std::string> PRINT "print" 
%token <std::string> FUNCION "function"
%token <std::string> IF "if"
%token <std::string> ELSE "else"
%token <std::string> WHILE "while"
%token <std::string> FOR "for"
%token <std::string> ID "id"
%token <float> NUMERO "num"
%token FIN 0 "eof"

%printer { yyoutput << $$; } <*>;
%%
%start INICIO;

INICIO 				: principal funcion 
					| funcion principal
					| principal;

principal 			: lineascodigos;

lineascodigos 		: lineascodigo
					|;

lineascodigo 		: lineascodigo linea 
					| linea;

linea 				: invocarmetodos 
					| crearvariable 
					| cambiarvalor
					| buclecondicion
					| imprimir;

invocarmetodos		: ID PA parametrosenvio PC ;

parametrosenvio 	: parenvio
					|;
					
imprimir			: PRINT "(" dato ")"
					| PRINT "(" error ")"
					| PRINT error dato error
					| PRINT error dato ")"
					| PRINT "(" dato error;

dato				: valor;

parenvio			: parenvio COMA penvio | penvio;

penvio 				: valor 
					| ID;

valor				: NUMERO 
					| ID
					| oprcomun
					| error;
					
crearvariable		: ID IGUAL ID
					| ID IGUAL NUMERO
					| ID error ID
					| ID error NUMERO;
					
operasignacion		: aritmetico 
					| invocarmetodos
					| incredismivariable;

aritmetico			: oprcomun 
					| oprcomun oprcomplemento;

oprcomun			: valor tipoopr valor 
					| valor tipoopr ID 
					| ID tipoopr valor
					| ID tipoopr ID
					| valor error valor 
					| valor error ID 
					| ID error valor
					| ID error ID;
					
tipoopr				: MAS 
					| MENOS 
					| POR 
					| DIVISION;

oprcomplemento		: oprcomplemento oprcom | oprcom;

oprcom				: tipoopr valor | tipoopr ID;

incredismivariable	: ID indis;

indis				: MASMAS | MENOSMENOS;

cambiarvalor		: ID IGUAL cambvalor;

cambvalor			: valor | operasignacion | ID;

buclecondicion		: condicionif 
					| buclefor 
					| buclewhile;

condicionif			: condicionsi 
					| condicionsi condicionno;
					
condicionsi			: IF PA condicion PC CA lineascodigos CC;
					| IF error condicion PC CA lineascodigos CC;
					| IF PA condicion error CA lineascodigos CC;
					| IF PA error PC CA lineascodigos CC;
					| IF PA condicion PC CA lineascodigos CC;

condicion			: valor condicional valor
					| valor condicional ID
					| ID condicional valor
					| ID condicional ID
					| valor error valor
					| valor error ID
					| ID error ID;

condicional			: MAYORQ
					| MENORQ
					| IGUALIGUAL
					| DISTINTO
					| MAYORIGUAL
					| MENORIGUAL;

condicionno			: ELSE CA lineascodigos CC
					| error CA lineascodigos CC;

buclefor			: FOR PA iniciafor PUNTOCOMA condicion PUNTOCOMA incredismivariable PC CA lineascodigos CC;
					| FOR error iniciafor PUNTOCOMA condicion PUNTOCOMA incredismivariable PC CA lineascodigos CC;
					| FOR PA error PUNTOCOMA condicion PUNTOCOMA incredismivariable PC CA lineascodigos CC;
					| FOR PA iniciafor error condicion PUNTOCOMA incredismivariable PC CA lineascodigos CC;
					| FOR PA iniciafor PUNTOCOMA error PUNTOCOMA incredismivariable PC CA lineascodigos CC;
					| FOR PA iniciafor PUNTOCOMA condicion error incredismivariable PC CA lineascodigos CC;
					| FOR PA iniciafor PUNTOCOMA condicion PUNTOCOMA error PC CA lineascodigos CC;
					| FOR PA iniciafor PUNTOCOMA condicion PUNTOCOMA incredismivariable error CA lineascodigos CC;
					| FOR PA iniciafor PUNTOCOMA condicion PUNTOCOMA incredismivariable PC error lineascodigos CC;
					| FOR PA iniciafor PUNTOCOMA condicion PUNTOCOMA incredismivariable PC CA lineascodigos error;

iniciafor			: ID IGUAL NUMERO;

buclewhile			: WHILE PA condicion PC CA lineascodigos CC;

funcion				: FUNCION ID PA parametrosin PC CA lineascodigos CC;

parametrosin		: parametros |;

parametros			: parametros COMA parametro | parametro;

parametro			: ID;

%%
using namespace std;
ofstream tokens;
int n = 1;

int borrar()
{
  if( remove( "sintactico_errores.txt" ) != 0 )
    perror( "Error deleting file" );
  else
    puts( "File successfully deleted" );
  return 0;
}

void yy::analizador_fran::error(const location_type& lugar, const std::string& lexema)
{
	if (n==1){borrar();}
	tokens.open("sintactico_errores.txt", ofstream::app);
    std::cout << n << lexema << std::endl;
	tokens << lexema << "\n";
	tokens.close();
	n++;
}
