//print even and odd element in an array

#include<stdio.h>
void main()
{
    int a[50],r,i;
    printf("Enter the Range=");
    scanf("%d",&r);
    printf("Enter the value=");
    for(i=0;i<r;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<r;i++)
    {
        //printf("Even index value=");
        if(i%2==0)
        {
            printf("Even index value=%d\t",a[i]);
        }
        //printf("Odd index value=");
        if(i%2!=0)
        {
            printf("Odd index value=%d\n",a[i]);
        }
        
    }
}