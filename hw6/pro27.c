//replace all occurrences of a character with another in a string

#include<stdio.h>

void main()
{
    char str[50],rmc,nwc;

    printf("Enter the string=");
    scanf("%s",str);

    printf("Enter the character to be replaced:");
    scanf(" %c",&rmc);

    printf("Enter the new character:");
    scanf(" %c",&nwc);

    for(int i=0;i<sizeof(str);i++)
    {
        if(rmc==str[i])
        {
            str[i]=nwc;
        }
    }

    printf("String after replacement: %s", str);
}