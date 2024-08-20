// call by referance using user difine function

#include<stdio.h>
void swap(int*,int*);

void main()
{
    int a,b;
    printf("Enter two No.");
    scanf("%d %d",&a,&b);
    printf("Before Swap A=%d and B=%d",a,b);
    swap(&a,&b);
    printf("\nAfter swap main fun A=%d and B=%d",a,b);
}

void swap(int *x, int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    printf("\nAfter swap A=%d and B=%d",*x,*y);
}