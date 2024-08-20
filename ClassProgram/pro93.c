//comparison both string without built-in function

#include<stdio.h>
void main()
{
    char a[50],b[50];
    int i=0,flag=0;
    printf("Enter the first string=");
    scanf("%s",a);
    printf("Enter the second string=");
    scanf("%s",b);

    while(a[i]!='\0'|| b[i]!='\0')
    {
        if(a[i]==b[i])
        {
            flag=1;
            i++;
        }
        else
        {
            printf("String are not Equal");
            break;
        }
    }
    if(flag==1 && a[i]=='\0' && b[i]=='\0')
    {
        printf("String are equal");
    }
}