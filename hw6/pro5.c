//string convert to uppercase

#include<stdio.h>
void main()
{
    char str[50];
    int i=0;
    printf("Enter the string=");
    scanf("%s",str);

    while(str[i]!='\0')
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i]=str[i]-32;
        }
        i++;

    }
    printf("Uppercase String=%s",str);
}