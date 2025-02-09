// Write a program to display the sequence 1, 4, 9, 16, 25, 36, 49,

#include <stdio.h>

int main() {
    int i, n = 10;  // Display first 10 terms
    for(i = 1; i <= n; i++) {
        printf("%d ", i * i);
    }
    return 0;
}

