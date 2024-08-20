// insert an element in an array. 

#include<stdio.h>
void main()
{
    int a[50],r,i,ele,pos;
    printf("Enter the Range=");
    scanf("%d",&r);
    printf("Enter the No.");
    for(i=0;i<r;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Array Element as follows:\n");
    for(i=0;i<r;i++)
    {
        printf("%d\t",a[i]);
    }

    printf("\nEnter the element to be insert the array=");
    scanf("%d",&ele);
    printf("\nEnter the position=");
    scanf("%d",&pos);

    if(pos>r || pos<0)
    {
        printf("\n Invalid Position");
    }

    for(i=r;i>pos;i--)
    {
        a[i]=a[i-1];
    }
    a[pos]=ele;
    r++;

    printf("\nAfter the insertion=");
    for(i=0;i<r;i++)
    {
        printf("%d\t",a[i]);
    }
}