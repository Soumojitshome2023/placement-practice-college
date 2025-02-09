// C program to find the sum of first n prime numbers.

#include <stdio.h>

int is_prime(int n) {
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int n, sum = 0, count = 0, num = 2;
    printf("Enter the number of primes: ");
    scanf("%d", &n);
    
    while(count < n) {
        if(is_prime(num)) {
            sum += num;
            count++;
        }
        num++;
    }
    
    printf("Sum of first %d primes: %d\n", n, sum);
    return 0;
}

