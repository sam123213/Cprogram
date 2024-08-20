//remove last occurrance of a character from string

#include<stdio.h>
void main()
{
    char str[50],ch;
    int i=0,j=0,k;
    printf("Enter the string=");
    scanf("%s",str);

    printf("Enter a Character to remove=");
    scanf(" %c",&ch);

    while(str[i]!='\0')
    {
        i++;
    }
    j=i-1;
    while(str[j]!='\0')
    {
        if(ch==str[j])
        {
            for(k=j;str[k]!='\0';k++)
            {
                str[k]=str[k+1];
            }
            break;
        }
        j--;
    }

    printf("String after removing last occurrence of '%c': %s\n", ch, str);
}