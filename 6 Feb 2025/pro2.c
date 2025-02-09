// Write a program to calculate the power of a number.

#include <stdio.h>

// Function to calculate the power
long long power(int base, int exponent) {
    long long result = 1;
    
    // Loop to calculate base raised to the power exponent
    for (int i = 1; i <= exponent; i++) {
        result *= base;
    }
    
    return result;
}

int main() {
    int base, exponent;
    
    // Input base and exponent
    printf("Enter the base: ");
    scanf("%d", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exponent);
    
    // Calculate and display the result
    long long result = power(base, exponent);
    printf("%d raised to the power %d is: %lld\n", base, exponent, result);
    
    return 0;
}

/*

Enter the base: 2
Enter the exponent: 5
2 raised to the power 5 is: 32

*/


