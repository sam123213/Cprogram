// sort even and odd elements of array separately.

#include<stdio.h>
void main()
{
    int a[50],i,s;
    printf("Enter the size of array=");
    scanf("%d",&s);
    printf("Enter the Element=\n");
    for(i=0;i<s;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nArray Element as follows:=\n");
    for(i=0;i<s;i++)
    {
        printf("%d\t",a[i]);
    }

    printf("\nEven elements into the array=\n");
    for(i=0;i<s;i++)
    {
        if(a[i]%2==0)
        {
            printf("%d\t",a[i]);
        }
    }

    printf("\nOdd elements into the array=\n");
    for(i=0;i<s;i++)
    {
        if(a[i]%2!=0)
        {
            printf("%d\t",a[i]);
        }
    }

}