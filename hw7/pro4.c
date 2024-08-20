//multiplication of two matrices

#include<stdio.h>
void main()
{
    int a1[10][10],a2[10][10],mul[10][10];
    int col,row,i,j,k;

    printf("Enter the matrix row and column size=\n");
    scanf("%d %d",&row,&col);

    printf("Enter the value of first matrix=\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&a1[i][j]);
        }
    }

    printf("Enter the value of second matrix=\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&a2[i][j]);
        }
    }

    printf("First matrix given belows=\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t",a1[i][j]);
        }
        printf("\n");
    }

    printf("second matrix given belows=\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t",a2[i][j]);
        }
        printf("\n");
    }

    printf("Resultant matrix after multiplication:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            mul[i][j]=0;
            for(k=0;k<col;k++)
            {
                mul[i][j]=mul[i][j]+a1[i][k]*a2[k][j];
            }  
            printf("%d\t",mul[i][j]);
        }
        printf("\n");
    }
}