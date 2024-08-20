//find lowest frequency character ia a string

#include<stdio.h>
void main()
{
    char str[50],minchar;
    int i=0,j=0,cnt=0,temp=0;
    int a[50];
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
        a[i]=cnt;
        i++;
    }
    temp=sizeof(a);
    i=0;
    while(a[i]!=0)
    {
        if(a[i]<temp)
        {
            temp=a[i];
            minchar=str[i];
        }
        i++;
    }
    printf("The lowest frequency character is '%c' with a count of %d\n", minchar, temp);

}