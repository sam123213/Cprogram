// find the power of given No. using 3 category

#include<stdio.h>
void power(int,int);
void main()
{
    int b,e;
    printf("Enter the Base No.=");
    scanf("%d",&b); 
    printf("Enter the Exponent No.=");
    scanf("%d",&e);
    power(b,e);
}

void power(int b,int e)
{
    int i,pow=1;
    for(i=1;i<=e;i++)
    {
        pow=pow*b;
    }
    printf("Factorial=%d",pow);
}