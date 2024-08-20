//print all Armstrong numbers between given interval using functions

#include <stdio.h>
#include <math.h>

// Function to check whether a number is an Armstrong number
int isArmstrong(int num) {
    int temp, lastDigit, sum;
    temp = num;
    sum = 0;

    // Calculate the sum of cubes of digits
    while (temp != 0) {
        lastDigit = temp % 10;
        sum = sum + pow(lastDigit, 3); // Cube the digit
        temp= temp / 10;
    }

    // Check if the sum of cubes equals the original number
    return (num == sum);
}

// Function to print Armstrong numbers between start and end
void printArmstrong(int start, int end) {
    while (start <= end) {
        if (isArmstrong(start)) {
            printf("%d, ", start);
        }
        start++;
    }
}

int main() {
    int start, end;

    // Input lower and upper limits
    printf("Enter the lower limit to print Armstrong numbers: ");
    scanf("%d", &start);
    printf("Enter the upper limit to print Armstrong numbers: ");
    scanf("%d", &end);

    printf("Armstrong numbers between %d and %d are: ", start, end);
    printArmstrong(start, end);

    return 0;
}
