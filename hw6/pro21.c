//remove first occurrence of a character from string

#include<stdio.h>
void main()
{
    char str[50],ch;
    int i=0,j;
    printf("Enter the string=");
    scanf("%s",str);

    printf("Enter a character to remove=");
    scanf(" %c",&ch);

    while(str[i]!='\0')
    {
        if(ch==str[i])
        {
            for(j=i;str[j]!='\0';j++)
            {
                str[j]=str[j+1];
            }
            break;
        }
        i++;
    }

    printf("\nString after removing first occurrence of '%c': %s\n", ch, str);

}