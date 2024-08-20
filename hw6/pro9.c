//find vowels and consonants

#include<stdio.h>
void main()
{
    char str[50];
    int i=0,c1=0,c2=0;
    printf("Enter the string=");
    scanf("%s",str);

    while(str[i]!='\0')
    {
        if(str[i]=='a' || str[i]=='A' || str[i]=='e' || str[i]=='E' || str[i]=='i' || str[i]=='I' || str[i]=='o' || str[i]=='O' || str[i]=='u' || str[i]=='U')
        {
            c1++;
        }
        else
        {
            c2++;
        }
        i++;
    }
    printf("No. of Vowels into the string=%d",c1);
    printf("\nNo. of Consonants into the string=%d",c2);    
}