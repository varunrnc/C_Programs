// C Program to swap two numbers without third variable
// We can swap two numbers without using third variable. 
// There are two common ways to swap two numbers without using third variable:
// 1.  By + and -
// 2.  By * and /

// Program 1: Using + and -

#include <stdio.h>

int main()
{
    int a = 10, b = 20;
    printf("Before swap a = %d b = %d", a,b);
    a = a + b; // a = 30 (10+20)
    b = a - b; // b = 10 (30-20)
    a = a - b; // a = 20 (30-10)
    printf("\nAfter swap a = %d b = %d", a,b);
    return 0;
}