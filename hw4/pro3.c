//find maximum and minimum between two numbers using functions.

#include<stdio.h>
void maxmin(int ,int);

void main()
{
    int a,b;
    printf("Enter the two No.=");
    scanf("%d %d",&a,&b);
    maxmin(a,b);
    
}

void maxmin(int a,int b)
{
    if(a>b)
    {
        printf("The max value is %d",a);
        printf("\nThe min value is %d",b);
    }
    else if(b>a)
    {
        printf("\nThe max value is %d",b);
        printf("\nThe min value is %d",a);
    }
    else
    {
        printf("\nBoth value are same");
    }
}