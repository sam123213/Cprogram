// area of circle

#include<stdio.h>
#include<conio.h>
const float pi=3.14f;
void main()
{
    float r,area;
    printf("Enter radius of circle:");
    scanf("%f",&r);
    area=pi*r*r;
    printf("Area of circle:%f",area);
}