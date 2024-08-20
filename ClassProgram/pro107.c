#include<stdio.h>
struct chairs
{
    char cname[50];
    char ccolor[50];
    int cprice;
};
void main()
{
    struct chairs a[50];
    int s,i;
    printf("How many chairs:");
    scanf("%d",&s);

    for(i=0;i<s;i++)
    {
        printf("Enter the chairs Name,Colour,Price:\n");
        scanf("%s %s %d",a[i].cname,a[i].ccolor,&a[i].cprice);
    }

    printf("Book details are as follows:\n");
    for(i=0;i<s;i++)
    {
        printf("\nChairs Name=%s\t Colour=%s\t Price=%d\t",a[i].cname,a[i].ccolor,a[i].cprice);
    }
}