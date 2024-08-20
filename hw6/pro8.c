// check string are character or digits os special character

#include<stdio.h>
void main()
{
    char str[50];
    int i=0,c1=0,c2=0,c3=0;
    printf("Enter the string=");
    scanf("%s",str);
    while(str[i]!='\0')
    {
        if(str[i]>='a' || str[i]>='A' && str[i]<='z' || str[i]>='Z')
        {
            c1++;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            c2++;
        }
        else
        {
            c3++;
        }
        i++;
    }
    printf("The No. of Alphabets is present=%d",c1);
    printf("\nThe No. of Digits is present=%d",c2);
    printf("\nThe No. of Special Characters is present=%d",c3);
}