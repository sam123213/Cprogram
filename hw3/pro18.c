//find frequency of each digit in a given integer. 

#include <stdio.h>
int main() {
    int num, n;
    int i, lastDigit;
    int freq[10]; // Initialize frequency array with zeros

    // Input number from user
    printf("Enter any number: ");
    scanf("%d", &num);

    // Initialize frequency array with zeros
    for (i = 0; i < 10; i++) 
    {
        freq[i] = 0;
    }

    // Copy the value of 'num' to 'n'
    n = num;

    // Calculate frequency of each digit
    while (n != 0) {
        lastDigit = n % 10;
        //printf("%d\t",lastDigit);
        freq[lastDigit]++;
        n = n / 10;
        //printf("%d\n",n);
    }

    // Print frequency of each digit
    printf("Frequency of each digit in %d is:\n", num);
    for (i = 0; i < 10; i++) 
    {
        printf("Frequency of %d = %d\n", i, freq[i]);
    }

    return 0;
}
