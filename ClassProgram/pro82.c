//find string length using built-in function

#include<stdio.h>
#include<string.h>
void main()
{
    char str[50];
    int len;
    printf("Enter the string=");
    scanf("%s",str);
    len=strlen(str);
    printf("Length of string=%d",len);
}