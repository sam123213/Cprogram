//count occurrunces of a character in given string

#include<stdio.h>
void main()
{
    char str[50],ch;
    int i=0,flag=0,cnt=0;

    printf("Enter the string=");
    scanf("%s",str);

    printf("Enter the char you want to search=");
    scanf(" %c",&ch);

    while(str[i]!='\0')
    {
        if(str[i]==ch)
        {
            cnt=cnt+1; 
            flag=1;
        }
        i++;
    }

    if(flag==0)
    {
        printf("%c is not present in the string",ch);
    }
    else
    {
        printf("The character %c occurs %d times in the string.",ch,cnt);
    }
}
