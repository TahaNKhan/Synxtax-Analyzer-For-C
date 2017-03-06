/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    BOOLEAN = 258,
    BREAK = 259,
    CLASS = 260,
    DOUBLE = 261,
    ELSE = 262,
    EXTENDS = 263,
    FOR = 264,
    IF = 265,
    IMPLEMENTS = 266,
    INT = 267,
    INTERFACE = 268,
    NEWARRAY = 269,
    PRINTLN = 270,
    READLN = 271,
    RETURN = 272,
    STRING = 273,
    VOID = 274,
    WHILE = 275,
    PLUS = 276,
    MINUS = 277,
    MULTIPLICATION = 278,
    DIVISION = 279,
    MOD = 280,
    LESS = 281,
    LESSEQUAL = 282,
    GREATER = 283,
    GREATEREQUAL = 284,
    EQUAL = 285,
    NOTEQUAL = 286,
    AND = 287,
    OR = 288,
    NOT = 289,
    ASSIGNOP = 290,
    SEMICOLON = 291,
    COMMA = 292,
    PERIOD = 293,
    LEFTPAREN = 294,
    RIGHTPAREN = 295,
    LEFTBRACE = 296,
    RIGHTBRACE = 297,
    LEFTBRACKET = 298,
    RIGHTBRACKET = 299,
    INTCONSTANT = 300,
    DOUBLECONSTANT = 301,
    STRINGCONSTANT = 302,
    BOOLEANCONSTANT = 303,
    ID = 304
  };
#endif
/* Tokens.  */
#define BOOLEAN 258
#define BREAK 259
#define CLASS 260
#define DOUBLE 261
#define ELSE 262
#define EXTENDS 263
#define FOR 264
#define IF 265
#define IMPLEMENTS 266
#define INT 267
#define INTERFACE 268
#define NEWARRAY 269
#define PRINTLN 270
#define READLN 271
#define RETURN 272
#define STRING 273
#define VOID 274
#define WHILE 275
#define PLUS 276
#define MINUS 277
#define MULTIPLICATION 278
#define DIVISION 279
#define MOD 280
#define LESS 281
#define LESSEQUAL 282
#define GREATER 283
#define GREATEREQUAL 284
#define EQUAL 285
#define NOTEQUAL 286
#define AND 287
#define OR 288
#define NOT 289
#define ASSIGNOP 290
#define SEMICOLON 291
#define COMMA 292
#define PERIOD 293
#define LEFTPAREN 294
#define RIGHTPAREN 295
#define LEFTBRACE 296
#define RIGHTBRACE 297
#define LEFTBRACKET 298
#define RIGHTBRACKET 299
#define INTCONSTANT 300
#define DOUBLECONSTANT 301
#define STRINGCONSTANT 302
#define BOOLEANCONSTANT 303
#define ID 304

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
