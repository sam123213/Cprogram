//search all occurrence of character in a given string

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

    printf("The all occurrence of %c is at index=",ch);
    while(str[i]!='\0')
    {
        if(str[i]==ch)
        {
            printf("%d\t",i);
            flag=1;
        }
        i++;
    }

    if(flag==0)
    {
        printf("%c is not present in the string",ch);
    }

}