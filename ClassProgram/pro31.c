// calculater

#include<stdio.h>
void main()
{
    int a,b,ch;
   
    do
    {
        printf("\nPlease Choice Anyone ! 1:Addition 2:Substraction 3:Multiplication 4:Division 5:Thanks=");
        scanf("%d",&ch);
    
        switch(ch)
        {
            
            case 1:
            printf("\nEnter the first No.=");
            scanf("%d",&a);
            printf("Enter the Second No.=");
            scanf("%d",&b);
            printf("Addition=%d",a+b);
            break;

            case 2:
            printf("\nEnter the first No.=");
            scanf("%d",&a);
            printf("Enter the Second No.=");
            scanf("%d",&b);
            printf("Substraction=%d",a-b);
            break;

            case 3:
            printf("\nEnter the first No.=");
            scanf("%d",&a);
            printf("Enter the Second No.=");
            scanf("%d",&b);
            printf("Multiplication=%d",a*b);
            break;

            case 4:
            printf("\nEnter the first No.=");
            scanf("%d",&a);
            printf("Enter the Second No.=");
            scanf("%d",&b);
            printf("Division=%d",a/b);
            break;

            case 5:
            printf("Thanks!");
            break;
        }
    } while (ch!=5);
    

}