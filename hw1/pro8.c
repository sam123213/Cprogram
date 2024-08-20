// total of 5 marks and calculate average
#include<stdio.h>
void main()
{
    int s1,s2,s3,s4,s5,total,average;
    printf("Enter the marks of Sub1:");
    scanf("%d",&s1);
    printf("Enter the marks of Sub2:");
    scanf("%d",&s2);
    printf("Enter the marks of Sub3:");
    scanf("%d",&s3);
    printf("Enter the marks of Sub4:");
    scanf("%d",&s4);
    printf("Enter the marks of Sub5:");
    scanf("%d",&s5);
    total=s1+s2+s3+s4+s5;
    printf("Total Marks:%d",total);
    average=total/5;
    printf("\nAverage of the Marks:%d",average);
}