//find first occurrence index character in a given string

#include<stdio.h>
void main()
{
    char str[50];
    char ch;
    int i=0,flag=0;

    printf("Enter the string=");
    scanf("%s",str);

    printf("Enter the character you want to search=");
    scanf(" %c",&ch);

    while(str[i]!='\0')
    {
        if(str[i]==ch)
        {
            flag=1;
            break;
        }
        i++;
    }
    if(flag==0)
    {
        printf("%c is not present in the string",ch);
    }
    else
    {
        printf("The first occurrence of %c is at index %d",ch,i);
    }
}