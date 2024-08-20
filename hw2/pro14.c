//check the given triangle is valid

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
    if(sum==180)
    {
        printf("Triangle is Valid");
    }
    else
    {
        printf("Triangle is not Valid");
    }
}