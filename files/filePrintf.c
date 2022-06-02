#include <stdio.h>
#include <conio.h>

int main(){
    /*
    FILE *fptr;
    fptr = fopen("test.txt", "w");
    fprintf(fptr, "Hello in the world of file handling fprintf...\n");
    printf("File created....");
    fclose(fptr);
    */
   FILE *fp;
   int roll, marks;
   char name[30];
   fp = fopen("emp.txt", "w");
   if(fp == NULL)
   {
       printf("File does not exists\n");
   }

   printf("\nEnter your roll : ");
   scanf("%d", &roll);
// gets(roll);
   fprintf(fp, "Roll = %d\n", roll);
   printf("\nEnter the name : ");
   scanf("%s", &name);
// gets(name);
   fprintf(fp, "Name = %s\n", name);
   printf("\nEnter your marks : ");
   scanf("%d", &marks);
// gets(marks);
   fprintf(fp, "Marks = %d\n", marks);
   fclose(fp);








    return 0;
}