// month days

#include<stdio.h>
void main()
{
    int ch;
    printf("Please Choice ! 1:Jan 2:Feb 3:Mar 4:Apr 5:May 6:Jun 7:Jul 8:Aug 9:Sep 10:Oct 11:Nov 12:Dec=");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        printf("It has 31 Days");
        break;

    case 2:
        printf("It has 28/29 Days");
        break;

    case 3:
        printf("It has 31 Days");
        break;

    case 4:
        printf("It has 30 Days");
        break;

    case 5:
        printf("It has 31 Days");
        break;

    case 6:
        printf("It has 30 Days");
        break;    
    
    case 7:
        printf("It has 31 Days");
        break;

    case 8:
        printf("It has 31 Days");
        break;

    case 9:
        printf("It has 30 Days");
        break;

    case 10:
        printf("It has 31 Days");
        break;

    case 11:
        printf("It has 30 Days");
        break;

    case 12:
        printf("It has 31 Days");
        break;

    default:
        printf("Invalid Input");
        break;
    }
}