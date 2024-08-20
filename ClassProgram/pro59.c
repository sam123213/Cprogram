// find area of circle using 4 categor

#include<stdio.h>
void area();
float const pi=3.14;

void main()
{
    area();
}

void area()
{
    float r;
    printf("Enter the Radius=");
    scanf("%f",&r);
    printf("Area of Circle=%ff",pi*r*r);
}