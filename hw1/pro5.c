//simple two no. calculator

#include<stdio.h>
void main()
{
    int a,b,add,sub,mul,div;
    printf("Enter First and Second number:");
    scanf("%d %d",&a ,&b);
    add=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    printf("Addition=%d || Substraction=%d || Multiplication=%d || Division=%d",add,sub,mul,div);

}