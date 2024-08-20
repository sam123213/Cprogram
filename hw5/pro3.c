// find sum of all array elements. 

#include<stdio.h>
void main()
{
    int a[50],i,r,sum;
    printf("Enter the range=");
    scanf("%d",&r);
    printf("Enter the No.=");
    for(i=0;i<r;i++)
    {
        scanf("%d",&a[i]);
    }
    printf(" Array Element as follows:\n");
    for(i=0;i<r;i++)
    {
        printf("%d\t",a[i]);
    }
    
    for(i=0;i<r;i++)
    {
        sum=sum+a[i];
    }
    printf("\nSum of all Element in the  array=%d",sum);
}
