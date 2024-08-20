// coiped element into the array 

#include<stdio.h>
void main()
{
    int a[50],b[50],i,r;
    printf("Enter the range=");
    scanf("%d",&r);
    printf("Enter the No.=");
    for(i=0;i<r;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Original Element as follows:\n");
    for(i=0;i<r;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\nCopied Element as follows:\n");
    for(i=0;i<r;i++)
    {
        b[i]=a[i];
        printf("%d\t",b[i]);
    }

}