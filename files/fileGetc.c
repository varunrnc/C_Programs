#include <stdio.h>
#include <conio.h>

int main(){
    FILE *fp;
    char c;
    fp = fopen("emp.txt", "r");
    while ((c = fgetc(fp)) != EOF)
    {
        printf("%c", c);
    }
    fclose(fp);
    







    return 0;
}