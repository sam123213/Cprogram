// fibonnaci series

#include<stdio.h>
void main()
{
	int n,n1=0,n2=1,n3;
	printf("Enter the Range=");
	scanf("%d",&n);
	printf("Fibonnaci Series is as follows\n");
	printf("%d\t%d\t",n1,n2);
	for(int i=2;i<n;i++)
	{	
		//printf("\n%d\t",f);
		n3=n1+n2;
		printf("%d\t",n3);
		n1=n2;
		n2=n3;
		//printf("\n%d\t",f);
	}
}