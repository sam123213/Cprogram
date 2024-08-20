// count how many digit of this no.

#include<stdio.h>
void main()
{
    int c=0,n;
    printf("Enter the No.=");
    scanf("%d",&n);

    /*if(n<0)
    {
        n=-n;
    }*/
    
    while (n!=0)
    {
       n=n/10;
       c++;
    }
    
    printf("Number of Digits is=%d digits",c);
    
}