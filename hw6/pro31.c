//count occurrence of a word in a given string

#include<stdio.h>
#include<string.h>
void main()
{
    char str[50],wrd[50];
    int i,j,slen,wlen,flag,cnt=0;

    printf("Enter the string=");
    gets(str);

    printf("Enter the word to find=");
    scanf("%s",wrd);

    slen=strlen(str);
    wlen=strlen(wrd);

    for(i=0;i<=slen-wlen;i++)
    {
        flag=1;
        for(j=0;j<wlen;j++)
        {
            if(str[i+j]!=wrd[j])
            {
                flag=0;
            }
        }
        if (flag==1) 
        {
            cnt++;
        }
    }
    printf("\nThe word '%s' occurs %d time(s) in the string.\n", wrd, cnt);
}