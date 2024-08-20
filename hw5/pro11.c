// delete all duplicate element

#include<stdio.h>
void main()
{
    int a[50],s,i,j,rmv=0;
    printf("Enter the array range=");
    scanf("%d",&s);
    printf("Enter the Element in the array=\n");
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
            if(a[i]==a[j])
            {
                break;
            }
        }
        if(j==i)
        {
            a[rmv++]=a[i];
        }
    }
    
    printf("\nArray after removing duplicates:\n");
    for(i=0;i<rmv;i++)
    {
        printf("%d\t",a[i]);
    }

}