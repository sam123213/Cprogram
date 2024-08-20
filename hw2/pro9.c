//check the char is digit,Alpha,special char.

#include<stdio.h>
void main()
{
    char ch;
    printf("Enter the Character=");
    scanf("%c",&ch);
    if(ch>=65 && ch<=90 || ch>=97 && ch<=122)
    {
        printf("This character is Alphabet");
    }
    else if(ch>=48 && ch<=57) 
    {
        printf("This character is Digit");
    }
    else
    {
        printf("This is special Character");
    }
}