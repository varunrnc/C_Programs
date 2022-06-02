/* Write a program to declare constants and macro functions using #define */

/* Program to illustrate the macros */

#include <stdio.h>
#include <string.h>

#define STR1 "A macro definition!\n"
#define STR2 "must be all on one line!\n"
#define EXPR1 1+2+3
#define EXPR2 EXPR1+5
#define ABS(x) (((x) < 0) ? -(x):(x))
#define MAX(p,q) ((p < q) ? (q):)