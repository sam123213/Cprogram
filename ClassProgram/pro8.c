//simple if-else condition
//Eligible or not Eligible for vote

#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
    printf("Enter age:");
    scanf("%d",&a);
    if (a>=18)
    {
        printf("Eligible to vote"); 
    }
    else
    {
        printf("Not eligible to vote");
    }

}