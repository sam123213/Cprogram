//print odd no. 1 to 100

#include<stdio.h>
void main()
{
    int n=1;
    while(n<=100)
    {
        if(n%2!=0)
        {
            printf("\nodd number between 1 to 100=%d",n);
        }
        n++;
    }
}