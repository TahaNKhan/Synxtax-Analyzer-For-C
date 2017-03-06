%{

#include "y.tab.h"
#include <string>
#include <iostream>

%}


%%

"/*"(([^*]|(("*"+)[^*/]))*)("*"+)"/"\n          ;//multiline comments
"//"((.)*)\n					                ;// single line comments
"boolean"	                       				{printf("%s", yytext); return BOOLEAN;}
"break"						                    {printf("%s", yytext); return BREAK;}
"class"						                    {printf("%s", yytext); return CLASS;}
"double"					                    {printf("%s", yytext); return DOUBLE;}
"else"					                    	{printf("%s", yytext); return ELSE;}
"extends"		                    			{printf("%s", yytext); return EXTENDS;}
"for"				                    		{printf("%s", yytext); return FOR;}
"if"				                    		{printf("%s", yytext); return IF;}
"implements"		                    		{printf("%s", yytext); return IMPLEMENTS;}
"int"					                    	{printf("%s", yytext); return INT;}
"interface"		                    			{printf("%s", yytext); return INTERFACE;}
"newarray"	                    				{printf("%s", yytext); return NEWARRAY;}
"println"	                    				{printf("%s", yytext); return PRINTLN;}
"readln"	                    				{printf("%s", yytext); return READLN;}
"return"			                    		{printf("%s", yytext); return RETURN;}
"string"			                    		{printf("%s", yytext); return STRING;}
"void"					                    	{printf("%s", yytext); return VOID;}
"while"		                    				{printf("%s", yytext); return WHILE;}
"+"							                    {printf("%s", yytext); return PLUS;}
"-"					                    		{printf("%s", yytext); return MINUS;}
"*"                 							{printf("%s", yytext); return MULTIPLICATION;}
"/"							                    {printf("%s", yytext); return DIVISION;}
"%"							                    {printf("%s", yytext); return MOD;}
"<"					                    		{printf("%s", yytext); return LESS;}
"<="		                    				{printf("%s", yytext); return LESSEQUAL;}
">"			                    				{printf("%s", yytext); return GREATER;}
">="	                    					{printf("%s", yytext); return GREATEREQUAL;}
"=="					                    	{printf("%s", yytext); return EQUAL;}
"!="                    						{printf("%s", yytext); return NOTEQUAL;}
"&&"					                    	{printf("%s", yytext); return AND;}
"||"                    						{printf("%s", yytext); return OR;}
"!"						                    	{printf("%s", yytext); return NOT;}
"="	                    						{printf("%s", yytext); return ASSIGNOP;}
";"							                    {printf("%s", yytext); return SEMICOLON;}
","					                    		{printf("%s", yytext); return COMMA;}
"."					                    		{printf("%s", yytext); return PERIOD;}
"("                 							{printf("%s", yytext); return LEFTPAREN;}
")"					                    		{printf("%s", yytext); return RIGHTPAREN;}
"{"                 							{printf("%s", yytext); return LEFTBRACE;}
"}"								                {printf("%s", yytext); return RIGHTBRACE;}
"["												{printf("%s", yytext); return LEFTBRACKET;}
"]"												{printf("%s", yytext); return RIGHTBRACKET;}
(0x|0X)[0-9A-Fa-f]*+|[0-9]+	                    {printf("%s", yytext); return INTCONSTANT;}
[0-9]+"."[0-9]+((E|e)("+"|"-")?([0-9]+))? 		{printf("%s", yytext); return DOUBLECONSTANT;}
[0-9]+((E|e)("+"|"-")+([0-9]+))                 {printf("%s", yytext); return DOUBLECONSTANT;}
[a-zA-Z_]?\"(\\.|[^\\"])*\"	                    {printf("%s", yytext); return STRINGCONSTANT;}
"true"						                    {insertToTrie(yytext);printf("%s", yytext); return BOOLEANCONSTANT;}
"false"						                    {insertToTrie(yytext);printf("%s", yytext); return BOOLEANCONSTANT;}
[a-zA-Z]([a-zA-Z]|[0-9]|"_")*	    	        {insertToTrie(yytext);printf("id "); return ID;}
\n	                       						{printf("\n");}
[ \t]+						                    ; // ignore whitespace
.							                    ;




%%

