//calculate factorial of a number. 

#include <stdio.h>
int main() {
    int num, i = 1;
    int factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    while (i <= num) 
    {
        factorial=factorial*i;
        i++;
    }

    printf("Factorial of %d = %d\n", num, factorial);

    return 0;
}
