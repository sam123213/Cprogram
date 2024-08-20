//check the given char is Alpha

#include<stdio.h>
void main()
{
    char ch;
    printf("Enter the Character=");
    scanf("%c",&ch);
    if(ch>=65 && ch<=90 || ch>=97 && ch<=122)
    {
        printf("This character is Alpha");
    }
    else  
    {
        printf("This character is Not Alpha");
    }
   
}