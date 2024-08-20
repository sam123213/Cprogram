//simple code structure
// accessing and initialize structure elements(1st way)

#include<stdio.h>
#include<string.h>
struct student
{
    int rno;
    char name[50];
    float mark;
}s;
void main()
{
    s.rno=10;
    strcpy(s.name,"kalpesh");
    s.mark=50.5;
    printf("Student details are as follows:");
    printf("\nRoll No.=%d\t Name=%s\t Marks=%f\t",s.rno,s.name,s.mark);
}
