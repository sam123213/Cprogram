//check the given triangle is equilateral,isosceles,scalene.

#include<stdio.h>
void main()
{
    int a1,a2,a3,sum;
    printf("Enter the value of angle 1=");
    scanf("%d",&a1);
    printf("Enter the value of angle 2=");
    scanf("%d",&a2);
    printf("Enter the value of angle 3=");
    scanf("%d",&a3);
    sum=a1+a2+a3;

    if(sum==180 && a1==a2 && a1==a3 && a2==a3)
    {
        printf("Triangle is Equilateral");
    }
    else if(sum==180 && a1==a2 || a1==a3 || a3==a2)
    {
        printf("Triangle is Isosceles");
    }
    else if(sum==180 && a1!=a2 || a1!=a3 || a3!=a2)
    {
        printf("Triangle is Scalene");
    }
    else 
    {
        printf("Triangle is Not Valid");
    }
}