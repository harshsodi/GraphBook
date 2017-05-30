DIGIT [0-9]+\.?|[0-9]*\.[0-9]+
SIN sin|SIN
COS cos|COS
TAN tan|TAN
SQR sqrt|SQRT
LOG log|LOG
CEIL ceil
FLOOR floor
PI pi|PI
EXP \(e\)

%option noyywrap

%%

[ ]
{DIGIT} { yylval=atof(yytext); return NUM;}
{SIN} {yylval=atof("1"); return SIN;}
{COS} {yylval=atof("2"); return COS;}
{TAN} {yylval=atof("3"); return TAN;}
{SQR} {yylval=atof("3"); return SQR;}
{LOG} {yylval=atof("3"); return LOG;}
{CEIL} {yylval=atof("3"); return CEIL;}
{FLOOR} {yylval=atof("3"); return FLOOR;}


{EXP} {yylval=atof("2.17"); return EXP ; }


\n|. {return yytext[0];}
