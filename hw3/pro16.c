//enter a no. and print its reverse.

#include <stdio.h>

void main() 
{
    int n, rev = 0, rem;

    // Input an integer from the user
    printf("Enter any number: ");
    scanf("%d", &n);

    // Reverse the number
    while (n != 0) 
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n=n/10;
    }

    printf("Reversed number = %d\n", rev);

}
