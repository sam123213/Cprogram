//The given number is Divisible or not Divisible of 5 and 11

#include<stdio.h>
void main()
{
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	if(n%5==0 || n%11==0)
	{
		printf("The given number is Divisible of 5 and 11");
	}
	else
	{
		printf("The given number is Not Divisible of 5 and 11");	
	}
}