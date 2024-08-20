// switch case condition
// calculater

#include<stdio.h>
void main()
{
    int a,b,ch;
    printf("Enter First No.:");
    scanf("%d",&a);
    printf("Enter Second No.:");
    scanf("%d",&b);
    printf("Please Choice ! 1:Addition  2:Substraction  3:Multiplication  4:Division=");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        printf("Addition=%d",a+b);
        break;
    
    case 2:
        printf("Substraction=%d",a+b);
        break;

    case 3:
        printf("Multiplication=%d",a+b);
        break;
    
    case 4:
        printf("Division=%d",a+b);
        break;

    default:
        printf("Invalid Input");
        break;
    }

}