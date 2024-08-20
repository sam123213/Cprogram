// Area of rectangle using 1 category

#include<stdio.h>
int area(int,int);
void main()
{
    int l,b,par;
    printf("Enter the lenth and breadth of Rectangle=");
    scanf("%d %d",&l,&b);

    par=area(l,b);
    printf("The area of rectangle=%d",par);
}

int area(int l, int b)
{
    return l*b;
}