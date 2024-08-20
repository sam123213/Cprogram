#include<stdio.h>
struct Employees
{
    int empid;
    char empname;
    struct DOB
    {
        int dd,mm,yy;
    }d;
}e;
void main()
{
  printf("Enter Employees ID,Name,Date of Birth=\n");
  scanf("%d %s %d %d %d",&e.empid,&e.empname,&e.d.dd,&e.d.mm,&e.d.yy);

  printf("Employees ID=%d\t Name=%d\t Date of Birth=%d-%d-%d",e.empid,e.empname,e.d.dd,e.d.mm,e.d.yy);
}