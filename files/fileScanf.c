#include <stdio.h>
#include <conio.h>

int main(){
    FILE *fp;
    char buff[255];
    fp = fopen("emp.txt", "r");
    while ((fscanf(fp, "%s", buff)) != EOF)
    {
        printf("%s", buff);
        printf(" ");
    }
    
    fclose(fp);





    return 0;
}