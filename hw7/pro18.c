//check summetric matrix

#include<stdio.h>
void main()
{
    int a[10][10];
    int i,j,n,flag=1;
    printf("Enter the matrix row and column size=");
    scanf("%d",&n);

    printf("Enter the element of the matrix=\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("Orignal matrix=\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]!=a[j][i])
            {
                flag=0;
                break;
            }
        }
        if(flag!=0)
        {
            break;
        }
    }

    if(flag==1)
    {
        printf("The matrix is symmetric.\n");
    }
    else
    {
        printf("The matrix is not symmetric.\n");
    }
}
