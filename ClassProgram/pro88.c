// print string upper and lower case using built-in function

#include<stdio.h>
#include<string.h>
void main()
{
    char str[50];
    printf("Enter the string=");
    scanf("%s",str);
    printf("\nUppercase the string=%s",strupr(str));
    printf("\nLowercase the string=%s",strlwr(str));
}