//find maximum and minimum element in an array. 

#include<stdio.h>
void main()
{
    int a[50],r,i,max,min;
    printf("Enter the Range=");
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
    min=a[0];
    max=a[0];

    for(i=0;i<r;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("\nMin element in the array=%d",min);
    printf("\nMax element in the array=%d",max);  

}