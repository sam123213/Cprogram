//find last occurrence index character in a given string

#include<stdio.h>
void main()
{
    char str[50],ch;
    int i=0,flag=0,j=0;
    printf("Enter the string=");
    scanf("%s",str);

    printf("Enter character you want search into the string=");
    scanf(" %c",&ch);

    while(str[i]!='\0')
    {
        i++;
    }
    j=i-1;

    for(i=0;str[i]!='\0';i++)
    {
        if(str[j]==ch)
        {
            flag=1;
            break;
        }
        j--;
    }

    if(flag==0)
    {
        printf("%c is not present in the string",ch);
    }
    else
    {
        printf("The last occurrence of %c is at index %d",ch,j);
    }
}

