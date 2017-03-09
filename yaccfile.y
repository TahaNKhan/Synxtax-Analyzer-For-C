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
%token ASSIGNOP
%left OR
%left AND
%right EQUAL NOTEQUAL
%nonassoc LESS GREATER LESSEQUAL GREATEREQUAL
%left PLUS MINUS
%left MULTIPLICATION DIVISION
%%
Program: Decl Program									{$$ = $1;printf("[Reduce %i]",yyn);}
	   | Decl											{$$ = $1;printf("[Reduce %i]",yyn);} 
	   ;
Decl: VariableDecl 										{$$ = $1;printf("[Reduce %i]",yyn);} 
	| FunctionDecl										{$$ = $1;printf("[Reduce %i]",yyn);} 
	| ClassDecl											{$$ = $1;printf("[Reduce %i]",yyn);} 
	| InterfaceDecl										{$$ = $1;printf("[Reduce %i]",yyn);} 
	;

VariableDecl1 : VariableDecl VariableDecl1				{printf("[Reduce %i]",yyn);}
			  |											{printf("[Reduce %i]",yyn);}
			  ;
VariableDecl : Variable SEMICOLON						{$$ = $1;printf("[Reduce %i]",yyn);}
			 ; 
Variable: Type ID										{$$ = $2;printf("[Reduce %i]",yyn);}
		;
Type: INT												{$$ = $1;printf("[Reduce %i]",yyn);}
	| DOUBLE											{$$ = $1;printf("[Reduce %i]",yyn);}
	| BOOLEAN											{$$ = $1;printf("[Reduce %i]",yyn);}
	| STRING											{$$ = $1;printf("[Reduce %i]",yyn);}
	| Type LEFTBRACKET RIGHTBRACKET						{$$ = $1;printf("[Reduce %i]",yyn);}
	| ID												{$$ = $1;printf("[Reduce %i]",yyn);}
	;
FunctionDecl : Type ID LEFTPAREN Formals RIGHTPAREN StmtBlock 				{printf("[Reduce %i]",yyn);}
			 | VOID ID LEFTPAREN Formals RIGHTPAREN StmtBlock				{printf("[Reduce %i]",yyn);}
			 ;
Formals : Formals COMMA Variable											{$$ = $1;printf("[Reduce %i]",yyn);} 
		| Variable 				 											{printf("[Reduce %i]",yyn);}
		| 																	{printf("[Reduce %i]",yyn);}
		;
ClassDecl : CLASS ID  Extends Implements LEFTBRACE Field RIGHTBRACE			{printf("[Reduce %i]",yyn);}
		  ;
Extends : EXTENDS ID 														{printf("[Reduce %i]",yyn);}
		| 																	{printf("[Reduce %i]",yyn);}
		;
Implements : IMPLEMENTS ids 												{$$ = $2;printf("[Reduce %i]",yyn);}
		   | 																{printf("[Reduce %i]",yyn);}
		   ;
ids : ID COMMA ids															{$$ =$1;printf("[Reduce %i]",yyn);}
	| ID																	{$$ =$1;printf("[Reduce %i]",yyn);}
	;
Field : VariableDecl														{printf("[Reduce %i]",yyn);}
	  | FunctionDecl														{printf("[Reduce %i]",yyn);}
	  | 																	{printf("[Reduce %i]",yyn);}
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
Stmts : Stmt Stmts															{printf("[Reduce %i]",yyn);}
	  | Stmt 																{printf("[Reduce %i]",yyn);}
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
ForStmt : FOR LEFTPAREN ExprStar SEMICOLON Expr SEMICOLON ExprStar RIGHTPAREN Stmt	{$$ = $3+$5+$7+$9;printf("[Reduce %i]",yyn);}
		;
BreakStmt : BREAK SEMICOLON 												{}
		  ;
ReturnStmt: RETURN ExprStar SEMICOLON										{printf("[Reduce %i]",yyn);} 
    	  ;
ExprStar : Expr																{$$ = $1; printf("[Reduce %i]",yyn);}
		 | 																	{printf("[Reduce %i]",yyn);}
		 ;
PrintStmt : PRINTLN LEFTPAREN Exprs RIGHTPAREN SEMICOLON 					{printf("[Reduce %i]",yyn);}
		  ;
Exprs	  : Exprs COMMA Expr												{$$ = $1 + $3; printf("[Reduce %i]",yyn);}
		  | Expr 															{$$ = $1; printf("[Reduce %i]",yyn);}
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

Lvalue : ID																	{$$ = $1;printf("[Reduce %i]",yyn);}
	   | Expr LEFTBRACKET Expr RIGHTBRACKET									{$$ = $1 + $3;printf("[Reduce %i]",yyn);}
	   | Expr PERIOD ID														{$$ = $1 + $3;printf("[Reduce %i]",yyn);}
	   ;
Call : ID LEFTPAREN Actuals RIGHTPAREN										{$$ = $1 + $3;printf("[Reduce %i]",yyn);}
	 | ID PERIOD ID LEFTPAREN Actuals RIGHTPAREN							{$$ = $1 + $3 + $5;printf("[Reduce %i]",yyn);}
	 ;
Actuals : Expr																{$$ = $1;printf("[Reduce %i]",yyn);}
		| Expr COMMA Actuals												{$$ = $1 + $3;printf("[Reduce %i]",yyn);}
		|																	{printf("[Reduce %i]",yyn);}
		;
Constant : DOUBLECONSTANT													{$$ = $1;printf("[Reduce %i]",yyn);}
		 | INTCONSTANT														{$$ = $1;printf("[Reduce %i]",yyn);}
		 | STRINGCONSTANT													{$$ = $1;printf("[Reduce %i]",yyn);}
		 | BOOLEANCONSTANT													{$$ = $1;printf("[Reduce %i]",yyn);}
		 ;

%%


int main() {
  yyparse();
  return 0;
}

void yyerror(char *s){
    printf("error: %s\n", s);
}



