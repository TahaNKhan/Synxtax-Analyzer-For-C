%{
#include <stdio.h>
%}

%token BOOLEAN
%token BREAK
%token CLASS
%token DOUBLE
%token ELSE
%token EXTENDS
%token FOR
%token IF
%token IMPLEMENTS
%token INT
%token INTERFACE
%token NEWARRAY
%token PRINTLN
%token READLN
%token RETURN
%token STRING
%token VOID
%token WHILE
%token PLUS
%token MINUS
%token MULTIPLICATION
%token DIVISION
%token MOD
%token LESS
%token LESSEQUAL
%token GREATER
%token GREATEREQUAL
%token EQUAL
%token NOTEQUAL
%token AND
%token OR
%token NOT
%token ASSIGNOP
%token SEMICOLON
%token COMMA
%token PERIOD
%token LEFTPAREN
%token RIGHTPAREN
%token LEFTBRACE
%token RIGHTBRACE
%token LEFTBRACKET
%token RIGHTBRACKET
%token INTCONSTANT
%token DOUBLECONSTANT
%token STRINGCONSTANT
%token BOOLEANCONSTANT
%token ID

%left LEFTBRACKET PERIOD
%left COMMA
%left NOT
%left MULTIPLICATION DIVISION MOD
%left PLUS MINUS
%nonassoc LESS GREATER LESSEQUAL GREATEREQUAL
%left EQUAL NOTEQUAL
%left AND
%left OR
%nonassoc ASSIGNOP



%%
Program: Program Decl 									{printf("[Reduce %i]",yyn);}
	   | Decl											{printf("[Reduce %i]",yyn);} 
	   ;
Decl: VariableDecl 										{printf("[Reduce %i]",yyn);} 
	| FunctionDecl										{printf("[Reduce %i]",yyn);} 
	| ClassDecl											{printf("[Reduce %i]",yyn);} 
	| InterfaceDecl										{printf("[Reduce %i]",yyn);} 
	;
VariableDecl : Variable SEMICOLON						{printf("[Reduce %i]",yyn);}
			 ; 
Variable: Type ID										{printf("[Reduce %i]",yyn);}
		;
Type: INT												{printf("[Reduce %i]",yyn);}
	| DOUBLE											{printf("[Reduce %i]",yyn);}
	| BOOLEAN											{printf("[Reduce %i]",yyn);}
	| STRING											{printf("[Reduce %i]",yyn);}
	| Type LEFTBRACKET RIGHTBRACKET						{printf("[Reduce %i]",yyn);}
	| ID												{printf("[Reduce %i]",yyn);}
	;
FunctionDecl : Type ID LEFTPAREN Formals RIGHTPAREN StmtBlock 				{printf("[Reduce %i]",yyn);}
			 | VOID ID LEFTPAREN Formals RIGHTPAREN StmtBlock				{printf("[Reduce %i]",yyn);}
			 ;
Formals : Formals COMMA Variable											{printf("[Reduce %i]",yyn);} 
		| Variable 				 											{printf("[Reduce %i]",yyn);}
		| 																	{printf("[Reduce %i]",yyn);}
		;
ClassDecl : CLASS ID  Extends Implements LEFTBRACE FieldStar RIGHTBRACE		{printf("[Reduce %i]",yyn);}
		  ;
Extends : EXTENDS ID 														{printf("[Reduce %i]",yyn);}
		| 																	{printf("[Reduce %i]",yyn);}
		;
Implements : IMPLEMENTS ids 												{printf("[Reduce %i]",yyn);}
		   | 																{printf("[Reduce %i]",yyn);}
		   ;
ids : ids COMMA ID															{printf("[Reduce %i]",yyn);}
	| ID																	{printf("[Reduce %i]",yyn);}
	;
FieldStar : FieldStar Field													{printf("[Reduce %i]",yyn);}
		  | 																{printf("[Reduce %i]",yyn);}
		  ;
Field : VariableDecl														{printf("[Reduce %i]",yyn);}
	  | FunctionDecl														{printf("[Reduce %i]",yyn);}
	  | Stmt																{printf("[Reduce %i]",yyn);}
	  ;
InterfaceDecl : INTERFACE ID LEFTBRACE Prototypes RIGHTBRACE 				{printf("[Reduce %i]",yyn);} 
    		  | INTERFACE ID LEFTBRACE RIGHTBRACE 							{printf("[Reduce %i]",yyn);}
    		  ;

Prototypes : Prototype Prototypes 											{printf("[Reduce %i]",yyn);}
    	   | 																{printf("[Reduce %i]",yyn);}
    	   ;

Prototype: Type ID LEFTPAREN Formals RIGHTPAREN SEMICOLON 					{printf("[Reduce %i]",yyn);} 
    	 | VOID ID LEFTPAREN Formals RIGHTPAREN SEMICOLON 					{printf("[Reduce %i]",yyn);}
    	 ;

StmtBlock: LEFTBRACE VariableDecl1 Stmts RIGHTBRACE 						{printf("[Reduce %i]",yyn);}
   		 ;
VariableDecl1 : VariableDecl1 VariableDecl									{printf("[Reduce %i]",yyn);}
			  |																{printf("[Reduce %i]",yyn);}
			  ;
Stmts : Stmt Stmts															{printf("[Reduce %i]",yyn);}
	  | 																	{printf("[Reduce %i]",yyn);}
	  ;
Stmt : ExprStar SEMICOLON													{printf("[Reduce %i]",yyn);}
	 | IfStmt																{printf("[Reduce %i]",yyn);}
	 | WhileStmt															{printf("[Reduce %i]",yyn);}
	 | ForStmt																{printf("[Reduce %i]",yyn);}
	 | BreakStmt															{printf("[Reduce %i]",yyn);}
	 | ReturnStmt															{printf("[Reduce %i]",yyn);}
	 | PrintStmt															{printf("[Reduce %i]",yyn);}
	 | StmtBlock															{printf("[Reduce %i]",yyn);}
	 ;
IfStmt : IF LEFTPAREN Expr RIGHTPAREN Stmt									{printf("[Reduce %i]",yyn);}
	   | IF LEFTPAREN Expr RIGHTPAREN Stmt ELSE Stmt						{printf("[Reduce %i]",yyn);}
	   ;
WhileStmt : WHILE LEFTPAREN Expr RIGHTPAREN Stmt							{printf("[Reduce %i]",yyn);}
		  ;
ForStmt : FOR LEFTPAREN ExprStar SEMICOLON Expr SEMICOLON ExprStar RIGHTPAREN Stmt	{printf("[Reduce %i]",yyn);}
		;
BreakStmt : BREAK SEMICOLON 												{}
		  ;
ReturnStmt: RETURN ExprStar SEMICOLON										{printf("[Reduce %i]",yyn);} 
    	  ;
ExprStar : Expr																{ printf("[Reduce %i]",yyn);}
		 | 																	{printf("[Reduce %i]",yyn);}
		 ;
PrintStmt : PRINTLN LEFTPAREN Exprs RIGHTPAREN SEMICOLON 					{printf("[Reduce %i]",yyn);}
		  ;
Exprs	  : Expr COMMA Exprs												{printf("[Reduce %i]",yyn);}
		  | Expr 															{ printf("[Reduce %i]",yyn);}
		  ;

Expr : Lvalue ASSIGNOP Expr 												{printf("[Reduce %i]",yyn);} 
     | Constant																{printf("[Reduce %i]",yyn);} 
     | Lvalue 																{printf("[Reduce %i]",yyn);} 
     | Call 																{printf("[Reduce %i]",yyn);} 
     | LEFTPAREN Expr RIGHTPAREN 											{printf("[Reduce %i]",yyn);}
     | Expr PLUS Expr 														{printf("[Reduce %i]",yyn);}
     | Expr MINUS Expr 														{printf("[Reduce %i]",yyn);}
     | Expr MULTIPLICATION Expr	 											{printf("[Reduce %i]",yyn);}
     | Expr DIVISION Expr 													{printf("[Reduce %i]",yyn);}
     | MINUS Expr 															{printf("[Reduce %i]",yyn);}
     | Expr LESS Expr 														{printf("[Reduce %i]",yyn);}
     | Expr LESSEQUAL Expr 													{printf("[Reduce %i]",yyn);}
     | Expr GREATER Expr 													{printf("[Reduce %i]",yyn);}
     | Expr GREATEREQUAL Expr 												{printf("[Reduce %i]",yyn);}
     | Expr EQUAL Expr 														{printf("[Reduce %i]",yyn);}
     | Expr NOTEQUAL Expr 													{printf("[Reduce %i]",yyn);}
     | READLN LEFTPAREN RIGHTPAREN 											{printf("[Reduce %i]",yyn);}
     | NEWARRAY LEFTPAREN INTCONSTANT COMMA Type RIGHTPAREN 				{printf("[Reduce %i]",yyn);}
     ;

Lvalue : ID																	{printf("[Reduce %i]",yyn);}
	   | Expr LEFTBRACKET Expr RIGHTBRACKET									{printf("[Reduce %i]",yyn);}
	   | Expr PERIOD ID														{printf("[Reduce %i]",yyn);}
	   ;
Call : ID LEFTPAREN Actuals RIGHTPAREN										{printf("[Reduce %i]",yyn);}
	 | ID PERIOD ID LEFTPAREN Actuals RIGHTPAREN							{printf("[Reduce %i]",yyn);}
	 ;
Actuals : Exprs																{printf("[Reduce %i]",yyn);}
		|																	{printf("[Reduce %i]",yyn);}
		;
Constant : DOUBLECONSTANT													{printf("[Reduce %i]",yyn);}
		 | INTCONSTANT														{printf("[Reduce %i]",yyn);}
		 | STRINGCONSTANT													{printf("[Reduce %i]",yyn);}
		 | BOOLEANCONSTANT													{printf("[Reduce %i]",yyn);}
		 ;

%%


int main() {
  yyparse();
  return 0;
}

void yyerror(char *s){
    printf("error: %s\n", s);
}



