// check how many day are present in this month

#include<stdio.h>
void main()
{
    int no;
    int Jan=1,Feb=2,Mar=3,Apr=4,May=5,Jun=6,Jul=7,Aug=8,Sep=9,Oct=10,Nov=11,Dec=12;
    printf("Enter the month No.=");
    scanf("%d",&no);
    
    if(no==Jan || no==Mar || no==May || no==Jul || no==Aug || no==Oct || no==Dec)
    {
        printf("It has 31 Days");
    }
    else if(no==Feb)
    {
        printf("It has 28/29 Days");
    }
    else if (no==Apr || no==Jun || no==Sep || no==Nov)
    {
        printf("It has 30 Days");
    }
    else
    {
        printf("Invalid Input");
        
    }
}