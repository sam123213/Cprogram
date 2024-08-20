//swap with three var and without three var

#include<stdio.h>
void main()
{
int a,b,temp;
printf("Enter the two No.=");
scanf("%d %d",&a, &b);
printf("Before swap a=%d and b=%d",a,b);
temp=a;
a=b;
b=temp;
printf("\nAfter swap with third Var a=%d and b=%d",a,b);

a=a+b;
b=a-b;
a=a-b;
printf("\nAfter swap without third var a=%d and b=%d",a,b);
}