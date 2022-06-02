#include <stdio.h>
#include <conio.h>

int main(){
    FILE *fptr;
    fptr = fopen("test.txt", "w");
    fputs(fptr, "Hello C Programming...\n");
    printf("File created....");
    fclose(fptr);








    return 0;
}