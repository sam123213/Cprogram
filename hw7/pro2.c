//Substraction of two matrices

#include<stdio.h>
void main()
{
    int a1[10][10],a2[10][10],sub[10][10];
    int c,r,i,j;
    
    printf("Enter matrix column and row size=\n");
    scanf("%d %d",&c,&r);

    printf("Enter the value of first matrix=\n");
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            scanf("%d",&a1[i][j]);
        }
    }

    printf("Enter the value of second matrix=\n");
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            scanf("%d",&a2[i][j]);
        }
    }

    printf("First matrix=\n");
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d\t",a1[i][j]);
        }
        printf("\n");
    }

    printf("Second matrix=\n");
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d\t",a2[i][j]);
        }
        printf("\n");
    }

    printf("Substraction of two matrix=\n");
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            sub[i][j]=a1[i][j]-a2[i][j];
            printf("%d\t",sub[i][j]);
        }
        printf("\n");
    }
}