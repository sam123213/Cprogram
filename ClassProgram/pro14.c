// enter the three subject mark and find the total,average,percentage,grade.

#include<stdio.h>
void main()
{
    float s1,s2,s3,total,average;
	float per;
    printf("Enter the marks of Sub1:");
    scanf("%f",&s1);
    printf("Enter the marks of Sub2:");
    scanf("%f",&s2);
    printf("Enter the marks of Sub3:");
    scanf("%f",&s3);
    
    total=s1+s2+s3;
    printf("Total Marks:%f",total);
    average=total/3;
    printf("\nAverage of the Marks:%f",average);
    per=(total/300)*100;
    printf("\n Percentage:%f",per);
     
    if (per>=70)
    {
    	printf("\n Grade A");
	}
	else if(per>=50 && per<70)
	{
		printf("\n Grade B");
	}
	else if(per>=35 && per<50)
	{
		printf("\n Pass");
	}
    else
    {
    	printf("\n Fail");
	}
    
}