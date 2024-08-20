// area of circle using 1 category

#include<stdio.h>
float areaofcircle(float);
float const pi=3.14;
void main()
{
    float r,ans;
    printf("Enter radius:");
    scanf("%f",&r);
    ans=areaofcircle(r);
    printf("Area of circle=%f",ans);
}

float areaofcircle(float r)
{
    return pi*(r*r);
}