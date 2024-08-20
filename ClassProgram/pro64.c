// single pointer

#include<stdio.h>
void main()
{
    float a=50.50;
    float *p;

    p=&a;

    printf("Address of a=%d",&a);
    printf("\nAddress of p=%d",&p);
    printf("\nValue of a=%f",a);
    printf("\nValue of p=%d",p);
    printf("\nvalue of *P=%f",*p);
}