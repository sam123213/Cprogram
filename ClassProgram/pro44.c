// char pattern

#include<stdio.h>
void main()
{
    int i,j,n;
    char k='A';
    printf("Enter the value of n=");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {   
            if(k<='Z')
            {
            printf("%c",k++);
            }
        }
        printf("\n");
    }
}