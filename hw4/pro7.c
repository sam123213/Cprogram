//print all strong numbers between given interval using functions.

#include <stdio.h>
// Function to calculate the factorial of a number
int fact(int num) {
    if (num == 0)
        return 1;
    else
        return (num * fact(num - 1));
}

// Function to check if a number is strong
void printStrongNumbers(int start, int end) {
    int sum;
    int num;

    while (start != end) {
        sum = 0;
        num = start;

        // Calculate sum of factorial of digits
        while (num != 0) {
            sum=sum+fact(num % 10);
            num=num / 10;
        }

        // If sum of factorial of digits equals the current number
        if (start == sum) {
            printf("%d, ", start);
        }

        start++;
    }
}

int main() {
    int start, end;

    // Input start and end range
    printf("Enter the lower limit to find strong numbers: ");
    scanf("%d", &start);
    printf("Enter the upper limit to find strong numbers: ");
    scanf("%d", &end);

    printf("All strong numbers between %d and %d are: ", start, end);
    printStrongNumbers(start, end);

    return 0;
}
