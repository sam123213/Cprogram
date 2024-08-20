// accessing and initialize structure elements(2st way)

#include<stdio.h>
#include<string.h>
struct student
{
    int rno;
    char name[50];
    float mark;
};
void main()
{
    struct student s={101,"abc",56.32};
    printf("Student details are as follows:");
    printf("\nRoll No.=%d\t Name=%s\t Marks=%f\t",s.rno,s.name,s.mark);
}