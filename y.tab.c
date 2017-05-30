#ifndef lint
static const char yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93";
#endif

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20140101

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)

#define YYPREFIX "yy"

#define YYPURE 0

#line 2 "test.y"
#include<ctype.h>
#include<stdio.h>
#include<math.h>
#define YYSTYPE double
#define PI 3.141592

int eflag = 0;
int unary_minus_flag = 0; 

#line 29 "y.tab.c"

#ifndef YYSTYPE
typedef int YYSTYPE;
#endif

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#define NUM 257
#define SIN 258
#define COS 259
#define TAN 260
#define SQR 261
#define UMINUS 262
#define EXP 263
#define LOG 264
#define CEIL 265
#define FLOOR 266
#define UMIN 267
#define YYERRCODE 256
static const short yylhs[] = {                           -1,
    0,    0,    0,    0,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    1,    2,    2,    2,
    2,    2,    2,    2,    2,
};
static const short yylen[] = {                            2,
    3,    2,    0,    2,    3,    3,    3,    3,    3,    4,
    2,    4,    1,    3,    2,    1,    1,    0,    4,    4,
    4,    4,    4,    4,    4,
};
static const short yydefred[] = {                         0,
    0,    0,    4,    0,    0,    0,    0,    0,   16,    0,
    0,    0,    0,    2,    0,    0,   13,   11,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    1,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,   19,   20,
   21,   22,   23,   24,   25,   12,   10,
};
static const short yydgoto[] = {                          2,
   16,   17,
};
static const short yysindex[] = {                      -250,
    2,  -10,    0,  -51,  -30,  -23,  -15,   -9,    0,   -8,
   -6,   -1,  -38,    0,  -38,   23,    0,    0,  -38,  -38,
  -38,  -38,  -38,  -38,  -38,   95,  -27,  -38,  -38,  -38,
  -38,    0,  -38,  -38,  -19,   31,   39,   51,   59,   67,
   79,  -51,   76,   76,  -11,  -11,   95,   87,    0,    0,
    0,    0,    0,    0,    0,    0,    0,
};
static const short yyrindex[] = {                         1,
    0,  -39,    0,    9,    0,    0,    0,    0,    0,    0,
    0,    0,   -5,    0,  105,    0,    0,    0,  105,  105,
  105,  105,  105,  105,  105,  103,    0,   -5,   -5,   -5,
   -5,    0,   -5,  105,    0,    0,    0,    0,    0,    0,
    0,   17,  126,  141,  121,  133,  131,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,
};
static const short yygindex[] = {                         0,
  172,    5,
};
#define YYTABLESIZE 267
static const short yytable[] = {                         14,
    3,   15,   18,   18,   18,    1,   13,   18,   18,   19,
    3,    3,   34,   42,   31,   28,   20,   29,   17,   30,
   34,   49,   31,   28,   21,   29,   14,   30,   34,   15,
   22,   23,   32,   24,   13,   18,   18,   18,   25,    0,
    3,   18,    3,    3,    0,    3,   56,    3,   17,   17,
   17,   17,    0,   17,   18,   17,   14,   14,   14,   14,
    0,   14,   34,   14,   31,   28,   33,   29,    0,   30,
   34,   50,   31,   28,   33,   29,    0,   30,   34,   51,
   31,   28,   33,   29,    0,   30,    0,    0,   18,    0,
   34,   52,   31,   28,    3,   29,    0,   30,   34,   53,
   31,   28,   17,   29,    0,   30,   34,   54,   31,   28,
   14,   29,   15,   30,    0,   34,   33,   31,   34,   55,
   31,   28,   30,   29,   33,   30,   34,   57,   31,   28,
    8,   29,   33,   30,   34,    5,   31,   28,    0,   29,
    9,   30,    7,   15,   33,   18,   18,   18,    0,    0,
    6,   18,   33,    0,    0,    0,    0,    0,    0,    0,
   33,    8,    8,    8,    0,    8,    5,    8,    5,   33,
    5,    9,   33,    7,    7,    7,    0,    7,    0,    7,
   33,    6,    0,    6,   26,    6,   27,    0,   33,    0,
   35,   36,   37,   38,   39,   40,   41,    0,   18,   43,
   44,   45,   46,    0,   47,   48,    5,    6,    7,    8,
    0,    0,   10,   11,   12,    0,    0,    0,    4,    5,
    6,    7,    8,    0,    9,   10,   11,   12,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    4,    5,    6,    7,
    8,    0,    9,   10,   11,   12,    0,    3,    3,    3,
    3,    3,    0,    3,    3,    3,    3,
};
static const short yycheck[] = {                         10,
    0,   40,   42,   43,   10,  256,   45,   47,    4,   40,
   10,   10,   40,   41,   42,   43,   40,   45,   10,   47,
   40,   41,   42,   43,   40,   45,   10,   47,   40,   40,
   40,   40,   10,   40,   45,   41,   42,   43,   40,   -1,
   40,   47,   42,   43,   -1,   45,   42,   47,   40,   41,
   42,   43,   -1,   45,   94,   47,   40,   41,   42,   43,
   -1,   45,   40,   47,   42,   43,   94,   45,   -1,   47,
   40,   41,   42,   43,   94,   45,   -1,   47,   40,   41,
   42,   43,   94,   45,   -1,   47,   -1,   -1,   94,   -1,
   40,   41,   42,   43,   94,   45,   -1,   47,   40,   41,
   42,   43,   94,   45,   -1,   47,   40,   41,   42,   43,
   94,   45,   10,   47,   -1,   40,   94,   42,   40,   41,
   42,   43,   47,   45,   94,   47,   40,   41,   42,   43,
   10,   45,   94,   47,   40,   10,   42,   43,   -1,   45,
   10,   47,   10,   41,   94,   41,   42,   43,   -1,   -1,
   10,   47,   94,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   94,   41,   42,   43,   -1,   45,   41,   47,   43,   94,
   45,   41,   94,   41,   42,   43,   -1,   45,   -1,   47,
   94,   41,   -1,   43,   13,   45,   15,   -1,   94,   -1,
   19,   20,   21,   22,   23,   24,   25,   -1,   94,   28,
   29,   30,   31,   -1,   33,   34,  258,  259,  260,  261,
   -1,   -1,  264,  265,  266,   -1,   -1,   -1,  257,  258,
  259,  260,  261,   -1,  263,  264,  265,  266,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  257,  258,  259,  260,
  261,   -1,  263,  264,  265,  266,   -1,  257,  258,  259,
  260,  261,   -1,  263,  264,  265,  266,
};
#define YYFINAL 2
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 267
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? (YYMAXTOKEN + 1) : (a))
#if YYDEBUG
static const char *yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,"'\\n'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,"'('","')'","'*'","'+'",0,"'-'",0,"'/'",0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"'^'",0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
"NUM","SIN","COS","TAN","SQR","UMINUS","EXP","LOG","CEIL","FLOOR","UMIN",
"illegal-symbol",
};
static const char *yyrule[] = {
"$accept : S",
"S : S E '\\n'",
"S : S '\\n'",
"S :",
"S : error '\\n'",
"E : E '+' E",
"E : E '-' E",
"E : E '*' E",
"E : E '/' E",
"E : E '^' E",
"E : E '(' E ')'",
"E : NUM F",
"E : '(' E ')' F",
"E : F",
"E : '(' E ')'",
"E : '-' E",
"E : EXP",
"E : NUM",
"F :",
"F : SIN '(' E ')'",
"F : COS '(' E ')'",
"F : TAN '(' E ')'",
"F : SQR '(' E ')'",
"F : LOG '(' E ')'",
"F : CEIL '(' E ')'",
"F : FLOOR '(' E ')'",

};
#endif

int      yydebug;
int      yynerrs;

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  10000
#endif
#endif

#define YYINITSTACKSIZE 200

typedef struct {
    unsigned stacksize;
    short    *s_base;
    short    *s_mark;
    short    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;
#line 82 "test.y"

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
#line 274 "y.tab.c"

#if YYDEBUG
#include <stdio.h>		/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    short *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return -1;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (short *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return -1;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return -1;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack)) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = YYLEX) < 0) yychar = 0;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
        {
            goto yyoverflow;
        }
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    yyerror("syntax error");

    goto yyerrlab;

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yystack.s_mark]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
                {
                    goto yyoverflow;
                }
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == 0) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
case 1:
#line 29 "test.y"
	{ printf("%g\n", yystack.l_mark[-1]); }
break;
case 4:
#line 32 "test.y"
	{ yyerror("Error: Enter once more…\n" );yyerrok; }
break;
case 5:
#line 34 "test.y"
	{ yyval = yystack.l_mark[-2] + yystack.l_mark[0]; }
break;
case 6:
#line 35 "test.y"
	{ yyval=yystack.l_mark[-2]-yystack.l_mark[0]; }
break;
case 7:
#line 36 "test.y"
	{ yyval=yystack.l_mark[-2]*yystack.l_mark[0]; }
break;
case 8:
#line 37 "test.y"
	{ yyval=yystack.l_mark[-2]/yystack.l_mark[0]; }
break;
case 9:
#line 38 "test.y"
	{ yyval=pow(yystack.l_mark[-2],yystack.l_mark[0]); }
break;
case 10:
#line 39 "test.y"
	{ yyval=yystack.l_mark[-3]*yystack.l_mark[-1]; }
break;
case 11:
#line 40 "test.y"
	{yyval = yystack.l_mark[-1]*yystack.l_mark[0];}
break;
case 12:
#line 41 "test.y"
	{yyval = yystack.l_mark[-2]*yystack.l_mark[0];}
break;
case 14:
#line 43 "test.y"
	{ yyval=yystack.l_mark[-1]; }
break;
case 15:
#line 44 "test.y"
	{ yyval= -yystack.l_mark[0]; }
break;
case 19:
#line 49 "test.y"
	{ yyval=sin(yystack.l_mark[-1]); }
break;
case 20:
#line 50 "test.y"
	{ yyval=cos(yystack.l_mark[-1]); }
break;
case 21:
#line 51 "test.y"
	{ yyval=tan(yystack.l_mark[-1]); }
break;
case 22:
#line 52 "test.y"
	{ yyval=sqrt(yystack.l_mark[-1]); }
break;
case 23:
#line 53 "test.y"
	{ yyval=log(yystack.l_mark[-1]); }
break;
case 24:
#line 54 "test.y"
	{ yyval=ceil(yystack.l_mark[-1]); }
break;
case 25:
#line 55 "test.y"
	{ yyval=floor(yystack.l_mark[-1]); }
break;
#line 552 "y.tab.c"
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            if ((yychar = YYLEX) < 0) yychar = 0;
#if YYDEBUG
            if (yydebug)
            {
                yys = yyname[YYTRANSLATE(yychar)];
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == 0) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
    {
        goto yyoverflow;
    }
    *++yystack.s_mark = (short) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    yyerror("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
