// factorial

#include<stdio.h>
void main()
{
	int i,n,fact=1;
	printf("Enter the no.:");
	scanf("%d",&n);
	for(i=n;i>0;i--)
	{
		fact=fact*i;
		//printf("Factorial of given No.:%d",fact);
	}
	printf("Factorial of given No.:%d",fact);
}