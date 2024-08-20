// call by value using fuction

#include<stdio.h>
void call_by_value(int,int);

void main()
{
    int a,b;
    printf("Enter the two No.");
    scanf("%d %d",&a,&b);

    printf("Before swap A=%d and B=%d",a,b);

    call_by_value(a,b);

}

void call_by_value(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("\nAfter swap A=%d and B=%d",a,b);
}