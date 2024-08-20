//compare the three no. which no. is big

#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter Three No.:");
    scanf("%d %d %d",&a,&b,&c);
    if (a>b && a>c)
    {
       printf("A no. is big:%d",a);
    }
    else if (b>c && b>a)
    {
        printf("B no. is big:%d",b);    
    }
    else if(c>b && c>a)
    {
       printf("C no. is big:%d",c); 
    }
}