//concatenates both string

#include<stdio.h>
void main()
{
    char a[50],b[50],c[50];
    int i=0,j=0;
    printf("Enter the first string=");
    scanf("%s",a);
    printf("Enter the second string=");
    scanf("%s",b);

    while(a[i]!='\0')
    {
        i++;
    }
    printf("%d",i);
    //a[i]-1;
    while(b[j]!='\0')
    {
        a[i]=b[j];
        i++;
        j++;
    }
    a[i]='\0';
    printf("Concatenates string=%s",a);
}