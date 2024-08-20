//enter the No. and check the week day.

#include<stdio.h>
void main()
{
    int a;
    int sun=1,mon=2,tue=3,wen=4,thu=5,fri=6,sat=7;
    printf("Enter the week Day:");
    scanf("%d",&a);
    
    if (a==sun)
    {
        printf("Sunday");
    }
    else if(a==mon)
    {
        printf("Monday");
    }
    else if(a==tue)
    {
        printf("Tuesday");
    }
    else if(a==wen)
    {
        printf("Wednesday");
    }
    else if(a==thu)
    {
        printf("Thusday");
    }
    else if(a==fri)
    {
        printf("Friday");
    }
    else if(a==sat)
    {
        printf("Saturday");
    }
    else
    {
        printf("Invaild Input");
    }

}