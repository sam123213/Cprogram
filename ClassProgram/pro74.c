// sum of all array element

#include<stdio.h>
void main()
{
    int a[10],i,n,sum=0;
    printf("Enter the Range=");
    scanf("%d",&n);
    printf("Enter the No.=");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("sum=%d",sum);
}