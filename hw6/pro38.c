//remove all extra blank spaces from given string

#include<stdio.h>
#include<string.h>
void main()
{
    char str[50];
    int i,j=0,slen;
    printf("Enter the string=");
    gets(str);

    slen=strlen(str);

    while(str[j]==' ')
    {
        j++;
    }

    for(i=j;i<slen;i++)
    {
       if(str[i]!=' '||(i>j && str[i-1]!=' '))
       {
            str[j++]=str[i];
       }
    }

    if(j>0 && str[j-1]==' ')
    {
        j--;
    }
    str[j]='\0';

    printf("String after removing extra spaces: \"%s\"\n", str);
}