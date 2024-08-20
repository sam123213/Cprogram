//check whether a number is even or odd using functions.

#include<stdio.h>
void evenodd(int);

void main()
{
    int a;
    printf("Enter the No.=");
    scanf("%d",&a);

    evenodd(a);
}

void evenodd(int a)
{
    if (a%2==0)
    {
        printf("%d The given No. is even",a);
    }
    else
    {
        printf("%d The given No. is odd",a);
    }
}