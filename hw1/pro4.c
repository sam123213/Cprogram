//convert from fahrenheit to degree celsius

#include<stdio.h>
void main()
{
    int f,c;
    printf("Enter the Fahrenheit Temp:");
    scanf("%d",&f);
    c=(f-32)*5/9;
    printf("Fahrenheit Temp is converted into Degree Celsius:%d",c);
}