//2d array simple code
#include<stdio.h>
void main()
{
    int a[2][2],i,j;
a[0][0]=10;
a[0][1]=20;
a[1][0]=30;
a[1][1]=40;
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