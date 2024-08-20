#include<stdio.h>
struct books
{
    int bkid;
    char bkname[50];
    float bkprice;
};
void main()
{
    struct books a[50];
    int i,s;
    printf("How many books:");
    scanf("%d",&s);
    for(i=0;i<s;i++)
    {
        printf("Enter the book ID,Name,Price:");
        scanf("%d %s %f",&a[i].bkid,&a[i].bkname,&a[i].bkprice);
    }

    printf("Book detail are as follows:\n");
    for(i=0;i<s;i++)
    {
        printf("\nBook ID=%d\t Name=%s\t Price=%f\t",a[i].bkid,a[i].bkname,a[i].bkprice);
    }
}
