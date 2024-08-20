// check year is leap.

#include<stdio.h>
void main()
{
    int y;
    printf("Enter the Year:");
    scanf("%d",&y);

    if(y%4==0)
    {
        printf("%d This is Year is leap Year",y);
    }
    else
    {
        printf("%d This is year is Non Leap Year",y);
    }
}