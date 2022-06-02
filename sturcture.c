#include <stdio.h>
#include <conio.h>

union Student
{
    char name[20];
    int roll;
    float marks;
};


int main(){
    union Student s1;
    printf("size of %d", sizeof(s1));



    return 0;
}