// char pattern

#include<stdio.h>
void main()
{
    char n,j,i;
    printf("Enter the char=");
    scanf("%c",&n);

    for(i='A';i<=n;i++)
    {
        for(j='A';j<=i;j++)
        {
            printf("%c",j);
        }
        printf("\n");
    }
    for(i=n-1;i>='A';i--)
    {
        for(j='A';j<=i;j++)
        {
            printf("%c",j);
        }
        printf("\n");
    }
}