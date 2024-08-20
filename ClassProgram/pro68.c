// post dec by 5 using single pointer

#include<stdio.h>
void main()
{
    int a=10;
    int *p;
    p=&a;
    printf("Before decrement Value of p=%d",p);
    p-5;
    printf("\nAddress of a=%d",&a);
    printf("\nAddress of p=%d",&p);
    printf("\nValue of a=%d",a);
    printf("\nAfter decrement value of p=%d",p);
    printf("\nValue of *p=%d",*p);
}