//check whether a number is Perfect number or not

#include <stdio.h>
int main() {
    int number, i=1, sum = 0;

    // Input a number from the user
    printf("Enter the number: ");
    scanf("%d", &number);

   
    while (i < number) 
    {
        if (number % i == 0) 
        {
            sum =sum+i;
        }
        i++;
    }

    // Check if the sum of proper divisors equals the original number
    if (sum == number && number > 0) 
    {
        printf("%d is a PERFECT NUMBER\n", number);
    } 
    else 
    {
        printf("%d is NOT a PERFECT NUMBER\n", number);
    }

    return 0;
}
