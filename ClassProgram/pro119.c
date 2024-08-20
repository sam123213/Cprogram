//using structure student data write and append and read using file handling

#include<stdio.h>
struct student
{
    int srno;
    char sname[50];
    float smark;
};

void main()
{
    int i;
    char ch;
    FILE *fp;
    struct student s[3];
    fp=fopen("t4.txt","a");
    printf("Enter Student deatails:\n");
    for(i=0;i<3;i++)
    {
        printf("Name and Roll No. and Marks=\n");
        scanf("%s %d %f",s[i].sname,&s[i].srno,&s[i].smark);
        fprintf(fp,"\nName=%s\t Roll No.=%d\t Marks=%f",s[i].sname,s[i].srno,s[i].smark);   
    }
    printf("Data Stored in file");
    fclose(fp);

    printf("\nFile Data is as follows=\n");
    fp=fopen("t4.txt","r");
    while((ch=fgetc(fp))!=-1)
    {
        printf("%c",ch);        
    }
    fclose(fp);
}
