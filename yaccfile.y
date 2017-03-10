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
Program: Program Decl 									{printf("[reduce %i]",yyn);}
	   | Decl											{printf("[reduce %i]",yyn);} 
	   ;
Decl: VariableDecl 										{printf("[reduce %i]",yyn);} 
	| FunctionDecl										{printf("[reduce %i]",yyn);} 
	| ClassDecl											{printf("[reduce %i]",yyn);} 
	| InterfaceDecl										{printf("[reduce %i]",yyn);} 
	;
VariableDecl : Variable SEMICOLON						{printf("[reduce %i]",yyn);}
			 ; 
Variable: Type ID										{printf("[reduce %i]",yyn);}
		;
Type: INT												{printf("[reduce %i]",yyn);}
	| DOUBLE											{printf("[reduce %i]",yyn);}
	| BOOLEAN											{printf("[reduce %i]",yyn);}
	| STRING											{printf("[reduce %i]",yyn);}
	| Type LEFTBRACKET RIGHTBRACKET						{printf("[reduce %i]",yyn);}
	| ID												{printf("[reduce %i]",yyn);}
	;
FunctionDecl : Type ID LEFTPAREN Formals RIGHTPAREN StmtBlock 				{printf("[reduce %i]",yyn);}
			 | VOID ID LEFTPAREN Formals RIGHTPAREN StmtBlock				{printf("[reduce %i]",yyn);}
			 ;
Formals : Formals COMMA Variable											{printf("[reduce %i]",yyn);} 
		| Variable 				 											{printf("[reduce %i]",yyn);}
		| 																	{printf("[reduce %i]",yyn);}
		;
ClassDecl : CLASS ID  Extends Implements LEFTBRACE FieldStar RIGHTBRACE		{printf("[reduce %i]",yyn);}
		  ;
Extends : EXTENDS ID 														{printf("[reduce %i]",yyn);}
		| 																	{printf("[reduce %i]",yyn);}
		;
Implements : IMPLEMENTS ids 												{printf("[reduce %i]",yyn);}
		   | 																{printf("[reduce %i]",yyn);}
		   ;
ids : ids COMMA ID															{printf("[reduce %i]",yyn);}
	| ID																	{printf("[reduce %i]",yyn);}
	;
FieldStar : FieldStar Field													{printf("[reduce %i]",yyn);}
		  | 																{printf("[reduce %i]",yyn);}
		  ;
Field : VariableDecl														{printf("[reduce %i]",yyn);}
	  | FunctionDecl														{printf("[reduce %i]",yyn);}
	  | Stmt																{printf("[reduce %i]",yyn);}
	  ;
InterfaceDecl : INTERFACE ID LEFTBRACE Prototypes RIGHTBRACE 				{printf("[reduce %i]",yyn);} 
    		  | INTERFACE ID LEFTBRACE RIGHTBRACE 							{printf("[reduce %i]",yyn);}
    		  ;

Prototypes : Prototype Prototypes 											{printf("[reduce %i]",yyn);}
    	   | 																{printf("[reduce %i]",yyn);}
    	   ;

Prototype: Type ID LEFTPAREN Formals RIGHTPAREN SEMICOLON 					{printf("[reduce %i]",yyn);} 
    	 | VOID ID LEFTPAREN Formals RIGHTPAREN SEMICOLON 					{printf("[reduce %i]",yyn);}
    	 ;

StmtBlock: LEFTBRACE VariableDecl1 Stmts RIGHTBRACE 						{printf("[reduce %i]",yyn);}
   		 ;
VariableDecl1 : VariableDecl1 VariableDecl									{printf("[reduce %i]",yyn);}
			  |																{printf("[reduce %i]",yyn);}
			  ;
Stmts : Stmt Stmts															{printf("[reduce %i]",yyn);}
	  | 																	{printf("[reduce %i]",yyn);}
	  ;
Stmt : ExprStar SEMICOLON													{printf("[reduce %i]",yyn);}
	 | IfStmt																{printf("[reduce %i]",yyn);}
	 | WhileStmt															{printf("[reduce %i]",yyn);}
	 | ForStmt																{printf("[reduce %i]",yyn);}
	 | BreakStmt															{printf("[reduce %i]",yyn);}
	 | ReturnStmt															{printf("[reduce %i]",yyn);}
	 | PrintStmt															{printf("[reduce %i]",yyn);}
	 | StmtBlock															{printf("[reduce %i]",yyn);}
	 ;
IfStmt : IF LEFTPAREN Expr RIGHTPAREN Stmt									{printf("[reduce %i]",yyn);}
	   | IF LEFTPAREN Expr RIGHTPAREN Stmt ELSE Stmt						{printf("[reduce %i]",yyn);}
	   ;
WhileStmt : WHILE LEFTPAREN Expr RIGHTPAREN Stmt							{printf("[reduce %i]",yyn);}
		  ;
ForStmt : FOR LEFTPAREN ExprStar SEMICOLON Expr SEMICOLON ExprStar RIGHTPAREN Stmt	{printf("[reduce %i]",yyn);}
		;
BreakStmt : BREAK SEMICOLON 												{}
		  ;
ReturnStmt: RETURN ExprStar SEMICOLON										{printf("[reduce %i]",yyn);} 
    	  ;
ExprStar : Expr																{ printf("[reduce %i]",yyn);}
		 | 																	{printf("[reduce %i]",yyn);}
		 ;
PrintStmt : PRINTLN LEFTPAREN Exprs RIGHTPAREN SEMICOLON 					{printf("[reduce %i]",yyn);}
		  ;
Exprs	  : Expr COMMA Exprs												{printf("[reduce %i]",yyn);}
		  | Expr 															{ printf("[reduce %i]",yyn);}
		  ;

Expr : Lvalue ASSIGNOP Expr 												{printf("[reduce %i]",yyn);} 
     | Constant																{printf("[reduce %i]",yyn);} 
     | Lvalue 																{printf("[reduce %i]",yyn);} 
     | Call 																{printf("[reduce %i]",yyn);} 
     | LEFTPAREN Expr RIGHTPAREN 											{printf("[reduce %i]",yyn);}
     | Expr PLUS Expr 														{printf("[reduce %i]",yyn);}
     | Expr MINUS Expr 														{printf("[reduce %i]",yyn);}
     | Expr MULTIPLICATION Expr	 											{printf("[reduce %i]",yyn);}
     | Expr DIVISION Expr 													{printf("[reduce %i]",yyn);}
     | MINUS Expr 															{printf("[reduce %i]",yyn);}
     | Expr LESS Expr 														{printf("[reduce %i]",yyn);}
     | Expr LESSEQUAL Expr 													{printf("[reduce %i]",yyn);}
     | Expr GREATER Expr 													{printf("[reduce %i]",yyn);}
     | Expr GREATEREQUAL Expr 												{printf("[reduce %i]",yyn);}
     | Expr EQUAL Expr 														{printf("[reduce %i]",yyn);}
     | Expr NOTEQUAL Expr 													{printf("[reduce %i]",yyn);}
     | READLN LEFTPAREN RIGHTPAREN 											{printf("[reduce %i]",yyn);}
     | NEWARRAY LEFTPAREN INTCONSTANT COMMA Type RIGHTPAREN 				{printf("[reduce %i]",yyn);}
     ;

Lvalue : ID																	{printf("[reduce %i]",yyn);}
	   | Expr LEFTBRACKET Expr RIGHTBRACKET									{printf("[reduce %i]",yyn);}
	   | Expr PERIOD ID														{printf("[reduce %i]",yyn);}
	   ;
Call : ID LEFTPAREN Actuals RIGHTPAREN										{printf("[reduce %i]",yyn);}
	 | ID PERIOD ID LEFTPAREN Actuals RIGHTPAREN							{printf("[reduce %i]",yyn);}
	 ;
Actuals : Exprs																{printf("[reduce %i]",yyn);}
		|																	{printf("[reduce %i]",yyn);}
		;
Constant : DOUBLECONSTANT													{printf("[reduce %i]",yyn);}
		 | INTCONSTANT														{printf("[reduce %i]",yyn);}
		 | STRINGCONSTANT													{printf("[reduce %i]",yyn);}
		 | BOOLEANCONSTANT													{printf("[reduce %i]",yyn);}
		 ;

%%


int main() {
  yyparse();
  return 0;
}

void yyerror(char *s){
    printf("\n[reject]\n");
}



