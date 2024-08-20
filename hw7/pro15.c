//find determinant of a matrix

#include<stdio.h>
void main()
{
    int a[10][10];
    int i,j,n,det=0;

    printf("Enter the matrix column and row size=\n");
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

    if(n==1)
    {
        det=a[0][0];
    }
    else if(n==2)
    {
        det=a[0][0]*a[1][1]-a[0][1]*a[1][0];
    }
    else if(n==3)
    {
        det=a[0][0]*(a[1][1]*a[2][2]-a[1][2]*a[2][1])
            -a[0][1]*(a[1][0]*a[2][2]-a[1][2]*a[2][0])
            +a[0][2]*(a[1][0]*a[2][1]-a[1][1]*a[2][0]);
    }

    printf("Determinant of the matrix: %d\n", det);
}