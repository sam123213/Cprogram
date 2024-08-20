// simple code double pointer

#include<stdio.h>
void main()
{
    int a=10;
    int *p;
    int **ptr;
    p=&a;
    ptr=&p;
    printf("\nAddress of a=%d",&a);
    printf("\nAddress of p=%d",&p);
    printf("\nAddress of ptr=%d",&ptr);
    printf("\nValue of a=%d",a);
    printf("\nValue of p=%d",p);
    printf("\nValue of ptr=%d",ptr);
    printf("\nValue of *p=%d",*p);
    printf("\nValue of **ptr=%d",**ptr);

}