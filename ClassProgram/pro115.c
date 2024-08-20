//using structure malloc

#include<stdio.h>
#include<stdlib.h>
struct books
{
    int bid;
    char bname[50];
    int bprice;
};
void main()
{
    struct books *b;

    int s,i;
    printf("Enter how many books=");
    scanf("%d",&s);

    b=(struct books*)malloc(sizeof(struct books)*s);
    for(i=0;i<s;i++)
    {
        printf("\nEnter the book ID,Name,Price=\n");
        scanf("%d %s %d",&(b+i)->bid,(b+i)->bname,&(b+i)->bprice);
    }

    printf("\nBooks Details are as follows=\n");
    for(i=0;i<s;i++)
    {
        printf("\nBook ID=%d\t Name=%s\t Price=%d",(b+i)->bid,(b+i)->bname,(b+i)->bprice);
    }
}