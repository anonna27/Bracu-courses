/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison interface for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IF = 258,
     ELSE = 259,
     FOR = 260,
     ADDOP = 261,
     ASSIGNOP = 262,
     COMMA = 263,
     CONST_FLOAT = 264,
     CONST_INT = 265,
     DECOP = 266,
     ID = 267,
     INCOP = 268,
     INT = 269,
     LCURL = 270,
     LOGICOP = 271,
     LPAREN = 272,
     LTHIRD = 273,
     MULOP = 274,
     NOT = 275,
     PRINTLN = 276,
     RCURL = 277,
     RELOP = 278,
     RETURN = 279,
     RPAREN = 280,
     RTHIRD = 281,
     SEMICOLON = 282,
     VOID = 283,
     WHILE = 284,
     FLOAT = 285,
     DO = 286,
     BREAK = 287,
     CONTINUE = 288,
     CHAR = 289,
     DOUBLE = 290,
     SWITCH = 291,
     CASE = 292,
     DEFAULT = 293
   };
#endif
/* Tokens.  */
#define IF 258
#define ELSE 259
#define FOR 260
#define ADDOP 261
#define ASSIGNOP 262
#define COMMA 263
#define CONST_FLOAT 264
#define CONST_INT 265
#define DECOP 266
#define ID 267
#define INCOP 268
#define INT 269
#define LCURL 270
#define LOGICOP 271
#define LPAREN 272
#define LTHIRD 273
#define MULOP 274
#define NOT 275
#define PRINTLN 276
#define RCURL 277
#define RELOP 278
#define RETURN 279
#define RPAREN 280
#define RTHIRD 281
#define SEMICOLON 282
#define VOID 283
#define WHILE 284
#define FLOAT 285
#define DO 286
#define BREAK 287
#define CONTINUE 288
#define CHAR 289
#define DOUBLE 290
#define SWITCH 291
#define CASE 292
#define DEFAULT 293



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
