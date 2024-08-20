//natural no. from 1 to n

#include<stdio.h>
void main()
{   
    int n,n1=1;
    printf("Enter the value of n=");
    scanf("%d",&n);
    printf(" The Natural Number given below=");
    while (n1<=n)
    {
        printf("\n%d",n1);
        n1++;
    }
    
}