//print all negative elements in an array 

#include<stdio.h>
void main()
{
    int a[50],r,i;
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
    printf("\nNegative Elements in array:\n");
    for(i=0;i<r;i++)
    {
        if(a[i]<0)
        {
            printf("%d\t",a[i]);
        }
    }
    
}