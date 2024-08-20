//matrix code

#include<stdio.h>
void main()
{
    int a[10][10],i,j,row, col;
    printf("Enter size of rows and colums=\n");
    scanf("%d %d",&row,&col);
    printf("Enter array Element=\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("Matrix is as follows:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}