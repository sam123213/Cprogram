//find transpose of a matrix

#include<stdio.h>
void main()
{
    int a[10][10],b[10][10];
    int i,j,col,row;

    printf("Enter the matrix column and row size=\n");
    scanf("%d %d",&col,&row);

    printf("Enter the element of the matrix=\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("Orignal matrix=\n");
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
            b[j][i]=a[i][j];
        }
    }

    printf("Transpose of Matrix:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
}