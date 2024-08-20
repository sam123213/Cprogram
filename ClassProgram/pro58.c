// find the factors of given No. using 3 category

#include<stdio.h>
void factors(int fac);
void main()
{
    int fac;
    printf("Enter the No.=");
    scanf("%d",&fac);
    factors(fac);
}

void factors(int fac)
{
    int i;
    for(i=1;i<=fac;i++)
    {
        if(fac%i==0)
        {
            printf("%d\t",i);
        }
    }
}