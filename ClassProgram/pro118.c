//simple code to write and reading file

#include<stdio.h>
void main()
{
    FILE *fp;
    char ch[50];
    fp=fopen("t3.txt","w");
    fprintf(fp,"Hello kalpesh");
    fclose(fp);
    
    fp=fopen("t3.txt","r");
    fscanf(fp,"%s",ch);
    printf("File contents are as follows:%s",ch);
    fclose(fp);

}