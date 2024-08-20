// print reverse string without built-in function

#include<stdio.h>
void main()
{
    char a[50],b[50];
    int cnt=0,i,end;
    printf("Enter the String=");
    scanf("%s",a);
    printf("Orignal String=%s",a);
    while(a[cnt]!='\0')
    {
    	cnt++;
	}
    end=cnt-1;
    for(i=0;i<cnt;i++)
    {
        b[i]=a[end];
        end--;
    }
    b[end]='\0';
    printf("\nReverse string=%s",b);
}