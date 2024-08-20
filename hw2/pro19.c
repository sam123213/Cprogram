// check gross salary.

#include<stdio.h>
void main()
{
    int bs,hra,da,gr;
    int hra1,hra2,da1;
   
    printf("Enter the Basic Salary:");
    scanf("%d",&bs);

    printf("Enter the HRA in Per%:");
    scanf("%d",&hra);

    printf("Enter the DA in Per%:");
    scanf("%d",&da);

    hra1=(hra*bs)/100;
    	
    da1=(da*bs)/100;
    printf("\nHRA=%d",hra1);
    printf("\nDa=%d",da1);
    hra2=hra1+da1;
    gr=hra2+bs;
   

    if (bs==10000)
    {   
        printf("\nGross Salary=%d",gr);
	}
    else if (bs==20000)
    {
        printf("\nGross Salary=%d",gr);
    }
    else 
    {
        printf("\nGross Salary=%d",gr);
    }
    

}