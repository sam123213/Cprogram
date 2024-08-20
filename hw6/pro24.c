//remove all repeated character from a given string

#include<stdio.h>
#include<string.h>
void main()
{
    char str[50];
    int i,j,k;
    int len;

    printf("Enter the string=");
    scanf("%s",str);

    len=strlen(str);
    //printf("%d",len);

    for(i=0;i<len;i++)
    {
        for(j=i+1;j<len;j++)
        {
            if(str[i]==str[j])
            {
                for(k=j;k<len;k++)
                {
                    str[k]=str[k+1];
                }
                len--;
                j--;
            }
        }
    }
    
    printf("String after removing repeated characters: %s\n", str);
}