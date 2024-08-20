//simple code read and write file

#include<stdio.h>
void main()
{
    FILE *fp;
    char ch[50];
    fp=fopen("t2.txt","w");
    fputs("C was developed by Dennis Ritchie",fp);
    fclose(fp);

    fp=fopen("t2.txt","r");
    fgets(ch,40,fp);
    printf("File contents are as follows:");
    printf("%s",ch);
    fclose(fp);
}