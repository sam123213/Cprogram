// swaping two no. using 3 catagory

#include<stdio.h>
void swap(int,int);
void main()
{
    int a,b;
    printf("Enter the two No.=");
    scanf("%d %d",&a,&b);
    printf("Before swap No. %d and %d",a,b);
    swap(a,b);
    
}

void swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("\nAfter swap No. %d and %d",a,b);
}