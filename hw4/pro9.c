//print all perfect numbers between given interval using functions.

#include <stdio.h>

// Function to check whether a number is perfect
int checkPerfect(int num) {
    int i, sum = 0;
    for (i = 1; i < num; ++i) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return (sum == num); // Returns 1 if perfect, else 0
}

// Function to print perfect numbers between start and end
void PerfectNumbers(int start, int end) {
    while (start <= end) {
        if (checkPerfect(start)) {
            printf("%d, ", start);
        }
        start++;
    }
}

int main() {
    int start, end;

    printf("Enter lower limit to print perfect numbers: ");
    scanf("%d", &start);
    printf("Enter upper limit to print perfect numbers: ");
    scanf("%d", &end);

    printf("All perfect numbers between %d and %d are: ", start, end);
    PerfectNumbers(start, end);

    return 0;
}
