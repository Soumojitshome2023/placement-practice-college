// Write a program to display the sequence 7, 10, 8, 11, 9, 12,

#include <stdio.h>

int main() {
    int i, n = 10;  // Display first 10 terms
    for(i = 0; i < n; i++) {
        if(i % 2 == 0)
            printf("%d ", 7 + (i / 2));  // 7, 8, 9, ...
        else
            printf("%d ", 10 + (i / 2));  // 10, 11, 12, ...
    }
    return 0;
}

