/* Program to find the square of a number using macro */

#include <stdio.h>
#define SQUARE(x) (x*x)

int main()
{
    int v,y;
    printf("Enter any number to find its square: \n");
    scanf("%d", &v);
    y = SQUARE(v);
    printf("\nThe square of %d is %d", v, y);

    return 0;
}