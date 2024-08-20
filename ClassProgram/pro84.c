// print reverse string using built-in function

#include<stdio.h>
#include<string.h>
void main()
{
    char str[50];
    
    printf("Enter the String=");
    scanf("%s",str);
    printf("Reverse string=%s",strrev(str));
}