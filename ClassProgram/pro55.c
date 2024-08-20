// Area of rectangle using 2 category

#include<stdio.h>
int area();
void main()
{
    int a;
    a=area();
    printf("Area of Rectangle=%d",a);
}

int area()
{
    int l,b,a;
    printf("Enter the lenth and breadth of rectangle=");
    scanf("%d %d",&l,&b);

    a=l*b;
    return a;
}