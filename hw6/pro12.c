//check string are palindrome or not

#include<stdio.h>
void main()
{
    char str1[50],str2[50];
    int i=0,cnt=0,j=0,flag;
    printf("Enter the string=");
    scanf("%s",str1);
    
    while(str1[i]!='\0')
    {
        cnt++;
        i++;
    }
    j=cnt-1;
    
    for(i=0;i<cnt;i++)
    {
        str2[i]=str1[j];
        j--;
    }
    str2[j]='\0';
    
    i=0;
    while(str2[i]!='\0')
    {
        if(str1[i]==str2[i])
        {
            flag=1;
            //printf("String is palindrome");
        }
        else
        {
            flag=0;
            break;
            //printf("String is not palindrome");
        }
        i++;
    }
    
    if(flag==1)
    {
        printf("\nString is palindrome");   
    }
    else
    {
        printf("\nString is not palindrome");   
    }
}