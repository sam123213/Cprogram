//sum of all even and odd array element

#include<stdio.h>
void main()
{
    int a[50],r,i,sum=0,sum1=0;
    printf("Enter the Range=");
    scanf("%d",&r);
    printf("Enter array Elements=");
    for(i=0;i<r;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<r;i++)
    {
        if(i%2==0)
        {
            //printf("%d\t",a[i]);
            sum=sum+a[i];
        }
        else if(i!=0)
        {
            sum1=sum1+a[i];
        }
        //printf("%d\t",sum);
    }
    printf("Even=%d\t",sum);
    printf("Odd=%d\t",sum1);
}