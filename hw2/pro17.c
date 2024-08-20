// check profit loss

#include<stdio.h>
void main()
{
    int sp,cp,p,l;
    printf("Enter the Selling price=");
    scanf("%d",&sp);
    printf("Enter the Cost price=");
    scanf("%d",&cp);

    if(sp>cp)
    {
        p=sp-cp;
        printf("Profit=%d",p);
    }
    else if(cp>sp)
    {
        l=cp-sp;
        printf("Loss=%d",l);
    }
    else
    {
        printf("No Profit and No Loss");
    }
}