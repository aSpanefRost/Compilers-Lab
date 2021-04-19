/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IDENTIFIER = 258,
    INTEGER_CONST = 259,
    FLOATING_CONST = 260,
    CHARACTER_CONST = 261,
    ENUMERATION_CONST = 262,
    STRING_LITERALS = 263,
    AUTO = 264,
    ENUM = 265,
    RESTRICT = 266,
    UNSIGNED = 267,
    BREAK = 268,
    EXTERN = 269,
    RETURN = 270,
    VOID = 271,
    CASE = 272,
    FLOAT = 273,
    SHORT = 274,
    VOLATILE = 275,
    CHAR = 276,
    FOR = 277,
    SIGNED = 278,
    WHILE = 279,
    CONST = 280,
    GOTO = 281,
    SIZEOF = 282,
    BOOL = 283,
    CONTINUE = 284,
    IF = 285,
    STATIC = 286,
    COMPLEX = 287,
    DEFAULT = 288,
    INLINE = 289,
    STRUCT = 290,
    IMAGINARY = 291,
    DO = 292,
    INT = 293,
    SWITCH = 294,
    DOUBLE = 295,
    LONG = 296,
    TYPEDEF = 297,
    ELSE = 298,
    REGISTER = 299,
    UNION = 300,
    LEFT_SQUARE = 301,
    RIGHT_SQUARE = 302,
    LEFT_ROUND = 303,
    RIGHT_ROUND = 304,
    LEFT_CURLY = 305,
    RIGHT_CURLY = 306,
    DOT = 307,
    LE_OP = 308,
    GE_OP = 309,
    EQ_OP = 310,
    NE_OP = 311,
    AND_LOGICAL_OP = 312,
    OR_LOGICAL_OP = 313,
    LT_OP = 314,
    GT_OP = 315,
    POINTER_OP = 316,
    INCREMENT_OP = 317,
    DECREMENT_OP = 318,
    LEFT_LOGICAL_OP = 319,
    RIGHT_LOGICAL_OP = 320,
    MUL_ASSIGN = 321,
    DIV_ASSIGN = 322,
    MOD_ASSIGN = 323,
    ADD_ASSIGN = 324,
    SUB_ASSIGN = 325,
    LEFT_ASSIGN = 326,
    RIGHT_ASSIGN = 327,
    AND_ASSIGN = 328,
    XOR_ASSIGN = 329,
    OR_ASSIGN = 330,
    EQUALS = 331,
    ADD = 332,
    SUB = 333,
    MUL = 334,
    NEG = 335,
    BIT_AND = 336,
    MOD = 337,
    DIV = 338,
    EXCL = 339,
    BIT_XOR = 340,
    BIT_OR = 341,
    QUES = 342,
    COLON = 343,
    SEMICOLON = 344,
    ELLIPSIS = 345,
    COMMA = 346,
    HASH = 347,
    THEN = 348
  };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define INTEGER_CONST 259
#define FLOATING_CONST 260
#define CHARACTER_CONST 261
#define ENUMERATION_CONST 262
#define STRING_LITERALS 263
#define AUTO 264
#define ENUM 265
#define RESTRICT 266
#define UNSIGNED 267
#define BREAK 268
#define EXTERN 269
#define RETURN 270
#define VOID 271
#define CASE 272
#define FLOAT 273
#define SHORT 274
#define VOLATILE 275
#define CHAR 276
#define FOR 277
#define SIGNED 278
#define WHILE 279
#define CONST 280
#define GOTO 281
#define SIZEOF 282
#define BOOL 283
#define CONTINUE 284
#define IF 285
#define STATIC 286
#define COMPLEX 287
#define DEFAULT 288
#define INLINE 289
#define STRUCT 290
#define IMAGINARY 291
#define DO 292
#define INT 293
#define SWITCH 294
#define DOUBLE 295
#define LONG 296
#define TYPEDEF 297
#define ELSE 298
#define REGISTER 299
#define UNION 300
#define LEFT_SQUARE 301
#define RIGHT_SQUARE 302
#define LEFT_ROUND 303
#define RIGHT_ROUND 304
#define LEFT_CURLY 305
#define RIGHT_CURLY 306
#define DOT 307
#define LE_OP 308
#define GE_OP 309
#define EQ_OP 310
#define NE_OP 311
#define AND_LOGICAL_OP 312
#define OR_LOGICAL_OP 313
#define LT_OP 314
#define GT_OP 315
#define POINTER_OP 316
#define INCREMENT_OP 317
#define DECREMENT_OP 318
#define LEFT_LOGICAL_OP 319
#define RIGHT_LOGICAL_OP 320
#define MUL_ASSIGN 321
#define DIV_ASSIGN 322
#define MOD_ASSIGN 323
#define ADD_ASSIGN 324
#define SUB_ASSIGN 325
#define LEFT_ASSIGN 326
#define RIGHT_ASSIGN 327
#define AND_ASSIGN 328
#define XOR_ASSIGN 329
#define OR_ASSIGN 330
#define EQUALS 331
#define ADD 332
#define SUB 333
#define MUL 334
#define NEG 335
#define BIT_AND 336
#define MOD 337
#define DIV 338
#define EXCL 339
#define BIT_XOR 340
#define BIT_OR 341
#define QUES 342
#define COLON 343
#define SEMICOLON 344
#define ELLIPSIS 345
#define COMMA 346
#define HASH 347
#define THEN 348

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 15 "ass5_18CS30034.y"

  int intval;
  char* charval;
  int instr;
  sym* symp;
  symtype* symtp;
  expr* E;
  statement* S;
  Array* A;
  char unaryOperator;

#line 255 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
