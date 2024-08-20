#include<stdio.h>
struct student
{
    int srno;
    char sname[50];
    char saddres[100];

    struct course 
    {
        int cid;
        char cname[50];
        int cfees;
    };
};
void main()
{
    struct student a[50];
    struct course b[50];
    int s,i;
    printf("How many students each course=");
    scanf("%d",&s);

    for(i=0;i<s;i++)
    {
        printf("Student Roll No.,Name,Address,course ID,Course Name,Course Fees=\n");
        scanf("%d %s %s %d %s %d",&a[i].srno,a[i].sname,a[i].saddres,&b[i].cid,b[i].cname,&b[i].cfees);
    }

    printf("Students detail are as follows:\n");
    for(i=0;i<s;i++)
    {
        printf("\nStudent Roll No.=%d\t Name=%s\t Address=%s\t course ID=%d\t Course Name=%s\t Course Fees=%d",a[i].srno,a[i].sname,a[i].saddres,b[i].cid,b[i].cname,b[i].cfees);   
    }
}