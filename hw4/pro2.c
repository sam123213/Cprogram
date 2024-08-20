//find diameter, circumference and area of circle using functions.

#include<stdio.h>
float const pi=3.14;
void dia_circu_area(int);

void main()
{
    int rad;
    printf("Enter the radius of circle=");
    scanf("%d",&rad);

    dia_circu_area(rad);
}

void dia_circu_area(int rad)
{
    int d,a,c;
    d=2*rad;
    printf("Diameter of circle=%d",d);

    c=2*pi*rad;
    printf("\nCircumference of circle=%d",c);

    a=pi*(rad*rad);
    printf("\nArea of circle=%d",a);
}