//simple code malloc.

#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *ptr,i,n;
    printf("Enter size of array=");
    scanf("%d",&n);
    ptr=(int*)malloc(sizeof(int));
    printf("Enter the Elements=\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));
    }

    printf("\nElement are follows:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",*(ptr+i));
    }
}