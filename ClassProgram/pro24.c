// multiplication table

#include<stdio.h>
void main()
{
    int t,m;
    printf("Enter the No.=");
    scanf("%d",&t);
    printf("Multiplication Table Given Below");

    for(int i=1;i<=10;i++)
    {
        m=t*i;
        printf("\n%d*%d=%d",t,i,m);
    }

}