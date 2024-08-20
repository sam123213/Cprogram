//print all unique elements in the array. 

#include<stdio.h>
void main()
{
    int a[50],s,i,j,flag=1;
    printf("Enter the size of array=");
    scanf("%d",&s);
    printf("Enter the Element=\n");
    for(i=0;i<s;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Array Element as follows:\n");
    for(i=0;i<s;i++)
    {
        printf("%d\t",a[i]);
    }

    printf("\nUnique Element in array=\n");
    for(i=0;i<s;i++)
    {
    
        for(j=0;j<i;j++)
        {
            if(a[i]==a[j])
            {
                flag=0;
                break;
            }
        }
        if(flag)
        {
            printf("%d\t",a[i]);
        }
    }
    
}