// check input is no., alpha, small char.

#include<stdio.h>
void main()
{
	char n;
	printf("Enter the No. or Char or Alpha:");
	scanf("%c",&n);
	if(n>=65 && n<=90)
	{
		printf("The given input is Alpha");
	}
	else if(n>=97 && n<=122)
	{
	    printf("The given input is Small Char");	
	}
	else if (n>=48 && n<=57)
	{
		printf("The given input is No.");
	}
}