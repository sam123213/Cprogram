//remove all occurrence of a word in a given string

#include<stdio.h>
#include<string.h>

void main()
{
    char str[50],wrd[50];
    int i,j,k,slen,wlen;

    printf("Enter the string=");
    gets(str);

    printf("Enter the word to remove=");
    scanf("%s",wrd);

    slen=strlen(str);
    wlen=strlen(wrd);

    for(i=0;i<=slen-wlen;i++)
    {
        for(j=0;j<wlen;j++)
        {
            if(str[i+j]!=wrd[j])
            {
                break;
            }
        }
        if(j==wlen)
        {
            for(k=i;k<=slen-wlen;k++)
            {
                str[k]=str[k+wlen];
            }
            slen=slen-wlen;
        }
        else
        {
            i++;
        }
    }
    printf("\nResulting string: %s\n", str);
}