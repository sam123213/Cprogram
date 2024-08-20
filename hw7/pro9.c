//interchange diagonals of a matrix

#include<stdio.h>
void main()
{
    int a[10][10];
    int row,col,i,j,temp;

    printf("Enter the matrix row and column size=\n");
    scanf("%d %d",&row,&col);

    printf("Enter the elements of the matrix=\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("Original Matrix=\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<col;i++)
    {
        temp=a[i][i];
        a[i][i]=a[i][col-i-1];
        a[i][col-i-1]=temp;
    }

    printf("Matrix after interchanging diagonals=\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}