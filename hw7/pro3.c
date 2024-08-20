//scalar matrix multiplication

#include<stdio.h>
void main()
{
    int a[10][10];
    int row,col,i,j,scalar;

    printf("enter the matrix row and column size=\n");
    scanf("%d %d",&row,&col);

    printf("Enter the value of matrix=\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("Matrix are given belows=\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    printf("Enter the scalar value to multiply=");
    scanf("%d",&scalar);

    printf("Resultant matrix after scalar multiplication:=\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            a[i][j]=a[i][j]*scalar;
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}