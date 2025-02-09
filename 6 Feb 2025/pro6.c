// Write a program to display the sequence 1, 2, 4, 8, 16, 32, 64,

#include <stdio.h>

int main() {
    int i, n = 10;  // Display first 10 terms
    for(i = 0; i < n; i++) {
        printf("%d ", 1 << i);  // 1 shifted left i times is 2^i
    }
    return 0;
}

