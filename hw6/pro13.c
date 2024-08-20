//Reverse order of words in a given string

#include<stdio.h>
void main()
{
    char str1[50],str2[50];
    int i=0,cnt=0,j=0;
    printf("enter the string=");
    gets(str1);
    while(str1[i]!='\0')
    {
        cnt++;
        i++;
    }
    j=cnt-1;
    
    for(i=0;i<cnt;i++)
    {
        str2[i]=str1[j];
        j--;
    }
    str2[i]='\0';
    printf("Reverse order of words in a given string=%s",str2);
    
}