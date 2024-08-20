//copy all elements from an array to another array. 

#include<stdio.h>
void main()
{
    int a[50],b[50],r,i;
    printf("Enter the Range=");
    scanf("%d",&r);
    printf("Enter the No.=");
    for(i=0;i<r;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Original Array Element as follows:\n");
    for(i=0;i<r;i++)
    {
        printf("%d\t",a[i]);
    }

    for(i=0;i<r;i++)
    {
        b[i]=a[i];
    }
    printf("\nCopied array element as follows:\n");
    for(i=0;i<r;i++)
    {
        printf("%d\t",b[i]);
    }
}