// Function Recursion

#include<stdio.h>
int facts(int);
void main()
{
    int n,ans;
    printf("Enter value of n=");
    scanf("%d",&n);

    ans=facts(n);
    printf("Factorial=%d",ans);
}

int facts(int n)
{
    if(n==1 || n==0)
    {
        return 1;
    }
    else
    {
        return n*facts(n-1);
    }
}