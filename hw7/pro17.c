//check sparse matrix

#include<stdio.h>
void main()
{
    int a[10][10];
    int i,j,row,col,count=0,totalele;
    printf("Enter the matrix row and column size=\n");
    scanf("%d %d",&row,&col);

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

    totalele=row*col;

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(a[i][j]==0)
            {
                count++;
            }
        }
    }

    if(count>totalele/2)
    {
        printf("The matrix is a sparse matrix.\n");
    }
    else
    {
        printf("The matrix is not a sparse matrix.\n");
    }

}