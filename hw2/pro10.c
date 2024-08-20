//enter the alphabet check the geven alpha is upper or lower case

#include<stdio.h>
void main()
{
    char ch;
    printf("Enter the Character=");
    scanf("%c",&ch);
    if(ch>=65 && ch<=90)
    {
        printf("This alphabet is Uppercase");
    }
    else if( ch>=97 && ch<=122) 
    {
        printf("This alphabet is Lowercase");
    }
    
} 