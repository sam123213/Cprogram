//two string concatenate without built in function

#include<stdio.h>
void main()
{
    char a[50], b[50];
    int i=0,j=0;
    printf("Enter the first string=");
    scanf("%s",a);
    printf("Enter the second string=");
    scanf("%s",b);
    while(a[i]!='\0')
    {
        i++;
    }
    while(b[j]!='\0')
    {
        a[i]=b[j];
        i++;
        j++;
    }
    a[i]='\0';
    printf("Concatenate string=%s",a);
}