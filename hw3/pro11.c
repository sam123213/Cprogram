//find first and last digit of a no.

#include<stdio.h>
void main()
{
    int n,c=10,f,l;
    printf("Enter the No.=");
    scanf("%d",&n);

    /*if (n < 0) 
    {
        n = -n;
    }*/
    
    l=n%10;
    while (n>=c)
    {
        n=n/10; 
    }
    f=n;
    printf("First Digit=%d",f);
    printf("\nLast Digit=%d",l);
}