//string convert to lowercase

#include<stdio.h>
void main()
{
    char str[50];
    int i=0;
    printf("Enter the string=");
    scanf("%s",str);

    while(str[i]!='\0')
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i]=str[i]+32;
        }
        i++;

    }
    printf("Lowercase String=%s",str);
}