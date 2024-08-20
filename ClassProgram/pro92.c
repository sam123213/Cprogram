// comparison both string using built-in function

#include<stdio.h>
#include<string.h>
void main()
{
    char a[50],b[50];
    printf("Enter the first string=");
    scanf("%s",a);
    printf("Enter the second string=");
    scanf("%s",b);

    if(strcmp(a,b))
    {
        printf(" Both String are not equal");
    }
    else
    {
        printf("Both String are equal");
    }
}