//swap first and last digit of a no.

#include<stdio.h>
void main()
{
    int n,c=10,f,l,s;
    printf("Enter the No.=");
    scanf("%d",&n);

    /*if (n < 0) 
    {
        n = -n;
    }*/
    

    l=n%10;
    //printf("%d",l);

    while (n>=c)
    {
        //c++;
        n=n/10; 
        //printf("\t%d",n);
    }
    f=n;
    

    printf("First Digit=%d",f);
    printf("\nLast Digit=%d",l);

    printf("\nBefore swap first=%d and Last=%d Digits",f,l);
    s=f;
    f=l;
    l=s;
    printf("\nAfter swap first=%d and Last=%d Digits",f,l);


}