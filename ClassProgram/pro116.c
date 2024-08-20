//simple code file handling

#include<stdio.h>
void main()
{
    FILE *fp;
    char ch;
    fp=fopen("t1.txt","w");
    printf("File created success");
    fputc('H',fp);
    fputc('E',fp);
    fputc('L',fp);
    fputc('L',fp);
    fputc('O',fp);

    printf("\nData saved in file");
    fclose(fp);

    fp=fopen("t1.txt","r");
    printf("\nRead contents from file:");

    while((ch=fgetc(fp))!=-1)
    {
        printf("%c",ch);
    }
    fclose(fp);
}