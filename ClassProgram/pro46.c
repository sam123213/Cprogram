// no. pattern

#include<stdio.h>
void main()
{
    int i,j,n;
    printf("Enter the value of n=");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
           printf("%d",j);
        }
        printf("\n");
    }
    for(i=n-1;i>=0;i--)
    {
        for(j=1;j<=i;j++)
        {
           printf("%d",j);
        }
        printf("\n");
    }
}

