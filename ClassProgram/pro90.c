//two string concatenate using built-in function

#include<stdio.h>
#include<string.h>
void main()
{
    char a[50],b[50];
    printf("Enter the first string=");
    scanf("%s",a);
    printf("enter the second string=");
    scanf("%s",b);

    printf("Concatenate string=%s",strcat(a,b));
}