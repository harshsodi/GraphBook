%{
#include<ctype.h>
#include<stdio.h>
#include<math.h>
#define YYSTYPE double
#define PI 3.141592

int eflag = 0;
int unary_minus_flag = 0; 

%}
%token NUM
%token SIN
%token COS
%token TAN
%token SQR
%token UMINUS
%token EXP
%token LOG
%token CEIL
%token FLOOR

%left '+' '-'
%left  '/' '*'
%right UMIN

%%

S : S E '\n' { printf("%g\n", $2); }
| S '\n'
|
| error '\n' { yyerror("Error: Enter once more…\n" );yyerrok; }
;
E : E '+' E { $$ = $1 + $3; }
| E'-'E { $$=$1-$3; }
| E'*'E { $$=$1*$3; }
| E'/'E { $$=$1/$3; }
| E'^'E { $$=pow($1,$3); }
| E'('E')' { $$=$1*$3; }
| NUM F {$$ = $1*$2;}
| '('E')' F {$$ = $2*$4;}
| F
| '('E')' { $$=$2; }
| '-'E %prec UMINUS { $$= -$2; }
| EXP
| NUM
;

F :| SIN'('E')' { $$=sin($3); }
| COS'('E')' { $$=cos($3); }
| TAN'('E')' { $$=tan($3); }
| SQR'('E')' { $$=sqrt($3); }
| LOG'('E')' { $$=log($3); }
| CEIL'('E')' { $$=ceil($3); }
| FLOOR'('E')' { $$=floor($3); }


/*A : A '+' B { $$ = $1 + $3; } | A'-'B { $$ = $1 - $3; } | B ;

B : B '*' C { $$ = $1 * $3; } | C ;

C : C '/' D { $$ = $1 / $3; } | D;

D : D '^' E { $$ = pow($1, $3); } | E ;

E :  NUM E {$$=$1*$2;} 
| SIN '(' A ')' {$$ = sin($3) ;}
| COS '(' A ')' {$$ = cos($3) ;}
| TAN '(' A ')' {$$ = tan($3) ;}
| SQR '(' A ')' {$$ = sqrt($3) ;}
| X
;

X : F '(' A ')' {$$ = $1 * $3 ;} | F;

F : '(' A ')' { $$ = $2 ; } | G;

G : NUM { $$ = $1;};
*/

%%

#include "lex.yy.c"

int main()
{
yyparse();
}


yyerror (char * s)
{
printf ("% s \n", s);
exit (1);
}