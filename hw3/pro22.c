//find all factors of a number. 

#include <stdio.h>

int main() {
    int num, i = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    printf("Factors of %d are: ", num);
    while (i <= num) {
        if (num % i == 0) 
        {
            printf("%d ", i);
        }
        i++;
    }

    return 0;
}
