//Toggle case String

#include<stdio.h>
void main()
{
    char str[50];
    int i=0;
    printf("Enter the string=");
    scanf("%s",str);

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i]=str[i]-32;
        }
        else if(str[i]>='A' && str[i]<='Z')
        {
            str[i]=str[i]+32;
        }
    }
    printf("Toggle case String=%s",str);
}