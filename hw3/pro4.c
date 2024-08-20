// print even no. from 1 to 100

#include<stdio.h>
void main()
{
    int n=1;

    while (n<=100)
    {
        if(n%2==0)
        {
            printf("\nEven numbers between 1 to 100=%d",n);
            
        }
        n++;
    }
    
}