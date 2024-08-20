//read and print elements of array. 

#include<stdio.h>
void main()
{
    int a[50],i,r;
    printf("Enter the Range=");
    scanf("%d",&r);
    printf("Enter the No.");
    for(i=0;i<r;i++)
    {
        scanf("%d",&a[i]);
    }
    printf(" Array Element as follows:\n");
    for(i=0;i<r;i++)
    {
        printf("%d\t",a[i]);
    }

}