// even no.

#include<stdio.h>
void main()
{
	int i,n;
	printf("Enter the Range");
	scanf("%d",&n);
	printf("Even No. given range:");
	
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			printf("%d\t",i);
		}
	}
}