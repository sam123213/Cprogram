//product of digits of a number

#include <stdio.h>

void main() {
    int n, d, p = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0) {
        d = n % 10; // Extract the last digit
        p =p*d; // Multiply the digit with the product
        n =n/10;        // Remove the last digit
    }

    printf("The product of the digits is: %d\n", p);

}
