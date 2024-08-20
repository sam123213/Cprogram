// simple code union and sizeof.

#include<stdio.h>
union student
{
    int srn;
    char sname[50];
    float smark;
}s1;

void main()
{
    printf("enter student Roll No.,Name,Marks=\n");
    scanf("%d %s %f",&s1.srn,s1.sname,&s1.smark);

    printf("\nStudents Roll No.=%d",s1.srn);
    printf("\nStudents Name=%s",s1.sname);
    printf("\nStudents Marks=%f",s1.smark);

    printf("\nThe size of union element=%d",sizeof(s1));
}