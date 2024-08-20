//find the length of the string

#include<stdio.h>
void main()
{
    char a[50];
    int i=0;
    printf("Enter the string=");
    scanf("%s",a);
    
    while(a[i]!='\0')
    {
        i++;
    }
    printf("The length of the string=%d",i);
}