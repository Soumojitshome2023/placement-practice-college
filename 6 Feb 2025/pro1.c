// C program to display prime numbers between two intervals.

#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) {
        return 0; // Numbers less than 2 are not prime
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // Divisible by a number other than 1 and itself
        }
    }
    return 1; // Prime number
}

int main() {
    int start, end;

    // Input the interval
    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);

    // Displaying prime numbers in the interval
    printf("Prime numbers between %d and %d are:\n", start, end);

    for (int num = start; num <= end; num++) {
        if (isPrime(num)) {
            printf("%d ", num);
        }
    }

    printf("\n");
    return 0;
}

/*

Enter the starting number: 10
Enter the ending number: 50
Prime numbers between 10 and 50 are:
11 13 17 19 23 29 31 37 41 43 47



*/
