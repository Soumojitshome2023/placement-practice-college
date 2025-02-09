// Write a program to display the sequence A1, B2, C4, D8, E16, F32,

#include <stdio.h>

int main() {
    int i, n = 6;
    for(i = 0; i < n; i++) {
        printf("%c%d ", 'A' + i, 1 << i);  // A1, B2, C4, D8, ...
    }
    return 0;
}

