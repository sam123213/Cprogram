//trim both leading and trailing white space character from given string

#include<stdio.h>
#include<string.h>
void main()
{
    char str[50];
    int i,srt=0,end;

    printf("Enter the String=");
    gets(str);

    while(str[srt]==' '||str[srt]=='\n'||str[srt]=='\t')
    {
        srt++;
        //printf("%d\t",srt);
    }  

    if(str[srt]=='\0')
    {
        str[0]='\0';
        return;
    }

    end=strlen(str)-1;

    while(end>=srt && str[srt]==' '||str[srt]=='\n'||str[srt]=='\t')
    {
        end--;
    }
    for(i=srt;i<=end;i++)
    {
        str[i-srt]=str[i];
    }
    str[i-srt]='\0';

    printf("String after trimming leading and trailing spaces: '%s'\n", str);
}