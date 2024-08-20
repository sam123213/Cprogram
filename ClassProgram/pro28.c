//check no. is armstrong

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
		//printf("\t%d",rem);
		rev=rev+(rem*rem*rem);
		//printf("\t%d",rev);
		n=n/10;
	}
	if(rev==temp)
	{
		printf("Given No. is Armstrong");
	}
	else
	{
		printf("Given No. is not Armstrong");
	}
}