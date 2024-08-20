// check given no. is present or not present into array

#include<stdio.h>
void main()
{
    int a[50],i,r,n1,flag;
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

    printf("\nFind the No. into array=");
    scanf("%d",&n1);

    for(i=0;i<r;i++)
    {
        if(n1==a[i])
        {
            flag=1;
            break;
        }
        
    }
    if(flag==1)
    {
        printf("\nNo. is present");
    }
    else
    {
        printf("\nNo. is not present");
    }
}