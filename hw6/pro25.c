//replace first occurrence of a character with another in a string

#include<stdio.h>
#include<string.h>
void main()
{
    char str[50],rmc,nwc;
    int len,i;

    printf("Enter the string=");
    scanf("%s",str);

    printf("Enter the character to be replaced:");
    scanf(" %c",&rmc);

    printf("Enter the new character:");
    scanf(" %c",&nwc);

    len=strlen(str);

    for(i=0;i<len;i++)
    {
        if(str[i]==rmc)
        {
            str[i]=nwc;
            break;     
        }
    }

    printf("String after replacement: %s", str);
}