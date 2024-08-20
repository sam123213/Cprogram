//sort array elements in ascending or descending order. 

#include<stdio.h>
void main()
{
    int a[50],s,i,j,temp;
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

    for(i=0;i<s;i++)
    {
        for(j=0;j<i;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }    
    }  
    printf("\nAscending order array=\n");
    for(i=0;i<s;i++)
    {
        printf("%d\t",a[i]);
    }

    for(i=0;i<s;i++)
    {
        for(j=0;j<i;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }    
    }  

    printf("\nDescending order array=\n");
    for(i=0;i<s;i++)
    {
        printf("%d\t",a[i]);
    }
}