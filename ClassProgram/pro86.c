//copied string using built-in function

#include<stdio.h>
#include<string.h>
void main()
{
    char a[50],b[50];
    printf("Enter the string=");
    scanf("%s",a);
    printf("\nOriginal string=%s",a);
    printf("\nCopied string=%s",strcpy(b,a));
}
