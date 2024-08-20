// simle code callloc function

#include<stdio.h>
#include<stdlib.h>
void main()
{
    char *c;
    int len;
    printf("Enter the length of string=");
    scanf("%d",&len);
    c=(char*)calloc(len,sizeof(char));
    printf("Enter the string=");
    scanf("%s",c);
    printf("String=%s",c);
}