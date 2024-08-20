// multipication table of any no.

#include<stdio.h>
void main()
{
    int n,n1=1,mul;
    printf("Enter the value of n=");
    scanf("%d",&n);
    printf("Multiplication table given below");

    while (n1<=10)
    {
        mul=n*n1;
        printf("\n%d*%d=%d",n,n1,mul);
        n1++;
        //mul=n*n1;
    }
    
}