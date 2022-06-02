#include <stdio.h>
#include <conio.h>

int main(){
    FILE *fp;
    char text[300];
    fp = fopen("emp.txt", "r");
    while ((fgets(text, 300, fp)) != NULL)
    {
        printf("%s", text);
    }
    




    return 0;
}