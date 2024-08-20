// descending order

#include<stdio.h>
void main()
{
    int a[50],r,i,j,temp;
    printf("Enter the range=");
    scanf("%d",&r);
    printf("Enter the No.=");
    for(i=0;i<r;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nBefore Sort Array Element as follows:\n");
    for(i=0;i<r;i++)
    {
        printf("%d\t",a[i]);
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<r;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\nAfter Sort Array Element as follows Descending order:\n");
    for(i=0;i<r;i++)
    {
        printf("%d\t",a[i]);
    }
}