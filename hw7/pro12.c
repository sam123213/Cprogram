//sum of upper triangular matrix 

#include<stdio.h>
void main()
{
    int a[10][10];
    int row,col,i,j,sum=0;

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

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(i<=j)
            {
                sum=sum+a[i][j];
            }
        }
    }

    printf("Sum of Upper Triangular Matrix:%d\n",sum);
}