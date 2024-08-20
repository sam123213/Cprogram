// post dec using single pointer

#include<stdio.h>
void main()
{
    int a=10;
    int *p;
    p=&a;
    printf("Before Decrement Value of p=%d",p);
    p--;
    printf("\nAddress of a=%d",&a);
    printf("\nAddress of p=%d",&p);
    printf("\nValue of a=%d",a);
    printf("\nAfter Decrement value of p=%d",p);
    printf("\nValue of *p=%d",*p);
}