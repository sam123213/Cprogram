// simple code while loop
//sum of all element

#include<stdio.h>
void main() 
{
	int no,sum=0,i=1;
	printf("Enter the No.=");
	scanf("%d",&no);

	while(i<=no)
	{
		sum=i+sum;
		printf("\t%d",i);
		i++;
	}
	printf("\nSum of All Element=%d",sum);
}
