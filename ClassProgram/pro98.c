//Sum of array diagonal and non-diagonal

#include<stdio.h>
void main()
{
    int a[10][10],i,j,row,col,sd=0,snd=0;
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

    printf("Sum of array diagonal and non-diagonal\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(i==j)
            {
                sd=sd+a[i][j];
            }
            else
            {
                snd=snd+a[i][j];
            }
        }
    }
    printf("\nSum of Diagonal=%d",sd);
    printf("\nSum of Non-Diagonal=%d",snd);
}
