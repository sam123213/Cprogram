//find highest frequency character in a string

#include<stdio.h>
void main()
{
    char str[50],maxchar;
    int i=0,j=0,temp=0,cnt=0,cnt1=0;

    printf("Enter the string=");
    scanf("%s",str);

    while(str[i]!='\0')
    {
        cnt=0;
        for(j=0;str[j]!='\0';j++)
        {
            if(str[j]==str[i])
            {
                cnt++; 
                //flag=1;
            }
        
        }

        if(cnt>temp)
        {
            temp=cnt;
            cnt1=cnt;
            maxchar=str[i];
        }

        i++;
        
    }
    printf("The highest frequency character is '%c' with a count of %d\n", maxchar, cnt1);

}