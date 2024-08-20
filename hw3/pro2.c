//find the natural no. in reverse order from n to 1

#include<stdio.h>
void main()
{
    int n,n2=1;
    printf("Enter the value of n=");
    scanf("%d",&n);
    printf("Reverse order Natural number is given below");

    while (n2<=n)
    {
        printf("\n%d",n);
        n--;
    } 
    
}