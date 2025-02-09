// Write a program to display the sequence 1, 2, 4, 7, 11

#include <stdio.h>

int main() {
    int i, n = 10, term = 1;
    for(i = 1; i <= n; i++) {
        printf("%d ", term);
        term += i;  // Increase by 1, 2, 3, 4, ...
    }
    return 0;
}

