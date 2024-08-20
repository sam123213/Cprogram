//find area and perimeter of the square and rectangle

#include<stdio.h>
void main()
{
    float len,wid,area,perimeter;
    printf("Enter the Length of the Square and Rectangle:");
    scanf("%f",&len);
    printf("Enter the Width of the Square and Rectangle:");
    scanf("%f",&wid);
    area=len*wid;
    printf("The Area of Rectangle and Square:%f",area);

    perimeter=2*(len+wid);
    printf("\nThe Perimeter of Rectangle and Square:%f",perimeter);
}