// swaping two no.

#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    printf("Enter Two No.:");
    scanf("%d %d",&a ,&b);
    printf("Before swap A=%d and B=%d",a ,b);
    c=a;
    a=b;
    b=c;
     printf("\nAfter swap A=%d and B=%d",a ,b);
}
