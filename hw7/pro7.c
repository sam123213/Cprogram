//sum of the minor diagonal elements of a matrix

#include<stdio.h>
void main()
{
    int a[10][10],diasum=0;
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
        diasum=diasum+a[i][row-i-1];
    }

    printf("Sum of the minor diagonal elements is=%d",diasum);
}