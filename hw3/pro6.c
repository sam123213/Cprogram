//sum of all natural no. from 1 to n

#include<stdio.h>
void main()
{
    int n,n1=1,sum;
    printf("Enter the value of n=");
    scanf("%d",&n);

    while(n>=n1)
    {
        printf("\n%d",n1);
        //n1++;
        sum=sum+n1;
        n1++;
    }
    printf("\nSum of all natural No.=%d",sum);
}