//check whether two matrices are equal or not

#include<stdio.h>
void main()
{
    int a1[10][10],a2[10][10];
    int i,j,col,row,flag=0;

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

    printf("First matrix=\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t",a1[i][j]);
        }
        printf("\n");
    }

    printf("Second matrix=\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t",a2[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(a1[i][j]==a2[i][j])
            {
                flag=1;
            }
            else
            {
                flag=0;
                break;
            }
        }
    }

    if(flag==1)
    {
        printf("\nThe matrices are equal");
    }
    else
    {
        printf("\nThe matrices are unequal");
    }
}