//trim trailing white space character from given string

#include<stdio.h>

void main()
{
    char str[50];
    int i=0,j=0;

    printf("Enter the string=");
    gets(str);

    while(str[i]==' '||str[i]=='\n'||str[i]=='\t')
    {
        i++;
        //printf("%d\t",i);
    }
    

    while(str[j]!='\0')
    {
        str[j++]=str[i++];
    }

    str[j]='\0';

    printf("String after trimming leading spaces: '%s'\n", str);

}