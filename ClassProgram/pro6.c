//simple interest

#include<stdio.h>
void main()
{
    float p,r,t,si;
    printf("Enter Amount, ROI, Time:");
    scanf("%f %f %f",&p,&r,&t);
    si=(p*r*t)/100;
    printf("Simple Interest:%f",si);
}