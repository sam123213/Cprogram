#include<stdio.h>
struct Depart
{
    int did;
    char dname[50];
    int demp;
};
void main()
{
    struct Depart a[50];
    int s,i;

    printf("How many Department=");
    scanf("%d",&s);

    for(i=0;i<s;i++)
    {
        printf("Department ID,Name,Employees=\n");
        scanf("%d %s %d",&a[i].did,a[i].dname,&a[i].demp);
    }

    printf("Departments details are as follows=\n");
    for(i=0;i<s;i++)
    {
        printf("\nDepartments ID=%d\t Name=%s\t Employees=%d",a[i].did,a[i].dname,a[i].demp);
    }
}