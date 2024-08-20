//count frequency of each character in a string

#include<stdio.h>
void main()
{
    char str[50];
    int i=0,cnt,j,rptchar;
    int a[50];
    printf("Enter the string=");
    scanf("%s",str);

    while(str[i]!='\0')
    {
        cnt=0;
        j=0;
        while(str[j]!='\0')
        {
            if(str[j]==str[i])
            {
                cnt++;
            }
            j++;
        }
        a[i]=cnt;
        i++;
    }
    i=0;

    printf("frequency of each character in a string\n");
    while(str[i]!='\0')
    {
        j=0;
        rptchar=0;
        while(j<i)
        {
            if(str[i]==str[j])
            {
                rptchar=1;
                break;
            }
            j++;
        }
        if(rptchar!=1)
        {
            printf("%c=%d\n",str[i],a[i]);
        }
        i++;
    }
}