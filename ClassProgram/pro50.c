//simple code user difine function
// addtion of two no.

#include<stdio.h>
int adds(int,int);
void main()
{
    int a,b,c;

    printf("Enter the two no.=");
    scanf("%d %d",&a,&b);

    c=adds(a,b);
    printf("Addition=%d",c);

}

int adds(int a, int b)
{
    return a+b;
}