// factorial using 1 category

#include<stdio.h>
int factorial(int);
void main()
{
    int n,f;
    printf("Enter the value of n=");
    scanf("%d",&n);

    f=factorial(n);
    printf("%d Factorial=%d",n,f);
}

int factorial(int n)
{
    int i,f=1;
    for(i=n;i>0;i--)
    {
        f=f*i;
    }

    return f;
}