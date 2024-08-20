// sq and cub , even and odd , perimeter

#include<stdio.h>
void main()
{
    int no,ch;
    printf("Please Choice ! 1:Sq and cub 2:Even and Odd 3:Perimeter=");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1:
            printf("Enter the No." );
            scanf("%d",&no);
            printf("Squre=%d",no*no);
            printf("\nCube=%d",no*no*no);
            break;
        
        case 2:
            printf("Enter the No.");
            scanf("%d",&no);
            if (no%2==0)
            {
                printf("Given No. is Prime");
            }
            else 
            {
                printf("Given No. is Odd");
            }
            break;
        
        case 3:
            printf("Enter the parimeter of Squre:");
            scanf("%d",&no);
            printf("Parimeter of Squre=%d",4*no);
            break;
    }
}