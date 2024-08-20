//print upper and lower case without built-in function
#include<stdio.h>
int main()
{
    char a[50];
    int i=0;
    printf("enter the string=");
    scanf("%s",a);
    printf("original string=%s",a);
    while(a[i]!='\0')
    {
        if(a[i]>='a' && a[i]<='z')
        {
            a[i]=a[i]-32;
        }
        i++;
    }
    printf("\nUppercase the string=%s",a);

    i=0;
    while(a[i]!='\0')
    {
        if(a[i]>='A' && a[i]<='Z')
        {
            a[i]=a[i]+32;
        }
        i++;
    }
    printf("\nLowercase the string=%s",a);
    return 0;
}