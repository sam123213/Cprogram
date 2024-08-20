// find reverse of an array. 

#include<stdio.h>
void main()
{
    int a[50],s,i,start,end,temp;
    printf("Enter the size of array=");
    scanf("%d",&s);
    printf("Enter the Element=\n");
    for(i=0;i<s;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nArray Element as follows:\n");
    for(i=0;i<s;i++)
    {
        printf("%d\t",a[i]);
    }
    start=0;
    end=s-1;
    if(start<end)
    {
        temp=a[start];
        a[start]=a[end];
        a[end]=temp;

        start++;
        end--;
    }

    printf("\nReverse Array=\n");
    for(i=0;i<s;i++)
    {
        printf("%d\t",a[i]);
    }

}