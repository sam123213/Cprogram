// delete an element from an array at specified position. 

#include<stdio.h>
void main()
{
    int a[50],r,i,pos;
    printf("Enter the Range=");
    scanf("%d",&r);
    printf("Enter the No.=");
    for(i=0;i<r;i++)
    {
    scanf("%d",&a[i]);
    }
    printf("Array Element as follows:\n");
    for(i=0;i<r;i++)
    {
        printf("%d\t",a[i]);
    }

    printf("\nEnter the position=");
    scanf("%d",&pos);

    if(pos>=r || pos<0)
    {
        printf("\nInvalid Position");
    }
    else
    {
        for(i=pos;i<r-1;i++)
        {
            a[i]=a[i+1];
        }
        r--;

        printf("Array After Deletion=\n");
        for(i=0;i<r;i++)
        {
            printf("%d\t",a[i]);
        }
    }
    
}