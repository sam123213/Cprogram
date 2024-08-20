//sum of all digits of a no.
#include <stdio.h>

void main() 
{
    int n,d,sum=0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0) {
        d = n % 10; 
        //printf("\t%d",d);// Extract the last digit
        sum=sum + d; 
        //printf("\t%d",sum);    // Add the digit to the sum
        n =n/10;        // Remove the last digit
        //printf("\t%d",n);
    }

    printf("The sum of the digits is: %d\n", sum);

}
