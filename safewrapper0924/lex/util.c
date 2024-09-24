#include "globals.h"
#include "util.h"
#include "symbol.h"
#include "y.tab.h"

/* Procedure printToken prints a token 
 * and its lexeme to the listing file
 */
void printToken( int token, const char* tokenString )
{ switch (token)
  { 
 
//define CHARACTER 272
//define STRING 273
    case IF:
    case ELSE:
    case WHILE:
    case RETURN:
    case K_INT:
    case K_FLOAT:
    case K_CHAR:
    case FOR:
    case SWITCH:
    case CASE:
    case CONTINUE:
    case BREAK:
    case DEFAULT:
      printf("reserved word: %s\n",tokenString);
      break;
    case 61: printf("=\n"); break;
    case AND: printf("&&\n"); break;
    case OR: printf("||\n"); break;
    case EQ: printf("==\n"); break;
    case NE: printf("!=\n"); break;
    case GE: printf(">=\n"); break;
    case LE: printf("<=\n"); break;
    case 40: printf("(\n"); break;
    case 41: printf(")\n"); break;
    case 42: printf("*\n"); break;
    case 43: printf("+\n"); break;
    case 44: printf(",\n"); break;
    case 45: printf("-\n"); break;
    case 47: printf("/\n"); break;
    case 123: printf("{\n"); break;
    case 124: printf("}\n"); break;
    case 125: printf("}\n"); break;
    case 59: printf(";\n"); break;
    case EOF_TOKEN: printf("EOF_LAST_TOKEN\n"); break;
    case INTEGER:
    case FLOAT:
      printf(
          "NUM, val= %s\n",tokenString);
      break;
    case IDENTIFIER:
      printf(
          "ID, name= %s\n",tokenString);
      break;
    case ERROR:
      printf(
          "ERROR: %s\n",tokenString);
      break;
    default: /* should never happen */
      printf("Unknown token: %d, belonged yytext is eqaul to %s\n",token, tokenString);
  }
}
/*
 *
 
define K_INT 257
define K_FLOAT 258
define K_CHAR 259
define FOR 260
define WHILE 261
define ELSE 262
define IF 263
define SWITCH 264
define CASE 265
define RETURN 266
define CONTINUE 267
define BREAK 268
define DEFAULT 269
define INTEGER 270
define FLOAT 271
define CHARACTER 272
define STRING 273
define IDENTIFIER 274
define AND 275
define OR 276
define GE 277
define LE 278
define EQ 279
define NE 280





define EOF_TOKEN 281
define ERROR 282
ifdef YYSTYPE
undef  YYSTYPE_IS_DECLARED
define YYSTYPE_IS_DECLARED 1
endif
ifndef YYSTYPE_IS_DECLARED
define YYSTYPE_IS_DECLARED 1
typedef union YYSTYPE {
    int iValue;
    float fValue;
    char* sValue;
    IdStruct id;
    char cValue;
} YYSTYPE;
#endif 
extern YYSTYPE yylval;

#endif
 * */
