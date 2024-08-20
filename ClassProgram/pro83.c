// find string length without built-in function

#include<stdio.h>
void main()
{
    char str[50];
    int cnt=0,i=0;
    printf("Enter the string=");
    scanf("%s",str);
    while(str[i]>'\0')
    {
        cnt++;
        i++;
    }
    printf("Length of string=%d",cnt);

}