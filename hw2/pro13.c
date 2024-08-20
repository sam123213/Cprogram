//enter the amount then check how many note are requared

#include<stdio.h>
void main()
{
    int amount;
    int n500,n100,n50,n20,n10,c5,c2,c1;
    printf("Enter the amount:");
    scanf("%d",&amount);

    if(amount>=500)
    {
        n500=amount/500;
        amount-=n500*500;
        printf("\n500 Notes=%d",n500);
    }
    if(amount>=100)
    {
        n100=amount/100;
        amount=amount-n100*100;
        printf("\n100 Notes=%d",n100);
    }
    if (amount>=50)
    {
        n50=amount/50;
        amount-=n50*50;
        printf("\n50 Notes=%d",n50);
    }
    if(amount>=20)
    {
        n20=amount/20;
        amount-=n20*20;
        printf("\n 20 Notes=%d",n20);
    }
    if(amount>=10)
    {
        n10=amount/10;
        amount-=n10*10;
        printf("\n10 Notes=%d",n10);
    }
    if(amount>=5)
    {
        c5=amount/5;
        amount-=c5*5;
        printf("\n5 Coins=%d",c5);
    }
    if(amount>=2)
    {
        c2=amount/2;
        amount-=c2*2;
        printf("\n2 Coins=%d",c2);
    }
    if(amount>1)
    {
        c1=amount/1;
        amount-=c1*1;
        printf("\n 1 Coins=%d",c1);
    }
    
}