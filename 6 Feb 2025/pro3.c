// Write a program to calculate the sum of n natural numbers.

#include <stdio.h>

// Function to calculate the sum of first n natural numbers
int sumOfNaturalNumbers(int n) {
    return (n * (n + 1)) / 2;  // Formula for sum of first n natural numbers
}

int main() {
    int n;
    
    // Input the value of n
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    
    // Check if the entered number is positive
    if (n < 1) {
        printf("Please enter a positive integer greater than 0.\n");
    } else {
        // Calculate and display the sum
        int sum = sumOfNaturalNumbers(n);
        printf("The sum of the first %d natural numbers is: %d\n", n, sum);
    }
    
    return 0;
}

/*

Enter a positive integer: 5
The sum of the first 5 natural numbers is: 15


*/
