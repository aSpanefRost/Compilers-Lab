/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "ass5_18CS30034.y"

    #include <iostream>
    #include <cstdlib>
    #include <string>
    #include <stdio.h>
    #include <sstream>
    #include "ass5_18CS30034_translator.h"

    extern "C" int yylex();
    void yyerror ( string s );
    extern string Type;
    using namespace std;

#line 84 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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

#line 334 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  60
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1442

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  94
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  65
/* YYNRULES -- Number of rules.  */
#define YYNRULES  212
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  368

#define YYUNDEFTOK  2
#define YYMAXUTOK   348


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   100,   100,   105,   109,   115,   121,   130,   134,   141,
     147,   174,   184,   186,   188,   190,   200,   210,   215,   223,
     227,   234,   237,   244,   251,   284,   286,   291,   294,   297,
     300,   303,   306,   312,   315,   321,   334,   342,   350,   361,
     364,   372,   384,   387,   395,   406,   409,   421,   433,   445,
     460,   463,   478,   497,   500,   517,   520,   537,   540,   557,
     560,   577,   580,   596,   600,   608,   611,   636,   639,   656,
     657,   658,   659,   660,   661,   662,   663,   664,   665,   666,
     670,   673,   677,   682,   683,   687,   688,   689,   690,   691,
     692,   693,   694,   698,   699,   703,   706,   714,   715,   716,
     717,   721,   722,   723,   724,   725,   726,   727,   728,   729,
     730,   731,   732,   733,   738,   739,   740,   741,   746,   747,
     748,   749,   750,   754,   755,   759,   760,   764,   765,   766,
     769,   772,   778,   782,   786,   789,   790,   791,   808,   824,
     825,   826,   827,   828,   840,   841,   857,   867,   870,   871,
     874,   878,   879,   883,   884,   888,   889,   894,   895,   899,
     900,   904,   908,   911,   912,   916,   917,   918,   919,   923,
     927,   928,   932,   933,   937,   938,   941,   945,   948,   951,
     957,   960,   963,   969,   972,   978,   981,   988,   991,   998,
    1001,  1007,  1015,  1024,  1028,  1045,  1056,  1070,  1087,  1090,
    1093,  1096,  1100,  1107,  1108,  1112,  1113,  1117,  1118,  1122,
    1123,  1126,  1127
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "INTEGER_CONST",
  "FLOATING_CONST", "CHARACTER_CONST", "ENUMERATION_CONST",
  "STRING_LITERALS", "AUTO", "ENUM", "RESTRICT", "UNSIGNED", "BREAK",
  "EXTERN", "RETURN", "VOID", "CASE", "FLOAT", "SHORT", "VOLATILE", "CHAR",
  "FOR", "SIGNED", "WHILE", "CONST", "GOTO", "SIZEOF", "BOOL", "CONTINUE",
  "IF", "STATIC", "COMPLEX", "DEFAULT", "INLINE", "STRUCT", "IMAGINARY",
  "DO", "INT", "SWITCH", "DOUBLE", "LONG", "TYPEDEF", "ELSE", "REGISTER",
  "UNION", "LEFT_SQUARE", "RIGHT_SQUARE", "LEFT_ROUND", "RIGHT_ROUND",
  "LEFT_CURLY", "RIGHT_CURLY", "DOT", "LE_OP", "GE_OP", "EQ_OP", "NE_OP",
  "AND_LOGICAL_OP", "OR_LOGICAL_OP", "LT_OP", "GT_OP", "POINTER_OP",
  "INCREMENT_OP", "DECREMENT_OP", "LEFT_LOGICAL_OP", "RIGHT_LOGICAL_OP",
  "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN",
  "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN",
  "EQUALS", "ADD", "SUB", "MUL", "NEG", "BIT_AND", "MOD", "DIV", "EXCL",
  "BIT_XOR", "BIT_OR", "QUES", "COLON", "SEMICOLON", "ELLIPSIS", "COMMA",
  "HASH", "THEN", "$accept", "primary_expression", "CONSTANT",
  "postfix_expression", "argument_expression_list", "unary_expression",
  "unary_operator", "cast_expression", "multiplicative_expression",
  "additive_expression", "shift_expression", "relational_expression",
  "equality_expression", "and_expression", "exclusive_or_expression",
  "inclusive_or_expression", "logical_and_expression",
  "logical_or_expression", "M", "N", "conditional_expression",
  "assignment_expression", "assignment_operator", "expression",
  "constant_expression", "declaration", "declaration_specifiers",
  "init_declarator_list", "init_declarator", "storage_class_specifier",
  "type_specifier", "specifier_qualifier_list", "enum_specifier",
  "enumerator_list", "enumerator", "type_qualifier", "function_specifier",
  "declarator", "direct_declarator", "CT", "pointer",
  "type_qualifier_list", "parameter_type_list", "parameter_list",
  "parameter_declaration", "identifier_list", "type_name", "initializer",
  "initializer_list", "designation", "designator_list", "designator",
  "statement", "labeled_statement", "compound_statement",
  "block_item_list", "block_item", "expression_statement",
  "selection_statement", "iteration_statement", "jump_statement",
  "translation_unit", "external_declaration", "function_definition",
  "declaration_list", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348
};
# endif

#define YYPACT_NINF (-266)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-147)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1248,  -266,  -266,    14,  -266,  -266,  -266,  -266,  -266,  -266,
    -266,  -266,  -266,  -266,  -266,  -266,  -266,  -266,  -266,  -266,
    -266,  -266,  -266,    40,    43,  -266,    11,  1398,  1398,  -266,
    1398,  1398,  1325,    63,    23,  1208,  -266,  -266,   -30,    67,
      88,  -266,  -266,    43,  -266,    25,  -266,  1288,  -266,  -266,
    -266,  -266,   320,  -266,    11,  -266,  1325,   751,   139,    63,
    -266,  -266,    67,    70,     5,  -266,  -266,  -266,  -266,  -266,
      40,   961,   106,  1398,    73,  -266,  -266,  -266,  -266,    69,
     521,  1064,   137,  -266,   184,  1089,   109,   152,   116,  -266,
     160,   631,  -266,  1126,  1126,  -266,  -266,  -266,  -266,  -266,
    -266,  -266,  -266,  -266,   157,   318,  1064,  -266,   -31,    74,
     127,   130,   141,   133,   138,   140,   167,   -20,  -266,  -266,
      49,  -266,  -266,  -266,  -266,   174,  -266,  -266,  -266,  -266,
    -266,   151,  -266,  -266,  -266,   893,  -266,   183,   185,   761,
    -266,  1362,   -13,    24,  1064,  -266,    18,  -266,   941,  -266,
    -266,  -266,   106,   484,  -266,  -266,    58,  -266,  -266,   143,
     549,   186,   144,   631,  -266,  -266,  1064,   484,   484,  1064,
      -4,   664,  -266,   664,   187,   631,  -266,  -266,  1064,  1002,
     232,   240,  -266,  -266,  -266,  -266,  -266,  -266,  -266,  -266,
    -266,  -266,  -266,  -266,  -266,  1064,  -266,  1064,  1064,  1064,
    1064,  1064,  1064,  1064,  1064,  1064,  1064,  1064,  1064,  1064,
    1064,  1064,  1064,   188,    33,  -266,  1064,  -266,   402,   197,
     893,  -266,  -266,  -266,   200,   201,  -266,    40,   202,   158,
    -266,  -266,   247,  -266,    29,  -266,  -266,  -266,  1064,   249,
    -266,    52,   961,    78,  -266,  -266,  -266,  -266,   484,  -266,
    1064,  -266,   205,   164,  -266,  -266,    -2,  -266,  -266,  -266,
    1027,   207,    -7,  -266,     6,  -266,  -266,  -266,  -266,  -266,
    -266,  -266,   -31,   -31,    74,    74,   127,   127,   127,   127,
     130,   130,   141,   133,   138,  -266,  -266,  -266,  -266,  -266,
    -266,   211,  -266,  -266,  -266,  -266,   707,  -266,  -266,   212,
    -266,  -266,   798,  -266,  -266,  -266,  -266,   549,    27,   210,
     214,   237,   484,   941,  -266,   210,  -266,  -266,  1064,  1064,
    1064,  1064,  -266,  -266,  -266,  -266,  -266,  -266,   961,   215,
    -266,  -266,   217,  -266,    57,  -266,   140,   167,   164,  -266,
    -266,  1064,   484,   484,  1064,  -266,   859,   178,   484,   164,
    -266,  -266,    37,  -266,  -266,  -266,   219,   226,   181,  1064,
    -266,  -266,  -266,  -266,   484,   484,  -266,  -266
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   133,    99,     0,   129,   109,    97,   101,   106,   103,
     128,   102,   108,   127,   110,    98,   111,   130,   112,   104,
     107,   105,   100,     0,   147,   206,     0,    85,    87,   113,
      89,    91,     0,   132,     0,     0,   203,   205,   122,     0,
       0,   151,   149,   148,    83,     0,    93,    95,    86,    88,
      90,    92,     0,   211,     0,   210,     0,     0,   146,   131,
       1,   204,     0,   125,     0,   123,   134,   152,   150,    84,
       0,     0,     0,   146,     2,     6,     7,     8,     4,     0,
       0,     0,     0,    63,     0,     0,     0,     0,     0,    63,
       0,     0,   183,     0,     0,    29,    30,    28,    31,    27,
      32,   189,     9,     3,    21,    33,     0,    35,    39,    42,
      45,    50,    53,    55,    57,    59,    61,    65,    67,    80,
       0,   187,   188,   174,   175,    63,   185,   176,   177,   178,
     179,    95,   212,   209,     2,     0,   138,    28,     0,     0,
     159,     0,     0,     0,     0,   118,     0,    94,     0,   162,
      96,   208,     0,     0,   200,   201,     0,    33,    82,     0,
       0,     0,     0,     0,    25,   199,     0,     0,     0,     0,
       0,   115,   161,   117,     0,     0,    22,    23,     0,     0,
       0,     0,    15,    16,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    69,     0,    24,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   190,     0,   184,     0,     0,
       0,   142,   137,   136,    28,     0,   145,   158,     0,   153,
     155,   144,     0,   119,     0,   126,   120,   124,     0,     0,
     165,     0,     0,     0,   170,   207,   180,   202,     0,    63,
       0,   198,     0,    64,   182,    63,     0,     5,   114,   116,
       0,     0,     0,    12,     0,    19,    13,    14,    68,    36,
      38,    37,    40,    41,    43,    44,    48,    49,    46,    47,
      51,    52,    54,    56,    58,    63,    63,    63,    81,   186,
     141,     0,   139,   135,   157,   143,     0,   160,   121,     0,
     173,   163,     0,   166,   169,   171,   181,     0,     0,    26,
       0,     0,     0,     0,    34,     0,    10,    11,     0,     0,
       0,     0,   140,   154,   156,   172,   164,   167,     0,    63,
      63,    63,     0,   193,     0,    20,    60,    62,    64,   168,
      63,     0,     0,     0,     0,    17,     0,     0,     0,    64,
     194,    64,     0,    18,    63,   196,     0,   191,     0,     0,
      63,    63,   195,    66,     0,     0,   197,   192
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -266,  -266,  -266,  -266,  -266,   -32,  -266,   -72,    12,     8,
     -71,    13,    61,    64,    62,   -41,   -43,  -266,   -48,  -109,
     -79,   -56,  -266,   -68,  -133,   -23,     0,  -266,   209,  -266,
     -69,   -42,  -266,   222,  -141,   -18,  -266,   -10,   252,    -1,
      89,   -50,  -266,  -266,    -5,  -266,  -117,   -61,   -24,  -265,
    -266,    50,  -149,  -266,    10,  -266,    76,  -157,  -266,  -266,
    -266,  -266,   260,  -266,   250
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   102,   103,   104,   264,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   161,   213,
     118,   119,   195,   120,   159,    25,    54,    45,    46,    27,
      28,   172,    29,    64,    65,    30,    31,    32,    33,    72,
      34,    43,   228,   229,   230,   142,   174,   240,   241,   242,
     243,   244,   122,   123,   124,   125,   126,   127,   128,   129,
     130,    35,    36,    37,    56
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      26,   138,   158,   249,   246,   237,    41,   139,   214,    53,
     150,   235,   156,    40,     1,   149,    47,    38,   254,   255,
      62,    63,   171,   170,    53,    67,     1,    48,    49,   121,
      50,    51,    63,   132,   196,    26,   231,   328,   -64,    41,
     316,   168,    55,     1,   131,   257,   252,   312,   197,   157,
     132,   198,   199,   164,     4,   317,   145,   141,   261,    23,
     131,   176,   177,    10,    39,   158,   133,   -64,    13,   236,
      63,    23,   152,   173,   157,   233,   330,   218,   232,   219,
     298,   328,   151,   225,   216,   220,   358,   216,    23,   216,
      24,   286,   149,   237,   171,   170,   146,   318,   253,   306,
      44,   256,   171,   301,   171,   299,   171,   170,   345,    57,
     262,    58,   157,    42,    69,   234,    70,    41,   216,    24,
     287,    67,    24,   265,   238,   269,   270,   271,   216,   258,
     239,   259,    68,   276,   277,   278,   279,    66,   215,   268,
     216,   227,   140,   302,   310,   173,   144,   247,   346,   216,
     329,   200,   201,   173,   304,   173,    52,   173,   154,   158,
     288,   153,   245,   333,   291,   157,   157,   157,   157,   157,
     157,   157,   157,   157,   157,   157,   157,   157,   157,   157,
     157,   303,   308,   204,   205,   160,   149,   162,   314,   206,
     207,   202,   203,   350,   351,   121,   208,   209,   165,   355,
     166,   307,    67,   178,   167,   179,   157,   311,   169,   180,
     274,   275,   272,   273,   210,   366,   367,   294,   181,   182,
     183,   280,   281,   211,   -64,   217,   212,    71,   157,   347,
     221,   248,   222,   251,   250,   266,   260,   319,   320,   321,
     356,   327,   357,   267,   290,   285,   149,   292,   293,   296,
     297,   295,   300,   338,   309,   216,   315,   149,   322,   325,
     313,   332,   335,   331,   340,   344,   354,   339,   360,   361,
     362,   282,   149,   349,   284,   283,   352,   337,   336,   147,
     363,   341,   342,   343,   143,   327,    59,   157,   157,   334,
     149,   324,   348,   305,   289,    61,   227,    73,     0,     0,
       0,     0,     0,     0,     0,     0,   359,     0,     0,     0,
       0,     0,   364,   365,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    74,    75,    76,    77,   157,    78,     2,
       3,     4,     5,    79,     6,    80,     7,    81,     8,     9,
      10,    11,    82,    12,    83,    13,    84,    85,    14,    86,
      87,    15,    16,    88,    17,     0,    18,    89,    19,    90,
      20,    21,     0,     0,    22,     0,     0,     0,    91,     0,
      52,    92,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    93,    94,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,     0,     0,    95,    96,    97,
      98,    99,     0,     0,   100,    74,    75,    76,    77,   101,
      78,     2,     3,     4,     5,    79,     6,    80,     7,    81,
       8,     9,    10,    11,    82,    12,    83,    13,    84,    85,
      14,    86,    87,    15,    16,    88,    17,     0,    18,    89,
      19,    90,    20,    21,     0,     0,    22,     0,     0,     0,
      91,     0,    52,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    93,    94,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    95,
      96,    97,    98,    99,     0,     0,   100,    74,    75,    76,
      77,   101,    78,     0,     0,     0,     0,    79,     0,    80,
       0,    81,     0,     0,     0,     0,    82,     0,    83,     0,
      84,    85,     0,    86,    87,     0,     0,    88,     0,     0,
       0,    89,     0,    90,   134,    75,    76,    77,     0,    78,
       0,     0,    91,     0,    52,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    93,    94,    85,     0,
       0,     0,   134,    75,    76,    77,     0,    78,     0,     0,
       0,    95,    96,    97,    98,    99,     0,     0,   100,    91,
       0,     0,     0,   101,     0,     0,    85,     0,     0,     0,
       0,     0,     0,    93,    94,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    91,    95,    96,
      97,    98,    99,     0,     0,   100,     0,     0,     0,     0,
     155,    93,    94,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    95,    96,    97,    98,
      99,     0,     0,   100,   134,    75,    76,    77,   101,    78,
       0,     3,     4,     5,     0,     0,     0,     7,     0,     8,
       9,    10,    11,     0,    12,     0,    13,     0,    85,    14,
       0,     0,     0,    16,     0,     0,     0,    18,     0,    19,
       0,    20,    21,     0,     3,     4,     5,     0,     0,    91,
       7,     0,     8,     9,    10,    11,     0,    12,     0,    13,
       0,     0,    14,    93,    94,     0,    16,     0,     0,     0,
      18,     0,    19,     0,    20,    21,     0,     0,    95,    96,
      97,    98,    99,     0,     0,   100,     2,     3,     4,     5,
       0,     6,     0,     7,     0,     8,     9,    10,    11,     0,
      12,     0,    13,     0,     0,    14,     0,     0,    15,    16,
       0,    17,     0,    18,     0,    19,     0,    20,    21,     0,
       0,    22,     0,     0,   134,    75,    76,    77,     0,    78,
       0,     0,     4,     0,   134,    75,    76,    77,     0,    78,
       0,    10,     4,     0,     0,     0,    13,     0,    85,     0,
       0,    10,   135,     0,     0,     0,    13,     0,    85,     0,
       0,     0,     0,     0,     0,     0,     0,   323,   136,    91,
       0,   134,    75,    76,    77,     0,    78,     0,   223,    91,
       0,     0,     0,    93,    94,     0,     0,     0,     0,     0,
       0,     0,     0,    93,    94,    85,     0,     0,    95,    96,
     137,    98,    99,     0,     0,   100,     0,     0,    95,    96,
     224,    98,    99,     0,   238,   100,    91,     0,   148,   326,
     239,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      93,    94,   134,    75,    76,    77,     0,    78,     0,     0,
       0,     0,     0,     0,     0,    95,    96,    97,    98,    99,
       0,     0,   100,     0,     0,     0,    85,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   134,    75,    76,    77,
       0,    78,     0,     0,     4,   238,     0,    91,     0,   148,
     353,   239,     0,    10,     0,     0,     0,     0,    13,     0,
      85,    93,    94,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    95,    96,    97,    98,
      99,    91,     0,   100,   134,    75,    76,    77,     0,    78,
       0,     0,     0,     0,     0,    93,    94,     0,     0,     0,
       0,     0,     0,     0,   134,    75,    76,    77,    85,    78,
      95,    96,    97,    98,    99,     0,     0,   100,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   238,    85,    91,
       0,   148,     0,   239,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    93,    94,   134,    75,    76,    77,    91,
      78,   148,     0,     0,     0,     0,     0,     0,    95,    96,
      97,    98,    99,    93,    94,   100,     0,     0,     0,    85,
     134,    75,    76,    77,     0,    78,     0,     0,    95,    96,
      97,    98,    99,     0,     0,   100,     0,     0,     0,     0,
      91,   263,     0,     0,    85,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    93,    94,     0,   134,    75,    76,
      77,     0,    78,     0,     0,    91,     0,   313,     0,    95,
      96,    97,    98,    99,     0,     0,   100,     0,     0,    93,
      94,    85,   134,    75,    76,    77,     0,    78,     0,     0,
       0,     0,     0,     0,    95,    96,    97,    98,    99,     0,
       0,   100,    91,     0,     0,     0,    85,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    93,    94,     0,   134,
      75,    76,    77,     0,    78,     0,     0,   163,     0,     0,
       0,    95,    96,    97,    98,    99,     0,     0,   100,     0,
       0,    93,    94,    85,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    95,    96,    97,    98,
      99,     0,     0,   100,   175,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    93,    94,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    95,    96,    97,    98,    99,    60,     0,
     100,     1,     0,     0,     0,     0,     0,     2,     3,     4,
       5,     0,     6,     0,     7,     0,     8,     9,    10,    11,
       0,    12,     0,    13,     0,     0,    14,     0,     0,    15,
      16,     0,    17,     0,    18,     0,    19,     0,    20,    21,
       0,     1,    22,     0,     0,     0,    23,     2,     3,     4,
       5,     0,     6,     0,     7,     0,     8,     9,    10,    11,
       0,    12,     0,    13,     0,     0,    14,     0,     0,    15,
      16,     0,    17,     0,    18,     0,    19,    24,    20,    21,
       0,     0,    22,     0,     0,     0,    23,     2,     3,     4,
       5,     0,     6,     0,     7,     0,     8,     9,    10,    11,
       0,    12,     0,    13,     0,     0,    14,     0,     0,    15,
      16,     0,    17,     0,    18,     0,    19,    24,    20,    21,
       0,     0,    22,     0,     2,     3,     4,     5,  -146,     6,
       0,     7,     0,     8,     9,    10,    11,     0,    12,     0,
      13,     0,     0,    14,     0,     0,    15,    16,     0,    17,
       0,    18,     0,    19,    71,    20,    21,     0,     0,    22,
       0,     2,     3,     4,     5,    52,     6,     0,     7,     0,
       8,     9,    10,    11,     0,    12,     0,    13,     0,     0,
      14,     0,     0,    15,    16,     0,    17,     0,    18,     0,
      19,     0,    20,    21,     0,     0,    22,     2,     3,     4,
       5,   226,     6,     0,     7,     0,     8,     9,    10,    11,
       0,    12,     0,    13,     0,     0,    14,     0,     0,    15,
      16,     0,    17,     0,    18,     0,    19,     0,    20,    21,
       0,     0,    22
};

static const yytype_int16 yycheck[] =
{
       0,    57,    81,   160,   153,   146,    24,    57,   117,    32,
      71,   144,    80,    23,     3,    71,    26,     3,   167,   168,
      50,     3,    91,    91,    47,    43,     3,    27,    28,    52,
      30,    31,     3,    56,   106,    35,    49,   302,    58,    57,
      47,    89,    32,     3,    54,    49,   163,    49,    79,    81,
      73,    82,    83,    85,    11,    49,    51,    58,   175,    48,
      70,    93,    94,    20,    50,   144,    56,    87,    25,    51,
       3,    48,    73,    91,   106,    51,    49,   125,    91,   135,
      51,   346,    72,   139,    91,   135,    49,    91,    48,    91,
      79,    58,   148,   234,   163,   163,    91,    91,   166,   248,
      89,   169,   171,    51,   173,   238,   175,   175,    51,    46,
     178,    48,   144,    24,    89,    91,    91,   135,    91,    79,
      87,   139,    79,   179,    46,   197,   198,   199,    91,   171,
      52,   173,    43,   204,   205,   206,   207,    49,    89,   195,
      91,   141,     3,    91,   253,   163,    76,    89,    91,    91,
     307,    77,    78,   171,    76,   173,    50,   175,    89,   238,
     216,    88,   152,   312,   220,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   242,   250,    53,    54,    48,   242,     3,   260,    59,
      60,    64,    65,   342,   343,   218,    55,    56,    89,   348,
      48,   249,   220,    46,    88,    48,   238,   255,    48,    52,
     202,   203,   200,   201,    81,   364,   365,   227,    61,    62,
      63,   208,   209,    85,    57,    51,    86,    76,   260,   338,
      47,    88,    47,    89,    48,     3,    49,   285,   286,   287,
     349,   302,   351,     3,    47,    57,   302,    47,    47,    91,
       3,    49,     3,   321,    49,    91,    49,   313,    47,    47,
      50,    24,   318,    49,    49,    48,    88,   328,    49,    43,
      89,   210,   328,   341,   212,   211,   344,   320,   319,    70,
     359,   329,   330,   331,    62,   346,    34,   319,   320,   313,
     346,   296,   340,   243,   218,    35,   296,    47,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   354,    -1,    -1,    -1,
      -1,    -1,   360,   361,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,   359,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    37,    38,    39,
      40,    41,    -1,    -1,    44,    -1,    -1,    -1,    48,    -1,
      50,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    63,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    -1,    -1,    77,    78,    79,
      80,    81,    -1,    -1,    84,     3,     4,     5,     6,    89,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    37,
      38,    39,    40,    41,    -1,    -1,    44,    -1,    -1,    -1,
      48,    -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,
      78,    79,    80,    81,    -1,    -1,    84,     3,     4,     5,
       6,    89,     8,    -1,    -1,    -1,    -1,    13,    -1,    15,
      -1,    17,    -1,    -1,    -1,    -1,    22,    -1,    24,    -1,
      26,    27,    -1,    29,    30,    -1,    -1,    33,    -1,    -1,
      -1,    37,    -1,    39,     3,     4,     5,     6,    -1,     8,
      -1,    -1,    48,    -1,    50,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    62,    63,    27,    -1,
      -1,    -1,     3,     4,     5,     6,    -1,     8,    -1,    -1,
      -1,    77,    78,    79,    80,    81,    -1,    -1,    84,    48,
      -1,    -1,    -1,    89,    -1,    -1,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    62,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    77,    78,
      79,    80,    81,    -1,    -1,    84,    -1,    -1,    -1,    -1,
      89,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    77,    78,    79,    80,
      81,    -1,    -1,    84,     3,     4,     5,     6,    89,     8,
      -1,    10,    11,    12,    -1,    -1,    -1,    16,    -1,    18,
      19,    20,    21,    -1,    23,    -1,    25,    -1,    27,    28,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    36,    -1,    38,
      -1,    40,    41,    -1,    10,    11,    12,    -1,    -1,    48,
      16,    -1,    18,    19,    20,    21,    -1,    23,    -1,    25,
      -1,    -1,    28,    62,    63,    -1,    32,    -1,    -1,    -1,
      36,    -1,    38,    -1,    40,    41,    -1,    -1,    77,    78,
      79,    80,    81,    -1,    -1,    84,     9,    10,    11,    12,
      -1,    14,    -1,    16,    -1,    18,    19,    20,    21,    -1,
      23,    -1,    25,    -1,    -1,    28,    -1,    -1,    31,    32,
      -1,    34,    -1,    36,    -1,    38,    -1,    40,    41,    -1,
      -1,    44,    -1,    -1,     3,     4,     5,     6,    -1,     8,
      -1,    -1,    11,    -1,     3,     4,     5,     6,    -1,     8,
      -1,    20,    11,    -1,    -1,    -1,    25,    -1,    27,    -1,
      -1,    20,    31,    -1,    -1,    -1,    25,    -1,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,    47,    48,
      -1,     3,     4,     5,     6,    -1,     8,    -1,    47,    48,
      -1,    -1,    -1,    62,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    62,    63,    27,    -1,    -1,    77,    78,
      79,    80,    81,    -1,    -1,    84,    -1,    -1,    77,    78,
      79,    80,    81,    -1,    46,    84,    48,    -1,    50,    51,
      52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      62,    63,     3,     4,     5,     6,    -1,     8,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    77,    78,    79,    80,    81,
      -1,    -1,    84,    -1,    -1,    -1,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
      -1,     8,    -1,    -1,    11,    46,    -1,    48,    -1,    50,
      51,    52,    -1,    20,    -1,    -1,    -1,    -1,    25,    -1,
      27,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    77,    78,    79,    80,
      81,    48,    -1,    84,     3,     4,     5,     6,    -1,     8,
      -1,    -1,    -1,    -1,    -1,    62,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,    27,     8,
      77,    78,    79,    80,    81,    -1,    -1,    84,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    27,    48,
      -1,    50,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    62,    63,     3,     4,     5,     6,    48,
       8,    50,    -1,    -1,    -1,    -1,    -1,    -1,    77,    78,
      79,    80,    81,    62,    63,    84,    -1,    -1,    -1,    27,
       3,     4,     5,     6,    -1,     8,    -1,    -1,    77,    78,
      79,    80,    81,    -1,    -1,    84,    -1,    -1,    -1,    -1,
      48,    49,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    63,    -1,     3,     4,     5,
       6,    -1,     8,    -1,    -1,    48,    -1,    50,    -1,    77,
      78,    79,    80,    81,    -1,    -1,    84,    -1,    -1,    62,
      63,    27,     3,     4,     5,     6,    -1,     8,    -1,    -1,
      -1,    -1,    -1,    -1,    77,    78,    79,    80,    81,    -1,
      -1,    84,    48,    -1,    -1,    -1,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    62,    63,    -1,     3,
       4,     5,     6,    -1,     8,    -1,    -1,    48,    -1,    -1,
      -1,    77,    78,    79,    80,    81,    -1,    -1,    84,    -1,
      -1,    62,    63,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    77,    78,    79,    80,
      81,    -1,    -1,    84,    48,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    77,    78,    79,    80,    81,     0,    -1,
      84,     3,    -1,    -1,    -1,    -1,    -1,     9,    10,    11,
      12,    -1,    14,    -1,    16,    -1,    18,    19,    20,    21,
      -1,    23,    -1,    25,    -1,    -1,    28,    -1,    -1,    31,
      32,    -1,    34,    -1,    36,    -1,    38,    -1,    40,    41,
      -1,     3,    44,    -1,    -1,    -1,    48,     9,    10,    11,
      12,    -1,    14,    -1,    16,    -1,    18,    19,    20,    21,
      -1,    23,    -1,    25,    -1,    -1,    28,    -1,    -1,    31,
      32,    -1,    34,    -1,    36,    -1,    38,    79,    40,    41,
      -1,    -1,    44,    -1,    -1,    -1,    48,     9,    10,    11,
      12,    -1,    14,    -1,    16,    -1,    18,    19,    20,    21,
      -1,    23,    -1,    25,    -1,    -1,    28,    -1,    -1,    31,
      32,    -1,    34,    -1,    36,    -1,    38,    79,    40,    41,
      -1,    -1,    44,    -1,     9,    10,    11,    12,    50,    14,
      -1,    16,    -1,    18,    19,    20,    21,    -1,    23,    -1,
      25,    -1,    -1,    28,    -1,    -1,    31,    32,    -1,    34,
      -1,    36,    -1,    38,    76,    40,    41,    -1,    -1,    44,
      -1,     9,    10,    11,    12,    50,    14,    -1,    16,    -1,
      18,    19,    20,    21,    -1,    23,    -1,    25,    -1,    -1,
      28,    -1,    -1,    31,    32,    -1,    34,    -1,    36,    -1,
      38,    -1,    40,    41,    -1,    -1,    44,     9,    10,    11,
      12,    49,    14,    -1,    16,    -1,    18,    19,    20,    21,
      -1,    23,    -1,    25,    -1,    -1,    28,    -1,    -1,    31,
      32,    -1,    34,    -1,    36,    -1,    38,    -1,    40,    41,
      -1,    -1,    44
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     9,    10,    11,    12,    14,    16,    18,    19,
      20,    21,    23,    25,    28,    31,    32,    34,    36,    38,
      40,    41,    44,    48,    79,   119,   120,   123,   124,   126,
     129,   130,   131,   132,   134,   155,   156,   157,     3,    50,
     131,   129,   134,   135,    89,   121,   122,   131,   120,   120,
     120,   120,    50,   119,   120,   148,   158,    46,    48,   132,
       0,   156,    50,     3,   127,   128,    49,   129,   134,    89,
      91,    76,   133,   158,     3,     4,     5,     6,     8,    13,
      15,    17,    22,    24,    26,    27,    29,    30,    33,    37,
      39,    48,    51,    62,    63,    77,    78,    79,    80,    81,
      84,    89,    95,    96,    97,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   114,   115,
     117,   119,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   131,   119,   148,     3,    31,    47,    79,   115,   135,
       3,   133,   139,   127,    76,    51,    91,   122,    50,   115,
     141,   148,   133,    88,    89,    89,   117,    99,   114,   118,
      48,   112,     3,    48,    99,    89,    48,    88,   112,    48,
     117,   124,   125,   129,   140,    48,    99,    99,    46,    48,
      52,    61,    62,    63,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,   116,   101,    79,    82,    83,
      77,    78,    64,    65,    53,    54,    59,    60,    55,    56,
      81,    85,    86,   113,   113,    89,    91,    51,   112,   115,
     135,    47,    47,    47,    79,   115,    49,   120,   136,   137,
     138,    49,    91,    51,    91,   118,    51,   128,    46,    52,
     141,   142,   143,   144,   145,   148,   146,    89,    88,   151,
      48,    89,   140,   117,   146,   146,   117,    49,   125,   125,
      49,   140,   117,    49,    98,   115,     3,     3,   115,   101,
     101,   101,   102,   102,   103,   103,   104,   104,   104,   104,
     105,   105,   106,   107,   108,    57,    58,    87,   115,   150,
      47,   115,    47,    47,   131,    49,    91,     3,    51,   118,
       3,    51,    91,   141,    76,   145,   146,   112,   117,    49,
     113,   112,    49,    50,   101,    49,    47,    49,    91,   112,
     112,   112,    47,    90,   138,    47,    51,   141,   143,   151,
      49,    49,    24,   146,   142,   115,   109,   110,   117,   141,
      49,   112,   112,   112,    48,    51,    91,   113,   112,   117,
     146,   146,   117,    51,    88,   146,   113,   113,    49,   112,
      49,    43,    89,   114,   112,   112,   146,   146
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    94,    95,    95,    95,    95,    96,    96,    96,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    98,
      98,    99,    99,    99,    99,    99,    99,   100,   100,   100,
     100,   100,   100,   101,   101,   102,   102,   102,   102,   103,
     103,   103,   104,   104,   104,   105,   105,   105,   105,   105,
     106,   106,   106,   107,   107,   108,   108,   109,   109,   110,
     110,   111,   111,   112,   113,   114,   114,   115,   115,   116,
     116,   116,   116,   116,   116,   116,   116,   116,   116,   116,
     117,   117,   118,   119,   119,   120,   120,   120,   120,   120,
     120,   120,   120,   121,   121,   122,   122,   123,   123,   123,
     123,   124,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   124,   124,   125,   125,   125,   125,   126,   126,
     126,   126,   126,   127,   127,   128,   128,   129,   129,   129,
     130,   131,   131,   132,   132,   132,   132,   132,   132,   132,
     132,   132,   132,   132,   132,   132,   133,   134,   134,   134,
     134,   135,   135,   136,   136,   137,   137,   138,   138,   139,
     139,   140,   141,   141,   141,   142,   142,   142,   142,   143,
     144,   144,   145,   145,   146,   146,   146,   146,   146,   146,
     147,   147,   147,   148,   148,   149,   149,   150,   150,   151,
     151,   152,   152,   152,   153,   153,   153,   153,   154,   154,
     154,   154,   154,   155,   155,   156,   156,   157,   157,   157,
     157,   158,   158
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     1,     1,     1,
       4,     4,     3,     3,     3,     2,     2,     6,     7,     1,
       3,     1,     2,     2,     2,     2,     4,     1,     1,     1,
       1,     1,     1,     1,     4,     1,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     1,     3,     1,     3,     1,
       5,     1,     5,     0,     0,     1,     9,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     2,     3,     1,     2,     1,     2,     1,
       2,     1,     2,     1,     3,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     2,     1,     4,     5,
       5,     6,     2,     1,     3,     1,     3,     1,     1,     1,
       1,     2,     1,     1,     3,     5,     4,     4,     3,     5,
       6,     5,     4,     5,     4,     4,     0,     1,     2,     2,
       3,     1,     2,     1,     3,     1,     3,     2,     1,     1,
       3,     1,     1,     3,     4,     1,     2,     3,     4,     2,
       1,     2,     3,     2,     1,     1,     1,     1,     1,     1,
       3,     4,     3,     2,     3,     1,     3,     1,     1,     1,
       2,     8,    11,     5,     7,     9,     8,    11,     3,     2,
       2,     2,     3,     1,     2,     1,     1,     5,     4,     3,
       2,     1,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2:
#line 100 "ass5_18CS30034.y"
                 {
        (yyval.E) = new expr();
        (yyval.E)->loc = (yyvsp[0].symp);
        (yyval.E)->type = "NONBOOL";
    }
#line 2023 "y.tab.c"
    break;

  case 3:
#line 105 "ass5_18CS30034.y"
               {
        (yyval.E) = new expr();
        (yyval.E)->loc = (yyvsp[0].symp);
    }
#line 2032 "y.tab.c"
    break;

  case 4:
#line 109 "ass5_18CS30034.y"
                      {
        (yyval.E) = new expr();
        symtype* tmp = new symtype("PTR");
        (yyval.E)->loc = gentemp(tmp, (yyvsp[0].charval));
        (yyval.E)->loc->type->ptr = new symtype("CHAR");
    }
#line 2043 "y.tab.c"
    break;

  case 5:
#line 115 "ass5_18CS30034.y"
                                        {
    (yyval.E) = (yyvsp[-1].E);
    }
#line 2051 "y.tab.c"
    break;

  case 6:
#line 121 "ass5_18CS30034.y"
                   {
        stringstream strs;
        strs << (yyvsp[0].intval);
        string temp_str = strs.str();
        char* intStr = (char*) temp_str.c_str();
        string str = string(intStr);
        (yyval.symp) = gentemp(new symtype("INTEGER"), str);
        emit("EQUAL", (yyval.symp)->name, (yyvsp[0].intval));
    }
#line 2065 "y.tab.c"
    break;

  case 7:
#line 130 "ass5_18CS30034.y"
                    {
        (yyval.symp) = gentemp(new symtype("DOUBLE"), string((yyvsp[0].charval)));
        emit("EQUAL", (yyval.symp)->name, string((yyvsp[0].charval)));
    }
#line 2074 "y.tab.c"
    break;

  case 8:
#line 134 "ass5_18CS30034.y"
                     {
        (yyval.symp) = gentemp(new symtype("CHAR"),(yyvsp[0].charval));
        emit("EQUALCHAR", (yyval.symp)->name, string((yyvsp[0].charval)));
    }
#line 2083 "y.tab.c"
    break;

  case 9:
#line 141 "ass5_18CS30034.y"
                         {
        (yyval.A) = new Array ();
        (yyval.A)->array = (yyvsp[0].E)->loc;
        (yyval.A)->loc = (yyval.A)->array;
        (yyval.A)->type = (yyvsp[0].E)->loc->type;
    }
#line 2094 "y.tab.c"
    break;

  case 10:
#line 147 "ass5_18CS30034.y"
                                                             {
        (yyval.A) = new Array();

        (yyval.A)->array = (yyvsp[-3].A)->loc;                    // copy the base
        (yyval.A)->type = (yyvsp[-3].A)->type->ptr;               // type = type of element
        (yyval.A)->loc = gentemp(new symtype("INTEGER"));      // store computed address

        // New address =(if only) already computed + $3 * new width
        if ((yyvsp[-3].A)->cat=="ARR") {                   // if already computed
            sym* t = gentemp(new symtype("INTEGER"));
            stringstream strs;
                strs <<size_type((yyval.A)->type);
                string temp_str = strs.str();
                char* intStr = (char*) temp_str.c_str();
            string str = string(intStr);
            emit ("MULT", t->name, (yyvsp[-1].E)->loc->name, str);
            emit ("ADD", (yyval.A)->loc->name, (yyvsp[-3].A)->loc->name, t->name);
        } else {
            stringstream strs;
                strs <<size_type((yyval.A)->type);
                string temp_str = strs.str();
                char* intStr1 = (char*) temp_str.c_str();
            string str1 = string(intStr1);
            emit("MULT", (yyval.A)->loc->name, (yyvsp[-1].E)->loc->name, str1);
        }
        (yyval.A)->cat = "ARR";
    }
#line 2126 "y.tab.c"
    break;

  case 11:
#line 174 "ass5_18CS30034.y"
                                                                         {
        (yyval.A) = new Array();
        (yyval.A)->array = gentemp((yyvsp[-3].A)->type);
        stringstream strs;
            strs <<(yyvsp[-1].intval);
            string temp_str = strs.str();
            char* intStr = (char*) temp_str.c_str();
        string str = string(intStr);
        emit("CALL", (yyval.A)->array->name, (yyvsp[-3].A)->array->name, str);
    }
#line 2141 "y.tab.c"
    break;

  case 12:
#line 184 "ass5_18CS30034.y"
                                                {
    }
#line 2148 "y.tab.c"
    break;

  case 13:
#line 186 "ass5_18CS30034.y"
                                        {
    }
#line 2155 "y.tab.c"
    break;

  case 14:
#line 188 "ass5_18CS30034.y"
                                               {
    }
#line 2162 "y.tab.c"
    break;

  case 15:
#line 190 "ass5_18CS30034.y"
                                      {
        (yyval.A) = new Array();

        // copy $1 to $$
        (yyval.A)->array = gentemp((yyvsp[-1].A)->array->type);
        emit ("EQUAL", (yyval.A)->array->name, (yyvsp[-1].A)->array->name);

        // Increment $1
        emit ("ADD", (yyvsp[-1].A)->array->name, (yyvsp[-1].A)->array->name, "1");
    }
#line 2177 "y.tab.c"
    break;

  case 16:
#line 200 "ass5_18CS30034.y"
                                      {
        (yyval.A) = new Array();

        // copy $1 to $$
        (yyval.A)->array = gentemp((yyvsp[-1].A)->array->type);
        emit ("EQUAL", (yyval.A)->array->name, (yyvsp[-1].A)->array->name);

        // Decrement $1
        emit ("SUB", (yyvsp[-1].A)->array->name, (yyvsp[-1].A)->array->name, "1");
    }
#line 2192 "y.tab.c"
    break;

  case 17:
#line 210 "ass5_18CS30034.y"
                                                                               {
        (yyval.A) = new Array();
        (yyval.A)->array = gentemp(new symtype("INTEGER"));
        (yyval.A)->loc = gentemp(new symtype("INTEGER"));
    }
#line 2202 "y.tab.c"
    break;

  case 18:
#line 215 "ass5_18CS30034.y"
                                                                                     {
        (yyval.A) = new Array();
        (yyval.A)->array = gentemp(new symtype("INTEGER"));
        (yyval.A)->loc = gentemp(new symtype("INTEGER"));
    }
#line 2212 "y.tab.c"
    break;

  case 19:
#line 223 "ass5_18CS30034.y"
                            {
        emit ("PARAM", (yyvsp[0].E)->loc->name);
        (yyval.intval) = 1;
    }
#line 2221 "y.tab.c"
    break;

  case 20:
#line 227 "ass5_18CS30034.y"
                                                           {
        emit ("PARAM", (yyvsp[0].E)->loc->name);
        (yyval.intval) = (yyvsp[-2].intval)+1;
    }
#line 2230 "y.tab.c"
    break;

  case 21:
#line 234 "ass5_18CS30034.y"
                         {
        (yyval.A) = (yyvsp[0].A);
    }
#line 2238 "y.tab.c"
    break;

  case 22:
#line 237 "ass5_18CS30034.y"
                                    {
        // Increment $2
        emit ("ADD", (yyvsp[0].A)->array->name, (yyvsp[0].A)->array->name, "1");

        // Use the same value as $2
        (yyval.A) = (yyvsp[0].A);
    }
#line 2250 "y.tab.c"
    break;

  case 23:
#line 244 "ass5_18CS30034.y"
                                    {
        // Decrement $2
        emit ("SUB", (yyvsp[0].A)->array->name, (yyvsp[0].A)->array->name, "1");

        // Use the same value as $2
        (yyval.A) = (yyvsp[0].A);
    }
#line 2262 "y.tab.c"
    break;

  case 24:
#line 251 "ass5_18CS30034.y"
                                     {
        (yyval.A) = new Array();
        switch ((yyvsp[-1].unaryOperator)) {
            case '&':
                (yyval.A)->array = gentemp((new symtype("PTR")));
                (yyval.A)->array->type->ptr = (yyvsp[0].A)->array->type;
                emit ("ADDRESS", (yyval.A)->array->name, (yyvsp[0].A)->array->name);
                break;
            case '*':
                (yyval.A)->cat = "PTR";
                (yyval.A)->loc = gentemp ((yyvsp[0].A)->array->type->ptr);
                emit ("PTRR", (yyval.A)->loc->name, (yyvsp[0].A)->array->name);
                (yyval.A)->array = (yyvsp[0].A)->array;
                break;
            case '+':
                (yyval.A) = (yyvsp[0].A);
                break;
            case '-':
                (yyval.A)->array = gentemp(new symtype((yyvsp[0].A)->array->type->type));
                emit ("UMINUS", (yyval.A)->array->name, (yyvsp[0].A)->array->name);
                break;
            case '~':
                (yyval.A)->array = gentemp(new symtype((yyvsp[0].A)->array->type->type));
                emit ("BNOT", (yyval.A)->array->name, (yyvsp[0].A)->array->name);
                break;
            case '!':
                (yyval.A)->array = gentemp(new symtype((yyvsp[0].A)->array->type->type));
                emit ("LNOT", (yyval.A)->array->name, (yyvsp[0].A)->array->name);
                break;
            default:
                break;
        }
    }
#line 2300 "y.tab.c"
    break;

  case 25:
#line 284 "ass5_18CS30034.y"
                              {
    }
#line 2307 "y.tab.c"
    break;

  case 26:
#line 286 "ass5_18CS30034.y"
                                              {
    }
#line 2314 "y.tab.c"
    break;

  case 27:
#line 291 "ass5_18CS30034.y"
              {
        (yyval.unaryOperator) = '&';
    }
#line 2322 "y.tab.c"
    break;

  case 28:
#line 294 "ass5_18CS30034.y"
          {
        (yyval.unaryOperator) = '*';
    }
#line 2330 "y.tab.c"
    break;

  case 29:
#line 297 "ass5_18CS30034.y"
          {
        (yyval.unaryOperator) = '+';
    }
#line 2338 "y.tab.c"
    break;

  case 30:
#line 300 "ass5_18CS30034.y"
          {
        (yyval.unaryOperator) = '-';
    }
#line 2346 "y.tab.c"
    break;

  case 31:
#line 303 "ass5_18CS30034.y"
          {
        (yyval.unaryOperator) = '~';
    }
#line 2354 "y.tab.c"
    break;

  case 32:
#line 306 "ass5_18CS30034.y"
           {
        (yyval.unaryOperator) = '!';
    }
#line 2362 "y.tab.c"
    break;

  case 33:
#line 312 "ass5_18CS30034.y"
                       {
        (yyval.A)=(yyvsp[0].A);
    }
#line 2370 "y.tab.c"
    break;

  case 34:
#line 315 "ass5_18CS30034.y"
                                                       {
        (yyval.A)=(yyvsp[0].A);
    }
#line 2378 "y.tab.c"
    break;

  case 35:
#line 321 "ass5_18CS30034.y"
                      {
        (yyval.E) = new expr();
        if ((yyvsp[0].A)->cat=="ARR") { // Array
            (yyval.E)->loc = gentemp((yyvsp[0].A)->loc->type);
            emit("ARRR", (yyval.E)->loc->name, (yyvsp[0].A)->array->name, (yyvsp[0].A)->loc->name);
        }
        else if ((yyvsp[0].A)->cat=="PTR") { // Pointer
            (yyval.E)->loc = (yyvsp[0].A)->loc;
        }
        else { // otherwise
            (yyval.E)->loc = (yyvsp[0].A)->array;
        }
    }
#line 2396 "y.tab.c"
    break;

  case 36:
#line 334 "ass5_18CS30034.y"
                                                    {
        if (typecheck ((yyvsp[-2].E)->loc, (yyvsp[0].A)->array) ) {
            (yyval.E) = new expr();
            (yyval.E)->loc = gentemp(new symtype((yyvsp[-2].E)->loc->type->type));
            emit ("MULT", (yyval.E)->loc->name, (yyvsp[-2].E)->loc->name, (yyvsp[0].A)->array->name);
        }
        else cout << "Type Error"<< endl;
    }
#line 2409 "y.tab.c"
    break;

  case 37:
#line 342 "ass5_18CS30034.y"
                                                    {
        if (typecheck ((yyvsp[-2].E)->loc, (yyvsp[0].A)->array) ) {
            (yyval.E) = new expr();
            (yyval.E)->loc = gentemp(new symtype((yyvsp[-2].E)->loc->type->type));
            emit ("DIVIDE", (yyval.E)->loc->name, (yyvsp[-2].E)->loc->name, (yyvsp[0].A)->array->name);
        }
        else cout << "Type Error"<< endl;
    }
#line 2422 "y.tab.c"
    break;

  case 38:
#line 350 "ass5_18CS30034.y"
                                                    {
        if (typecheck ((yyvsp[-2].E)->loc, (yyvsp[0].A)->array) ) {
            (yyval.E) = new expr();
            (yyval.E)->loc = gentemp(new symtype((yyvsp[-2].E)->loc->type->type));
            emit ("MODOP", (yyval.E)->loc->name, (yyvsp[-2].E)->loc->name, (yyvsp[0].A)->array->name);
        }
        else cout << "Type Error"<< endl;
    }
#line 2435 "y.tab.c"
    break;

  case 39:
#line 361 "ass5_18CS30034.y"
                                {
        (yyval.E)=(yyvsp[0].E);
    }
#line 2443 "y.tab.c"
    break;

  case 40:
#line 364 "ass5_18CS30034.y"
                                                        {
        if (typecheck ((yyvsp[-2].E)->loc, (yyvsp[0].E)->loc) ) {
            (yyval.E) = new expr();
            (yyval.E)->loc = gentemp(new symtype((yyvsp[-2].E)->loc->type->type));
            emit ("ADD", (yyval.E)->loc->name, (yyvsp[-2].E)->loc->name, (yyvsp[0].E)->loc->name);
        }
        else cout << "Type Error"<< endl;
    }
#line 2456 "y.tab.c"
    break;

  case 41:
#line 372 "ass5_18CS30034.y"
                                                        {
            if (typecheck ((yyvsp[-2].E)->loc, (yyvsp[0].E)->loc) ) {
            (yyval.E) = new expr();
            (yyval.E)->loc = gentemp(new symtype((yyvsp[-2].E)->loc->type->type));
            emit ("SUB", (yyval.E)->loc->name, (yyvsp[-2].E)->loc->name, (yyvsp[0].E)->loc->name);
        }
        else cout << "Type Error"<< endl;

    }
#line 2470 "y.tab.c"
    break;

  case 42:
#line 384 "ass5_18CS30034.y"
                          {
        (yyval.E)=(yyvsp[0].E);
    }
#line 2478 "y.tab.c"
    break;

  case 43:
#line 387 "ass5_18CS30034.y"
                                                           {
        if ((yyvsp[0].E)->loc->type->type == "INTEGER") {
            (yyval.E) = new expr();
            (yyval.E)->loc = gentemp (new symtype("INTEGER"));
            emit ("LEFTOP", (yyval.E)->loc->name, (yyvsp[-2].E)->loc->name, (yyvsp[0].E)->loc->name);
        }
        else cout << "Type Error"<< endl;
    }
#line 2491 "y.tab.c"
    break;

  case 44:
#line 395 "ass5_18CS30034.y"
                                                            {
        if ((yyvsp[0].E)->loc->type->type == "INTEGER") {
            (yyval.E) = new expr();
            (yyval.E)->loc = gentemp (new symtype("INTEGER"));
            emit ("RIGHTOP", (yyval.E)->loc->name, (yyvsp[-2].E)->loc->name, (yyvsp[0].E)->loc->name);
        }
        else cout << "Type Error"<< endl;
    }
#line 2504 "y.tab.c"
    break;

  case 45:
#line 406 "ass5_18CS30034.y"
                       {
        (yyval.E)=(yyvsp[0].E);
    }
#line 2512 "y.tab.c"
    break;

  case 46:
#line 409 "ass5_18CS30034.y"
                                                   {
        if (typecheck ((yyvsp[-2].E)->loc, (yyvsp[0].E)->loc) ) {
            (yyval.E) = new expr();
            (yyval.E)->type = "BOOL";

            (yyval.E)->truelist = makelist (nextinstr());
            (yyval.E)->falselist = makelist (nextinstr()+1);
            emit("LT", "", (yyvsp[-2].E)->loc->name, (yyvsp[0].E)->loc->name);
            emit ("GOTOOP", "");
        }
        else cout << "Type Error"<< endl;
    }
#line 2529 "y.tab.c"
    break;

  case 47:
#line 421 "ass5_18CS30034.y"
                                                   {
        if (typecheck ((yyvsp[-2].E)->loc, (yyvsp[0].E)->loc) ) {
            (yyval.E) = new expr();
            (yyval.E)->type = "BOOL";

            (yyval.E)->truelist = makelist (nextinstr());
            (yyval.E)->falselist = makelist (nextinstr()+1);
            emit("GT", "", (yyvsp[-2].E)->loc->name, (yyvsp[0].E)->loc->name);
            emit ("GOTOOP", "");
        }
        else cout << "Type Error"<< endl;
    }
#line 2546 "y.tab.c"
    break;

  case 48:
#line 433 "ass5_18CS30034.y"
                                                   {
        if (typecheck ((yyvsp[-2].E)->loc, (yyvsp[0].E)->loc) ) {
            (yyval.E) = new expr();
            (yyval.E)->type = "BOOL";

            (yyval.E)->truelist = makelist (nextinstr());
            (yyval.E)->falselist = makelist (nextinstr()+1);
            emit("LE", "", (yyvsp[-2].E)->loc->name, (yyvsp[0].E)->loc->name);
            emit ("GOTOOP", "");
        }
        else cout << "Type Error"<< endl;
    }
#line 2563 "y.tab.c"
    break;

  case 49:
#line 445 "ass5_18CS30034.y"
                                                   {
        if (typecheck ((yyvsp[-2].E)->loc, (yyvsp[0].E)->loc) ) {
            (yyval.E) = new expr();
            (yyval.E)->type = "BOOL";

            (yyval.E)->truelist = makelist (nextinstr());
            (yyval.E)->falselist = makelist (nextinstr()+1);
            emit("GE", "", (yyvsp[-2].E)->loc->name, (yyvsp[0].E)->loc->name);
            emit ("GOTOOP", "");
        }
        else cout << "Type Error"<< endl;
    }
#line 2580 "y.tab.c"
    break;

  case 50:
#line 460 "ass5_18CS30034.y"
                            {
        (yyval.E)=(yyvsp[0].E);
    }
#line 2588 "y.tab.c"
    break;

  case 51:
#line 463 "ass5_18CS30034.y"
                                                      {
        if (typecheck ((yyvsp[-2].E)->loc, (yyvsp[0].E)->loc)) {
            convertBool2Int ((yyvsp[-2].E));
            convertBool2Int ((yyvsp[0].E));

            (yyval.E) = new expr();
            (yyval.E)->type = "BOOL";

            (yyval.E)->truelist = makelist (nextinstr());
            (yyval.E)->falselist = makelist (nextinstr()+1);
            emit("EQOP", "", (yyvsp[-2].E)->loc->name, (yyvsp[0].E)->loc->name);
            emit ("GOTOOP", "");
        }
        else cout << "Type Error"<< endl;
    }
#line 2608 "y.tab.c"
    break;

  case 52:
#line 478 "ass5_18CS30034.y"
                                                      {
        if (typecheck ((yyvsp[-2].E)->loc, (yyvsp[0].E)->loc) ) {
            // If any is bool get its value
            convertBool2Int ((yyvsp[-2].E));
            convertBool2Int ((yyvsp[0].E));

            (yyval.E) = new expr();
            (yyval.E)->type = "BOOL";

            (yyval.E)->truelist = makelist (nextinstr());
            (yyval.E)->falselist = makelist (nextinstr()+1);
            emit("NEOP", "", (yyvsp[-2].E)->loc->name, (yyvsp[0].E)->loc->name);
            emit ("GOTOOP", "");
        }
        else cout << "Type Error"<< endl;
    }
#line 2629 "y.tab.c"
    break;

  case 53:
#line 497 "ass5_18CS30034.y"
                          {
        (yyval.E)=(yyvsp[0].E);
    }
#line 2637 "y.tab.c"
    break;

  case 54:
#line 500 "ass5_18CS30034.y"
                                                 {
        if (typecheck ((yyvsp[-2].E)->loc, (yyvsp[0].E)->loc) ) {
            // If any is bool get its value
            convertBool2Int ((yyvsp[-2].E));
            convertBool2Int ((yyvsp[0].E));

            (yyval.E) = new expr();
            (yyval.E)->type = "NONBOOL";

            (yyval.E)->loc = gentemp (new symtype("INTEGER"));
            emit ("BAND", (yyval.E)->loc->name, (yyvsp[-2].E)->loc->name, (yyvsp[0].E)->loc->name);
        }
        else cout << "Type Error"<< endl;
    }
#line 2656 "y.tab.c"
    break;

  case 55:
#line 517 "ass5_18CS30034.y"
                     {
        (yyval.E)=(yyvsp[0].E);
    }
#line 2664 "y.tab.c"
    break;

  case 56:
#line 520 "ass5_18CS30034.y"
                                                     {
        if (typecheck ((yyvsp[-2].E)->loc, (yyvsp[0].E)->loc) ) {
            // If any is bool get its value
            convertBool2Int ((yyvsp[-2].E));
            convertBool2Int ((yyvsp[0].E));

            (yyval.E) = new expr();
            (yyval.E)->type = "NONBOOL";

            (yyval.E)->loc = gentemp (new symtype("INTEGER"));
            emit ("XOR", (yyval.E)->loc->name, (yyvsp[-2].E)->loc->name, (yyvsp[0].E)->loc->name);
        }
        else cout << "Type Error"<< endl;
    }
#line 2683 "y.tab.c"
    break;

  case 57:
#line 537 "ass5_18CS30034.y"
                              {
        (yyval.E)=(yyvsp[0].E);
    }
#line 2691 "y.tab.c"
    break;

  case 58:
#line 540 "ass5_18CS30034.y"
                                                             {
        if (typecheck ((yyvsp[-2].E)->loc, (yyvsp[0].E)->loc) ) {
            // If any is bool get its value
            convertBool2Int ((yyvsp[-2].E));
            convertBool2Int ((yyvsp[0].E));

            (yyval.E) = new expr();
            (yyval.E)->type = "NONBOOL";

            (yyval.E)->loc = gentemp (new symtype("INTEGER"));
            emit ("INOR", (yyval.E)->loc->name, (yyvsp[-2].E)->loc->name, (yyvsp[0].E)->loc->name);
        }
        else cout << "Type Error"<< endl;
    }
#line 2710 "y.tab.c"
    break;

  case 59:
#line 557 "ass5_18CS30034.y"
                              {
        (yyval.E)=(yyvsp[0].E);
    }
#line 2718 "y.tab.c"
    break;

  case 60:
#line 560 "ass5_18CS30034.y"
                                                                         {
        convertInt2Bool((yyvsp[0].E));

        // convert $1 to bool and backpatch using N
        backpatch((yyvsp[-3].S)->nextlist, nextinstr());
        convertInt2Bool((yyvsp[-4].E));

        (yyval.E) = new expr();
        (yyval.E)->type = "BOOL";

        backpatch((yyvsp[-4].E)->truelist, (yyvsp[-1].instr));
        (yyval.E)->truelist = (yyvsp[0].E)->truelist;
        (yyval.E)->falselist = merge ((yyvsp[-4].E)->falselist, (yyvsp[0].E)->falselist);
    }
#line 2737 "y.tab.c"
    break;

  case 61:
#line 577 "ass5_18CS30034.y"
                             {
        (yyval.E)=(yyvsp[0].E);
    }
#line 2745 "y.tab.c"
    break;

  case 62:
#line 580 "ass5_18CS30034.y"
                                                                     {
        convertInt2Bool((yyvsp[0].E));

        // convert $1 to bool and backpatch using N
        backpatch((yyvsp[-3].S)->nextlist, nextinstr());
        convertInt2Bool((yyvsp[-4].E));

        (yyval.E) = new expr();
        (yyval.E)->type = "BOOL";

        backpatch ((yyval.E)->falselist, (yyvsp[-1].instr));
        (yyval.E)->truelist = merge ((yyvsp[-4].E)->truelist, (yyvsp[0].E)->truelist);
        (yyval.E)->falselist = (yyvsp[0].E)->falselist;
    }
#line 2764 "y.tab.c"
    break;

  case 63:
#line 596 "ass5_18CS30034.y"
            {   // To store the address of the next instruction
        (yyval.instr) = nextinstr();
    }
#line 2772 "y.tab.c"
    break;

  case 64:
#line 600 "ass5_18CS30034.y"
             {  // gaurd against fallthrough by emitting a goto
        (yyval.S)  = new statement();
        (yyval.S)->nextlist = makelist(nextinstr());
        emit ("GOTOOP","");
    }
#line 2782 "y.tab.c"
    break;

  case 65:
#line 608 "ass5_18CS30034.y"
                            {
        (yyval.E)=(yyvsp[0].E);
    }
#line 2790 "y.tab.c"
    break;

  case 66:
#line 611 "ass5_18CS30034.y"
                                                                                 {
        (yyval.E)->loc = gentemp((yyvsp[-4].E)->loc->type);
        (yyval.E)->loc->update((yyvsp[-4].E)->loc->type);

        emit("EQUAL", (yyval.E)->loc->name, (yyvsp[0].E)->loc->name);
        list<int> l = makelist(nextinstr());
        emit ("GOTOOP", "");


        backpatch((yyvsp[-3].S)->nextlist, nextinstr());
        emit("EQUAL", (yyval.E)->loc->name, (yyvsp[-4].E)->loc->name);
        list<int> m = makelist(nextinstr());
        l = merge (l, m);
        emit ("GOTOOP", "");


        backpatch((yyvsp[-7].S)->nextlist, nextinstr());
        convertInt2Bool((yyvsp[-8].E));
        backpatch ((yyvsp[-8].E)->truelist, (yyvsp[-5].instr));
        backpatch ((yyvsp[-8].E)->falselist, (yyvsp[-1].instr));
        backpatch (l, nextinstr());
    }
#line 2817 "y.tab.c"
    break;

  case 67:
#line 636 "ass5_18CS30034.y"
                             {
        (yyval.E) = (yyvsp[0].E);
    }
#line 2825 "y.tab.c"
    break;

  case 68:
#line 639 "ass5_18CS30034.y"
                                                                 {
        if((yyvsp[-2].A)->cat=="ARR") {
            (yyvsp[0].E)->loc = conv((yyvsp[0].E)->loc, (yyvsp[-2].A)->type->type);
            emit("ARRL", (yyvsp[-2].A)->array->name, (yyvsp[-2].A)->array->name, (yyvsp[0].E)->loc->name);
            }
        else if((yyvsp[-2].A)->cat=="PTR") {
            emit("PTRL", (yyvsp[-2].A)->array->name, (yyvsp[0].E)->loc->name);
            }
        else{
            (yyvsp[0].E)->loc = conv((yyvsp[0].E)->loc, (yyvsp[-2].A)->array->type->type);
            emit("EQUAL", (yyvsp[-2].A)->array->name, (yyvsp[0].E)->loc->name);
            }
        (yyval.E) = (yyvsp[0].E);
    }
#line 2844 "y.tab.c"
    break;

  case 69:
#line 656 "ass5_18CS30034.y"
             {}
#line 2850 "y.tab.c"
    break;

  case 70:
#line 657 "ass5_18CS30034.y"
                  {}
#line 2856 "y.tab.c"
    break;

  case 71:
#line 658 "ass5_18CS30034.y"
                 {}
#line 2862 "y.tab.c"
    break;

  case 72:
#line 659 "ass5_18CS30034.y"
                 {}
#line 2868 "y.tab.c"
    break;

  case 73:
#line 660 "ass5_18CS30034.y"
                 {}
#line 2874 "y.tab.c"
    break;

  case 74:
#line 661 "ass5_18CS30034.y"
                 {}
#line 2880 "y.tab.c"
    break;

  case 75:
#line 662 "ass5_18CS30034.y"
                  {}
#line 2886 "y.tab.c"
    break;

  case 76:
#line 663 "ass5_18CS30034.y"
                   {}
#line 2892 "y.tab.c"
    break;

  case 77:
#line 664 "ass5_18CS30034.y"
                 {}
#line 2898 "y.tab.c"
    break;

  case 78:
#line 665 "ass5_18CS30034.y"
                 {}
#line 2904 "y.tab.c"
    break;

  case 79:
#line 666 "ass5_18CS30034.y"
                {}
#line 2910 "y.tab.c"
    break;

  case 80:
#line 670 "ass5_18CS30034.y"
                            {
        (yyval.E) = (yyvsp[0].E);
    }
#line 2918 "y.tab.c"
    break;

  case 81:
#line 673 "ass5_18CS30034.y"
                                             {}
#line 2924 "y.tab.c"
    break;

  case 82:
#line 678 "ass5_18CS30034.y"
    {}
#line 2930 "y.tab.c"
    break;

  case 83:
#line 682 "ass5_18CS30034.y"
                                        {}
#line 2936 "y.tab.c"
    break;

  case 84:
#line 683 "ass5_18CS30034.y"
                                                            {}
#line 2942 "y.tab.c"
    break;

  case 85:
#line 687 "ass5_18CS30034.y"
                              {}
#line 2948 "y.tab.c"
    break;

  case 86:
#line 688 "ass5_18CS30034.y"
                                                     {}
#line 2954 "y.tab.c"
    break;

  case 87:
#line 689 "ass5_18CS30034.y"
                     {}
#line 2960 "y.tab.c"
    break;

  case 88:
#line 690 "ass5_18CS30034.y"
                                            {}
#line 2966 "y.tab.c"
    break;

  case 89:
#line 691 "ass5_18CS30034.y"
                     {}
#line 2972 "y.tab.c"
    break;

  case 90:
#line 692 "ass5_18CS30034.y"
                                            {}
#line 2978 "y.tab.c"
    break;

  case 91:
#line 693 "ass5_18CS30034.y"
                          {}
#line 2984 "y.tab.c"
    break;

  case 92:
#line 694 "ass5_18CS30034.y"
                                                {}
#line 2990 "y.tab.c"
    break;

  case 93:
#line 698 "ass5_18CS30034.y"
                      {}
#line 2996 "y.tab.c"
    break;

  case 94:
#line 699 "ass5_18CS30034.y"
                                                 {}
#line 3002 "y.tab.c"
    break;

  case 95:
#line 703 "ass5_18CS30034.y"
                 {
        (yyval.symp)=(yyvsp[0].symp);
    }
#line 3010 "y.tab.c"
    break;

  case 96:
#line 706 "ass5_18CS30034.y"
                                    {
        if ((yyvsp[0].symp)->initial_value!="")
            (yyvsp[-2].symp)->initial_value=(yyvsp[0].symp)->initial_value;
        emit ("EQUAL", (yyvsp[-2].symp)->name, (yyvsp[0].symp)->name);
    }
#line 3020 "y.tab.c"
    break;

  case 97:
#line 714 "ass5_18CS30034.y"
             {}
#line 3026 "y.tab.c"
    break;

  case 98:
#line 715 "ass5_18CS30034.y"
             {}
#line 3032 "y.tab.c"
    break;

  case 99:
#line 716 "ass5_18CS30034.y"
           {}
#line 3038 "y.tab.c"
    break;

  case 100:
#line 717 "ass5_18CS30034.y"
               {}
#line 3044 "y.tab.c"
    break;

  case 101:
#line 721 "ass5_18CS30034.y"
           {Type="VOID";}
#line 3050 "y.tab.c"
    break;

  case 102:
#line 722 "ass5_18CS30034.y"
           {Type="CHAR";}
#line 3056 "y.tab.c"
    break;

  case 104:
#line 724 "ass5_18CS30034.y"
          {Type="INTEGER";}
#line 3062 "y.tab.c"
    break;

  case 107:
#line 727 "ass5_18CS30034.y"
             {Type="DOUBLE";}
#line 3068 "y.tab.c"
    break;

  case 114:
#line 738 "ass5_18CS30034.y"
                                              {}
#line 3074 "y.tab.c"
    break;

  case 115:
#line 739 "ass5_18CS30034.y"
                     {}
#line 3080 "y.tab.c"
    break;

  case 116:
#line 740 "ass5_18CS30034.y"
                                              {}
#line 3086 "y.tab.c"
    break;

  case 117:
#line 741 "ass5_18CS30034.y"
                     {}
#line 3092 "y.tab.c"
    break;

  case 118:
#line 746 "ass5_18CS30034.y"
                                                  {}
#line 3098 "y.tab.c"
    break;

  case 119:
#line 747 "ass5_18CS30034.y"
                                                             {}
#line 3104 "y.tab.c"
    break;

  case 120:
#line 748 "ass5_18CS30034.y"
                                                        {}
#line 3110 "y.tab.c"
    break;

  case 121:
#line 749 "ass5_18CS30034.y"
                                                                   {}
#line 3116 "y.tab.c"
    break;

  case 122:
#line 750 "ass5_18CS30034.y"
                      {}
#line 3122 "y.tab.c"
    break;

  case 123:
#line 754 "ass5_18CS30034.y"
                 {}
#line 3128 "y.tab.c"
    break;

  case 124:
#line 755 "ass5_18CS30034.y"
                                       {}
#line 3134 "y.tab.c"
    break;

  case 125:
#line 759 "ass5_18CS30034.y"
                 {}
#line 3140 "y.tab.c"
    break;

  case 126:
#line 760 "ass5_18CS30034.y"
                                            {}
#line 3146 "y.tab.c"
    break;

  case 127:
#line 764 "ass5_18CS30034.y"
            {}
#line 3152 "y.tab.c"
    break;

  case 128:
#line 765 "ass5_18CS30034.y"
               {}
#line 3158 "y.tab.c"
    break;

  case 129:
#line 766 "ass5_18CS30034.y"
               {}
#line 3164 "y.tab.c"
    break;

  case 130:
#line 769 "ass5_18CS30034.y"
             {}
#line 3170 "y.tab.c"
    break;

  case 131:
#line 772 "ass5_18CS30034.y"
                                {
        symtype * t = (yyvsp[-1].symtp);
        while (t->ptr !=NULL) t = t->ptr;
        t->ptr = (yyvsp[0].symp)->type;
        (yyval.symp) = (yyvsp[0].symp)->update((yyvsp[-1].symtp));
    }
#line 3181 "y.tab.c"
    break;

  case 132:
#line 778 "ass5_18CS30034.y"
                        {}
#line 3187 "y.tab.c"
    break;

  case 133:
#line 782 "ass5_18CS30034.y"
                 {
        (yyval.symp) = (yyvsp[0].symp)->update(new symtype(Type));
        currentSymbol = (yyval.symp);
    }
#line 3196 "y.tab.c"
    break;

  case 134:
#line 786 "ass5_18CS30034.y"
                                        {
        (yyval.symp) = (yyvsp[-1].symp);
    }
#line 3204 "y.tab.c"
    break;

  case 135:
#line 789 "ass5_18CS30034.y"
                                                                                           {}
#line 3210 "y.tab.c"
    break;

  case 136:
#line 790 "ass5_18CS30034.y"
                                                                     {}
#line 3216 "y.tab.c"
    break;

  case 137:
#line 791 "ass5_18CS30034.y"
                                                                       {
        symtype * t = (yyvsp[-3].symp) -> type;
        symtype * prev = NULL;
        while (t->type == "ARR") {
            prev = t;
            t = t->ptr;
        }
        if (prev==NULL) {
            int temp = atoi((yyvsp[-1].E)->loc->initial_value.c_str());
            symtype* s = new symtype("ARR", (yyvsp[-3].symp)->type, temp);
            (yyval.symp) = (yyvsp[-3].symp)->update(s);
        }
        else {
            prev->ptr =  new symtype("ARR", t, atoi((yyvsp[-1].E)->loc->initial_value.c_str()));
            (yyval.symp) = (yyvsp[-3].symp)->update ((yyvsp[-3].symp)->type);
        }
    }
#line 3238 "y.tab.c"
    break;

  case 138:
#line 808 "ass5_18CS30034.y"
                                                 {
        symtype * t = (yyvsp[-2].symp) -> type;
        symtype * prev = NULL;
        while (t->type == "ARR") {
            prev = t;
            t = t->ptr;
        }
        if (prev==NULL) {
            symtype* s = new symtype("ARR", (yyvsp[-2].symp)->type, 0);
            (yyval.symp) = (yyvsp[-2].symp)->update(s);
        }
        else {
            prev->ptr =  new symtype("ARR", t, 0);
            (yyval.symp) = (yyvsp[-2].symp)->update ((yyvsp[-2].symp)->type);
        }
    }
#line 3259 "y.tab.c"
    break;

  case 139:
#line 824 "ass5_18CS30034.y"
                                                                         {}
#line 3265 "y.tab.c"
    break;

  case 140:
#line 825 "ass5_18CS30034.y"
                                                                                                  {}
#line 3271 "y.tab.c"
    break;

  case 141:
#line 826 "ass5_18CS30034.y"
                                                                              {}
#line 3277 "y.tab.c"
    break;

  case 142:
#line 827 "ass5_18CS30034.y"
                                                     {}
#line 3283 "y.tab.c"
    break;

  case 143:
#line 828 "ass5_18CS30034.y"
                                                                      {
        table->name = (yyvsp[-4].symp)->name;

        if ((yyvsp[-4].symp)->type->type !="VOID") {
            sym *s = table->lookup("return");
            s->update((yyvsp[-4].symp)->type);
        }
        (yyvsp[-4].symp)->nested=table;
        table->parent = globalTable;
        changeTable (globalTable);              // Come back to globalsymbol table
        currentSymbol = (yyval.symp);
    }
#line 3300 "y.tab.c"
    break;

  case 144:
#line 840 "ass5_18CS30034.y"
                                                               {}
#line 3306 "y.tab.c"
    break;

  case 145:
#line 841 "ass5_18CS30034.y"
                                                  {
        table->name = (yyvsp[-3].symp)->name;

        if ((yyvsp[-3].symp)->type->type !="VOID") {
            sym *s = table->lookup("return");
            s->update((yyvsp[-3].symp)->type);
        }
        (yyvsp[-3].symp)->nested=table;

        table->parent = globalTable;
        changeTable (globalTable);              // Come back to globalsymbol table
        currentSymbol = (yyval.symp);
    }
#line 3324 "y.tab.c"
    break;

  case 146:
#line 857 "ass5_18CS30034.y"
             {                                                          // Used for changing to symbol table for a function
        if (currentSymbol->nested==NULL) changeTable(new symtable("")); // Function symbol table doesn't already exist
        else {
            changeTable (currentSymbol ->nested);                       // Function symbol table already exists
            emit ("LABEL", table->name);
        }
    }
#line 3336 "y.tab.c"
    break;

  case 147:
#line 867 "ass5_18CS30034.y"
          {
        (yyval.symtp) = new symtype("PTR");
    }
#line 3344 "y.tab.c"
    break;

  case 148:
#line 870 "ass5_18CS30034.y"
                              {}
#line 3350 "y.tab.c"
    break;

  case 149:
#line 871 "ass5_18CS30034.y"
                  {
        (yyval.symtp) = new symtype("PTR", (yyvsp[0].symtp));
    }
#line 3358 "y.tab.c"
    break;

  case 150:
#line 874 "ass5_18CS30034.y"
                                      {}
#line 3364 "y.tab.c"
    break;

  case 151:
#line 878 "ass5_18CS30034.y"
                     {}
#line 3370 "y.tab.c"
    break;

  case 152:
#line 879 "ass5_18CS30034.y"
                                         {}
#line 3376 "y.tab.c"
    break;

  case 153:
#line 883 "ass5_18CS30034.y"
                     {}
#line 3382 "y.tab.c"
    break;

  case 154:
#line 884 "ass5_18CS30034.y"
                                    {}
#line 3388 "y.tab.c"
    break;

  case 155:
#line 888 "ass5_18CS30034.y"
                            {}
#line 3394 "y.tab.c"
    break;

  case 156:
#line 889 "ass5_18CS30034.y"
                                                 {}
#line 3400 "y.tab.c"
    break;

  case 157:
#line 894 "ass5_18CS30034.y"
                                        {}
#line 3406 "y.tab.c"
    break;

  case 158:
#line 895 "ass5_18CS30034.y"
                             {}
#line 3412 "y.tab.c"
    break;

  case 159:
#line 899 "ass5_18CS30034.y"
                 {}
#line 3418 "y.tab.c"
    break;

  case 160:
#line 900 "ass5_18CS30034.y"
                                       {}
#line 3424 "y.tab.c"
    break;

  case 161:
#line 904 "ass5_18CS30034.y"
                               {}
#line 3430 "y.tab.c"
    break;

  case 162:
#line 908 "ass5_18CS30034.y"
                            {
        (yyval.symp) = (yyvsp[0].E)->loc;
    }
#line 3438 "y.tab.c"
    break;

  case 163:
#line 911 "ass5_18CS30034.y"
                                              {}
#line 3444 "y.tab.c"
    break;

  case 164:
#line 912 "ass5_18CS30034.y"
                                                    {}
#line 3450 "y.tab.c"
    break;

  case 165:
#line 916 "ass5_18CS30034.y"
                  {}
#line 3456 "y.tab.c"
    break;

  case 166:
#line 917 "ass5_18CS30034.y"
                              {}
#line 3462 "y.tab.c"
    break;

  case 167:
#line 918 "ass5_18CS30034.y"
                                         {}
#line 3468 "y.tab.c"
    break;

  case 168:
#line 919 "ass5_18CS30034.y"
                                                     {}
#line 3474 "y.tab.c"
    break;

  case 169:
#line 923 "ass5_18CS30034.y"
                             {}
#line 3480 "y.tab.c"
    break;

  case 170:
#line 927 "ass5_18CS30034.y"
                 {}
#line 3486 "y.tab.c"
    break;

  case 171:
#line 928 "ass5_18CS30034.y"
                                 {}
#line 3492 "y.tab.c"
    break;

  case 172:
#line 932 "ass5_18CS30034.y"
                                                   {}
#line 3498 "y.tab.c"
    break;

  case 173:
#line 933 "ass5_18CS30034.y"
                     {}
#line 3504 "y.tab.c"
    break;

  case 174:
#line 937 "ass5_18CS30034.y"
                        {}
#line 3510 "y.tab.c"
    break;

  case 175:
#line 938 "ass5_18CS30034.y"
                         {
        (yyval.S)=(yyvsp[0].S);
    }
#line 3518 "y.tab.c"
    break;

  case 176:
#line 941 "ass5_18CS30034.y"
                           {
        (yyval.S) = new statement();
        (yyval.S)->nextlist = (yyvsp[0].E)->nextlist;
    }
#line 3527 "y.tab.c"
    break;

  case 177:
#line 945 "ass5_18CS30034.y"
                          {
        (yyval.S)=(yyvsp[0].S);
    }
#line 3535 "y.tab.c"
    break;

  case 178:
#line 948 "ass5_18CS30034.y"
                          {
        (yyval.S)=(yyvsp[0].S);
    }
#line 3543 "y.tab.c"
    break;

  case 179:
#line 951 "ass5_18CS30034.y"
                     {
        (yyval.S)=(yyvsp[0].S);
    }
#line 3551 "y.tab.c"
    break;

  case 180:
#line 957 "ass5_18CS30034.y"
                                 {
        (yyval.S) = new statement();
    }
#line 3559 "y.tab.c"
    break;

  case 181:
#line 960 "ass5_18CS30034.y"
                                               {
        (yyval.S) = new statement();
    }
#line 3567 "y.tab.c"
    break;

  case 182:
#line 963 "ass5_18CS30034.y"
                              {
        (yyval.S) = new statement();
    }
#line 3575 "y.tab.c"
    break;

  case 183:
#line 969 "ass5_18CS30034.y"
                             {
        (yyval.S) = new statement();
    }
#line 3583 "y.tab.c"
    break;

  case 184:
#line 972 "ass5_18CS30034.y"
                                             {
        (yyval.S) = (yyvsp[-1].S);
    }
#line 3591 "y.tab.c"
    break;

  case 185:
#line 978 "ass5_18CS30034.y"
                 {
        (yyval.S)=(yyvsp[0].S);
    }
#line 3599 "y.tab.c"
    break;

  case 186:
#line 981 "ass5_18CS30034.y"
                                   {
        (yyval.S)=(yyvsp[0].S);
        backpatch ((yyvsp[-2].S)->nextlist, (yyvsp[-1].instr));
    }
#line 3608 "y.tab.c"
    break;

  case 187:
#line 988 "ass5_18CS30034.y"
                  {
        (yyval.S) = new statement();
    }
#line 3616 "y.tab.c"
    break;

  case 188:
#line 991 "ass5_18CS30034.y"
                {
        (yyval.S) = (yyvsp[0].S);
    }
#line 3624 "y.tab.c"
    break;

  case 189:
#line 998 "ass5_18CS30034.y"
                {
        (yyval.E) = new expr();
    }
#line 3632 "y.tab.c"
    break;

  case 190:
#line 1001 "ass5_18CS30034.y"
                           {
        (yyval.E)=(yyvsp[-1].E);
    }
#line 3640 "y.tab.c"
    break;

  case 191:
#line 1007 "ass5_18CS30034.y"
                                                                     {
        backpatch ((yyvsp[-4].S)->nextlist, nextinstr());
        convertInt2Bool((yyvsp[-5].E));
        (yyval.S) = new statement();
        backpatch ((yyvsp[-5].E)->truelist, (yyvsp[-2].instr));
        list<int> temp = merge ((yyvsp[-5].E)->falselist, (yyvsp[-1].S)->nextlist);
        (yyval.S)->nextlist = merge ((yyvsp[0].S)->nextlist, temp);
    }
#line 3653 "y.tab.c"
    break;

  case 192:
#line 1015 "ass5_18CS30034.y"
                                                                            {
        backpatch ((yyvsp[-7].S)->nextlist, nextinstr());
        convertInt2Bool((yyvsp[-8].E));
        (yyval.S) = new statement();
        backpatch ((yyvsp[-8].E)->truelist, (yyvsp[-5].instr));
        backpatch ((yyvsp[-8].E)->falselist, (yyvsp[-1].instr));
        list<int> temp = merge ((yyvsp[-4].S)->nextlist, (yyvsp[-3].S)->nextlist);
        (yyval.S)->nextlist = merge ((yyvsp[0].S)->nextlist,temp);
    }
#line 3667 "y.tab.c"
    break;

  case 193:
#line 1024 "ass5_18CS30034.y"
                                                         {}
#line 3673 "y.tab.c"
    break;

  case 194:
#line 1028 "ass5_18CS30034.y"
                                                            {
        (yyval.S) = new statement();
        convertInt2Bool((yyvsp[-3].E));
        // M1 to go back to boolean again
        // M2 to go to statement if the boolean is true
        backpatch((yyvsp[0].S)->nextlist, (yyvsp[-5].instr));
        backpatch((yyvsp[-3].E)->truelist, (yyvsp[-1].instr));
        (yyval.S)->nextlist = (yyvsp[-3].E)->falselist;
        // Emit to prevent fallthrough
        stringstream strs;
            strs << (yyvsp[-5].instr);
            string temp_str = strs.str();
            char* intStr = (char*) temp_str.c_str();
        string str = string(intStr);

        emit ("GOTOOP", str);
    }
#line 3695 "y.tab.c"
    break;

  case 195:
#line 1045 "ass5_18CS30034.y"
                                                                         {
        (yyval.S) = new statement();
        convertInt2Bool((yyvsp[-2].E));
        // M1 to go back to statement if expression is true
        // M2 to go to check expression if statement is complete
        backpatch ((yyvsp[-2].E)->truelist, (yyvsp[-7].instr));
        backpatch ((yyvsp[-6].S)->nextlist, (yyvsp[-5].instr));

        // Some bug in the next statement
        (yyval.S)->nextlist = (yyvsp[-2].E)->falselist;
    }
#line 3711 "y.tab.c"
    break;

  case 196:
#line 1056 "ass5_18CS30034.y"
                                                                                         {
        (yyval.S) = new statement();
        convertInt2Bool((yyvsp[-3].E));
        backpatch ((yyvsp[-3].E)->truelist, (yyvsp[-1].instr));
        backpatch ((yyvsp[0].S)->nextlist, (yyvsp[-4].instr));
        stringstream strs;
            strs << (yyvsp[-4].instr);
            string temp_str = strs.str();
            char* intStr = (char*) temp_str.c_str();
        string str = string(intStr);

        emit ("GOTOOP", str);
        (yyval.S)->nextlist = (yyvsp[-3].E)->falselist;
    }
#line 3730 "y.tab.c"
    break;

  case 197:
#line 1070 "ass5_18CS30034.y"
                                                                                                        {
        (yyval.S) = new statement();
        convertInt2Bool((yyvsp[-6].E));
        backpatch ((yyvsp[-6].E)->truelist, (yyvsp[-1].instr));
        backpatch ((yyvsp[-3].S)->nextlist, (yyvsp[-7].instr));
        backpatch ((yyvsp[0].S)->nextlist, (yyvsp[-5].instr));
        stringstream strs;
            strs << (yyvsp[-5].instr);
            string temp_str = strs.str();
            char* intStr = (char*) temp_str.c_str();
        string str = string(intStr);
        emit ("GOTOOP", str);
        (yyval.S)->nextlist = (yyvsp[-6].E)->falselist;
    }
#line 3749 "y.tab.c"
    break;

  case 198:
#line 1087 "ass5_18CS30034.y"
                                {
        (yyval.S) = new statement();
    }
#line 3757 "y.tab.c"
    break;

  case 199:
#line 1090 "ass5_18CS30034.y"
                         {
        (yyval.S) = new statement();
    }
#line 3765 "y.tab.c"
    break;

  case 200:
#line 1093 "ass5_18CS30034.y"
                      {
        (yyval.S) = new statement();
    }
#line 3773 "y.tab.c"
    break;

  case 201:
#line 1096 "ass5_18CS30034.y"
                       {
        (yyval.S) = new statement();
        emit("RETURN","");
    }
#line 3782 "y.tab.c"
    break;

  case 202:
#line 1100 "ass5_18CS30034.y"
                                  {
        (yyval.S) = new statement();
        emit("RETURN",(yyvsp[-1].E)->loc->name);
    }
#line 3791 "y.tab.c"
    break;

  case 203:
#line 1107 "ass5_18CS30034.y"
                            {}
#line 3797 "y.tab.c"
    break;

  case 204:
#line 1108 "ass5_18CS30034.y"
                                            {}
#line 3803 "y.tab.c"
    break;

  case 205:
#line 1112 "ass5_18CS30034.y"
                          {}
#line 3809 "y.tab.c"
    break;

  case 206:
#line 1113 "ass5_18CS30034.y"
                  {}
#line 3815 "y.tab.c"
    break;

  case 207:
#line 1117 "ass5_18CS30034.y"
                                                                                {}
#line 3821 "y.tab.c"
    break;

  case 208:
#line 1118 "ass5_18CS30034.y"
                                                              {
        table->parent = globalTable;
        changeTable (globalTable);
    }
#line 3830 "y.tab.c"
    break;

  case 209:
#line 1122 "ass5_18CS30034.y"
                                                     {}
#line 3836 "y.tab.c"
    break;

  case 210:
#line 1123 "ass5_18CS30034.y"
                                    {}
#line 3842 "y.tab.c"
    break;

  case 211:
#line 1126 "ass5_18CS30034.y"
                  {}
#line 3848 "y.tab.c"
    break;

  case 212:
#line 1127 "ass5_18CS30034.y"
                                   {}
#line 3854 "y.tab.c"
    break;


#line 3858 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 1130 "ass5_18CS30034.y"

void yyerror(string s) {
    cout<<s<<endl;
}
