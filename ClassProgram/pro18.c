// value before and after inc 

#include<stdio.h>
void main()
{
	int a,b;
    a=45;
    printf("Value of a before inc=%d",a);
    printf("\nValue of b before inc=%d",b);

    b=--a;

    printf("\nValue of a after inc=%d",a);
    printf("\nValue of b after inc=%d",b);
}