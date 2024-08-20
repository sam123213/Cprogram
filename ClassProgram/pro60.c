// find power of given No. using all 4 category

#include<stdio.h>
int power1(int, int);
int power2();
void power3(int, int);
void power4();

void main()
{
    int b,e,ans;
    printf("Enter the Base and Exponent");
    scanf("%d %d",&b,&e);

    printf("Using first category power=%d",power1(b,e));

    ans=power2();
    printf("\nUsing Second category power=%d",ans);
    

    printf("\nUsing third category=");
    power3(b,e);

    printf("\nUsing Forth category=");
    power4();

}

int power1(int b, int e)
{
    int i,pow=1;
    for(i=1;i<=e;i++)
    {
        pow=pow*b;
    }
    return pow;
}

int power2()
{
    int i,pow=1,b,e;
    printf("\nEnter the Base and Exponent");
    scanf("%d %d",&b,&e);

    for(i=1;i<=e;i++)
    {
        pow=pow*b;
    }
    //printf("power=%d",pow);
    return pow;
}

void power3(int b,int e)
{
    int i,pow=1;
    for(i=1;i<=e;i++)
    {
        pow=pow*b;
    }
    printf("%d",pow);
}

void power4()
{
    int i,pow=1,b,e;
    printf("\nEnter the Base and Exponent");
    scanf("%d %d",&b,&e);

    for(i=1;i<=e;i++)
    {
        pow=pow*b;
    }
    printf("power=%d",pow);
}