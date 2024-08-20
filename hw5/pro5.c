//count total number of even and odd elements in an array. 

#include<stdio.h>
void main()
{
    int a[50],i,r,e=0,o=0;
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

    for(i=0;i<r;i++)
    {
        if(a[i]%2==0)
        {
            e++;
        }
        else
        {
            o++;
        }
    }
    printf("\nNo. of even No. are present in the array=%d",e);
    printf("\nNo. of odd No. are present in the array=%d",o);
}