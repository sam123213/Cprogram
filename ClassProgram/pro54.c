// find the product using 1 category

#include<stdio.h>
int product(int,int,int);
void main()
{
    int a,b,c,d;
    printf("Enter the three No.=");
    scanf("%d %d %d",&a,&b,&c);

    d=product(a,b,c);
    printf("Product=%d",d);
}

int product(int a,int b,int c)
{
    return a*b*c;
}