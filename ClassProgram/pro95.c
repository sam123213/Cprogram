//2d array simple code

#include<stdio.h>
void main()
{
    int a[2][2]={{10,20},{30,40}},i,j;
    printf("Matrix is as follows:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

}