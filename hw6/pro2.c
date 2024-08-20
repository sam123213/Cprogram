//copied one string to another string

#include<stdio.h>
void main()
{
    char a[50],b[50];
    int i=0;
    printf("Enter the string=");
    scanf("%s",a);
    while(a[i]!='\0')
    {
        b[i]=a[i];
        i++;
    }
    b[i]='\0';
    printf("Copied the string=%s",b);
}