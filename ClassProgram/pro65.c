// post inc using single pointer

#include<stdio.h>
void main()
{
    int a=10;
    int *p;
    p=&a;
    printf("Before increment Value of p=%d",p);
    p++;
    printf("\nAddress of a=%d",&a);
    printf("\nAddress of p=%d",&p);
    printf("\nValue of a=%d",a);
    printf("\nAfter increment value of p=%d",p);
    printf("\nValue of *p=%d",*p);
}