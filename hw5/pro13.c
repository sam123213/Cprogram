// search an element in an array. 

#include<stdio.h>
void main()
{
    int a[50],s,i,fnd,flag=0;
    printf("Enter the size of array=");
    scanf("%d",&s);
    printf("Enter the Element into the Array=\n");
    for(i=0;i<s;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nArray Element as follows:\n");
    for(i=0;i<s;i++)
    {
        printf("%d\t",a[i]);
    }

    printf("\nEnter the No. you want to search=");
    scanf("%d",&fnd);

    for(i=0;i<s;i++)
    {
        if(a[i]==fnd)
        {
            printf("Element %d found at index %d",fnd,i);
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("Element %d not found in the array.",fnd);
    }

}