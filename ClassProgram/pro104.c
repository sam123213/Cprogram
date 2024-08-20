#include<stdio.h>
struct emp
{
    int empid;
    char empname[50];
    float empsal;
};
void main()
{
    struct emp e1,e2;
    printf("Enter the ID,Name,Salary for Emp1:\n");
    scanf("%d %s %f",&e1.empid,&e1.empname,&e1.empsal);

    printf("Enter the ID,Name,Salary for Emp2:\n");
    scanf("%d %s %f",&e2.empid,&e2.empname,&e2.empsal);

    printf("Employee 1 Details are as follows:\n");
    printf("ID=%d\t Name=%s\t Salary=%f\t",e1.empid,e1.empname,e1.empsal);

    printf("\nEmployee 2 Details are as follows:\n");
    printf("ID=%d\t Name=%s\t Salary=%f\t",e2.empid,e2.empname,e2.empsal);
}