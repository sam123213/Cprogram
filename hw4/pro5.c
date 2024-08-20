//check whether a number is prime, Armstrong or perfect number using functions.

#include <stdio.h>
#include <math.h>

// Function to check whether a number is prime
int isPrime(int num) 
{
    int i;
    for (i = 2; i <= num / 2; ++i) 
    {
        if (num % i == 0) 
        {
            return 0; // Not prime
        }
    }
    return 1; // Prime
}

// Function to check whether a number is Armstrong
int isArmstrong(int num) 
{
    int n,rem,rev=0;
    while(n>0)
	{
		rem=n%10;
		//printf("\t%d",rem);
		rev=rev+(rem*rem*rem);
		//printf("\t%d",rev);
		n=n/10;
	}

    return (rev == num); // Armstrong if true
}

// Function to check whether a number is perfect
int isPerfect(int num) {
    int i, sum = 0;
    for (i = 1; i < num; ++i) 
    {
        if (num % i == 0) 
        {
            sum =sum + i;
        }
    }
    return (num == sum); // Perfect if true
}

int main() {
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);

    if (isPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    if (isArmstrong(num)) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    if (isPerfect(num)) {
        printf("%d is a perfect number.\n", num);
    } else {
        printf("%d is not a perfect number.\n", num);
    }

    return 0;
}
