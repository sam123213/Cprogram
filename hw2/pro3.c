//enter the No. and Check the given No. Pos,zero and Neg 

#include<stdio.h>
void main()
{
    int no;
    printf("Enter the No,");
    scanf("%d",&no);
    if (no>0)
    {
        printf("No. is Postive");
    }
    else if(no==0)
    {
        printf("No. is Zero");
    }
    else if(no<0)
    {
        printf("No. is Negative");
    }
}