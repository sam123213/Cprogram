//find cube of any number using function.

#include<stdio.h>
void cube(int);
void main()
{
    int n;
    printf("Enter the value of n=");
    scanf("%d",&n);

    cube(n);
    
}

void cube(int n)
{
    printf("%d Cube=%d",n,n*n*n);
}