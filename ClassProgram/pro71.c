// simple code Array

#include<stdio.h>
void main()
{
    int a[7];
    a[0]=10;
    a[1]=20;
    a[2]=20;
    a[3]=40;
    a[4]=50;
    a[5]=60;
    a[6]=70;
    
    printf("Array Elements are as Follows:\n");
    for(int i=0;i<7;i++)
    {
        printf("%d\t",a[i]);
    }
}