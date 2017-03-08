%{

#include "y.tab.h"

%}


%%

\/\*[A-Za-z0-9=_\+\-\*\\\/\%\<\{\}\(\)\[\]\!\.\;\,\ \t\n\r\#]*\*\/          ;//multiline comments
"//"((.)*)\n					                ;// single line comments
"boolean"	                       				{printf("\n%s ", yytext); return BOOLEAN;}
"break"						                    {printf("\n%s ", yytext); return BREAK;}
"class"						                    {printf("\n%s ", yytext); return CLASS;}
"double"					                    {printf("\n%s ", yytext); return DOUBLE;}
"else"					                    	{printf("\n%s ", yytext); return ELSE;}
"extends"		                    			{printf("\n%s ", yytext); return EXTENDS;}
"for"				                    		{printf("\n%s ", yytext); return FOR;}
"if"				                    		{printf("\n%s ", yytext); return IF;}
"implements"		                    		{printf("\n%s ", yytext); return IMPLEMENTS;}
"int"					                    	{printf("\n%s ", yytext); return INT;}
"interface"		                    			{printf("\n%s ", yytext); return INTERFACE;}
"newarray"	                    				{printf("\n%s ", yytext); return NEWARRAY;}
"println"	                    				{printf("\n%s ", yytext); return PRINTLN;}
"readln"	                    				{printf("\n%s ", yytext); return READLN;}
"return"			                    		{printf("\n%s ", yytext); return RETURN;}
"string"			                    		{printf("\n%s ", yytext); return STRING;}
"void"					                    	{printf("\n%s ", yytext); return VOID;}
"while"		                    				{printf("\n%s ", yytext); return WHILE;}
"+"							                    {printf("\n%s ", yytext); return PLUS;}
"-"					                    		{printf("\n%s ", yytext); return MINUS;}
"*"                 							{printf("\n%s ", yytext); return MULTIPLICATION;}
"/"							                    {printf("\n%s ", yytext); return DIVISION;}
"%"							                    {printf("\n%s ", yytext); return MOD;}
"<"					                    		{printf("\n%s ", yytext); return LESS;}
"<="		                    				{printf("\n%s ", yytext); return LESSEQUAL;}
">"			                    				{printf("\n%s ", yytext); return GREATER;}
">="	                    					{printf("\n%s ", yytext); return GREATEREQUAL;}
"=="					                    	{printf("\n%s ", yytext); return EQUAL;}
"!="                    						{printf("\n%s ", yytext); return NOTEQUAL;}
"&&"					                    	{printf("\n%s ", yytext); return AND;}
"||"                    						{printf("\n%s ", yytext); return OR;}
"!"						                    	{printf("\n%s ", yytext); return NOT;}
"="	                    						{printf("\n%s ", yytext); return ASSIGNOP;}
";"							                    {printf("\n%s ", yytext); return SEMICOLON;}
","					                    		{printf("\n%s ", yytext); return COMMA;}
"."					                    		{printf("\n%s ", yytext); return PERIOD;}
"("                 							{printf("\n%s ", yytext); return LEFTPAREN;}
")"					                    		{printf("\n%s ", yytext); return RIGHTPAREN;}
"{"                 							{printf("\n%s ", yytext); return LEFTBRACE;}
"}"								                {printf("\n%s ", yytext); return RIGHTBRACE;}
"["												{printf("\n%s ", yytext); return LEFTBRACKET;}
"]"												{printf("\n%s ", yytext); return RIGHTBRACKET;}
(0x|0X)[0-9A-Fa-f]*+|[0-9]+	                    {printf("\n%s ", yytext); return INTCONSTANT;}
[0-9]+"."[0-9]+((E|e)("+"|"-")?([0-9]+))? 		{printf("\n%s ", yytext); return DOUBLECONSTANT;}
[0-9]+((E|e)("+"|"-")+([0-9]+))                 {printf("\n%s ", yytext); return DOUBLECONSTANT;}
[a-zA-Z_]?\"(\\.|[^\\"])*\"	                    {printf("\n%s ", yytext); return STRINGCONSTANT;}
"true"						                    {printf("\n%s ", yytext); return BOOLEANCONSTANT;}
"false"						                    {printf("\n%s ", yytext); return BOOLEANCONSTANT;}
[a-zA-Z]([a-zA-Z]|[0-9]|"_")*	    	        {printf("\n%s ", yytext); return ID;}
\n	                       						{printf("\n");}
[ \t]+						                    ; // ignore whitespace
.							                    ;




%%

int yywrap(void){return 1;}

