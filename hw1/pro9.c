//calculate speed

#include<stdio.h>
void main()
{
    int time,distance;
    int speed;
    printf("Enter the Distance per Kilometer:");
    scanf("%d",&distance);
    printf("Enter the Time per hours:");
    scanf("%d",&time);
    speed=distance/time;
    printf("Speed:%d",speed);
}