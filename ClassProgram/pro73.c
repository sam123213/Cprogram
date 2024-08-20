// print all array element

#include<stdio.h>
void main()
{
    int a[50],n,i;
    printf("Enter the range=");
    scanf("%d",&n);
    printf("Enter array Elements=");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nArray elements are as follows:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}