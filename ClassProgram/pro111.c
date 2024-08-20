//Simple code of typedef.

#include<stdio.h>
typedef struct deparments
{
    int did;
    char dname[50];
}dept; 
void main()
{
    dept d={10,"kal"};
    printf("Department ID=%d\t Name=%s",d.did,d.dname);
}