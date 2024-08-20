//power of given no.
#include<stdio.h>
void main()
{
    int n1,n2,p=1;
    printf("Enter the No.=");
    scanf("%d",&n1);
    printf("Enter the Power=");
    scanf("%d",&n2);

    for(int i=1;i<=n2;i++)
    {
        p=p*n1;
        //printf("\t%d",i);
    }
    printf("%d^%d=%d",n1,n2,p);
}