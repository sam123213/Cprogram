//remove all occurrences of a character from string

#include<stdio.h>
void main()
{
    char str[50],ch;
    int i=0,j;

    printf("enter the string=");
    scanf("%s",str);

    printf("Enter a character to you want to remove the string=");
    scanf(" %c",&ch);
    
    while(str[i]!='\0')
    {
        if(ch==str[i])
        {
            for(j=i;str[j]!='\0';j++)
            {
                str[j]=str[j+1];
            }
        }
        i++;
    }

    printf("String after removing '%c': %s\n", ch, str);
}