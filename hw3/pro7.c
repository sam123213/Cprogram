//sum of all even no. from 1 to n

#include<stdio.h>
void main()
{
    int n1=1,n,sum;
    printf("Enter the value of n=");
    scanf("%d",&n);
    while (n1<=n)
    {
        if (n1%2==0)
        {
            printf("\n%d",n1);
            sum=sum+n1;
        }
        n1++;       
    }   
    printf("\nSum of all even No.=%d",sum);
}