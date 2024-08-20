// char pattern

#include<stdio.h>
void main()
{
    char n,j,i;
    //char c='A';
    printf("Enter the char of n=");
    scanf("%C",&n);

    for(i='A';i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            printf("%c",j);
            //c++;
        }
        printf("\n");
    }
}