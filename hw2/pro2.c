// enter three no. and find which no. is big

#include <stdio.h>

int main() 
{
    int no1, no2, no3;

    printf("Enter the Three Numbers: ");
    scanf("%d %d %d", &no1, &no2, &no3);

    if (no1>no2 && no1>no3) 
    {
        printf("First Number is the largest.");
    } 
    else if (no2>no1 && no2>no3) 
    {
        printf("Second Number is the largest.");
    } 
    else if (no3>no1 && no3>no2) 
    {
        printf("Third Number is the largest.");
    } 
    else 
    {
        printf("Numbers are same.");
    }

    return 0;
}
