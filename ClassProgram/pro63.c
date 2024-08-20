// simple code single pointer

#include<stdio.h>
void main()
{
    int a=50;
    int *p;

    p=&a;
    

    printf("Address of a=%d",&a);
    printf("\nAddress of p=%d",&p);
    printf("\nValue of a=%d",a);
    printf("\nValue of p=%d",p);
    printf("\nvalue of *P=%d",*p);
}