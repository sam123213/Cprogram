//copied string without built in function

#include<stdio.h>
void main()
{
    char a[50],b[50];
    int i=0;
    printf("Enter the string=");
    scanf("%s",a);
    printf("\nOriginal string=%s",a);
    while(a[i]!='\0')
    {
        b[i]=a[i];
        i++;
    }
    printf("\n Copied string=%s",b);
}
