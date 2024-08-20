//check no. is Palindrome

#include<stdio.h>
void main()
{
	int n,rem,rev=0,temp;
	printf("Enter the value of n=");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		rem=n%10;
		rev=(rev*10)+rem;
		n=n/10;
		//printf("\t%d",rev);
	}
	if(rev==temp)
	{
		printf("Given No. is Palindrome");
	}
	else
	{
		printf("Given No. is not Palindrome");
	}
}