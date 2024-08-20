//total words in a string

#include<stdio.h>
void main()
{
    char str[50];
    int i=0,c1=1;
    printf("Enter the string=");
    gets(str);
   while(str[i]!='\0')
   {
        if(str[i]==' ' || str[i]=='\n' || str[i]=='\t')
        {
            c1++;
        }
        i++;
   } 
   printf("Total words in a string=%d",c1);
}