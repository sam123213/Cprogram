//sum of each row and column of a matrix

#include<stdio.h>
void main()
{
    int a[10][10],rowsum[10]={0},colsum[10]={0};
    int i,j,row,col;

    printf("Enter the matrix row and column size=\n");
    scanf("%d %d",&row,&col);

    printf("Enter the value of matrix=\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("Matrix=\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            rowsum[i]=rowsum[i]+a[i][j];
            colsum[j]=colsum[j]+a[i][j];
        }
    }

    printf("Sum of each row:\n");
    for(i=0;i<row;i++)
    {
        printf("Sum of row %d=%d\n",i+1,rowsum[i]);
    }

    printf("Sum of each column:\n");
    for(i=0;i<col;i++)
    {
        printf("Sum of column %d=%d\n",i+1,colsum[i]);
    }
}

