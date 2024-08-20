//find both string are equal

#include<stdio.h>
void main()
{
    char a[50],b[50];
    int i=0,flag=0;
    printf("Enter the first string=");
    scanf("%s",a);
    printf("Enter the second string=");
    scanf("%s",b);

    while(a[i]!='\0' || b[i]!='\0')
    {
        if(a[i]==b[i])
        {
            i++;
            flag=1;
        }
        else
        {
            printf("Both string are not Equal");
            break;
        }
        
    }

    if(flag==1 && a[i]=='\0' && b[i]=='\0')
    {
        printf("Both string are Equal");
    }
}
