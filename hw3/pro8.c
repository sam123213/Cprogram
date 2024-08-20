// sum of all odd no. from 1 to n

#include<stdio.h>
void main()
{
    int n,n1=1,sum;
    printf("Enter the value of n=");
    scanf("%d",&n);

    while (n1<=n)
    {
        if (n1%2!=0)
        {
            printf("\n%d",n1);
            sum=sum+n1;
        }
        n1++;
    }
    printf("\nsum of all Odd No.=%d",sum);
    
}