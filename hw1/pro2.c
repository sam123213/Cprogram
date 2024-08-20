//simple intrance

#include<stdio.h>
void main()
{
    int a,b,c,d,e,f;
    printf("Enter the Amount:");
    scanf("%d",&a);
    printf("Enter the Rate of Entrance in Percentage:");
    scanf("%d",&b);
    printf("Enter the no. of month:");
    scanf("%d",&c);
    d=b%a;
    e=(a*d*c)/100;
    printf("Interest=%d",e);
    f=a+e;
    printf("\nTotal+Intreest:%d",f);
}