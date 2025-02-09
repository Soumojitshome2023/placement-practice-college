// Write a program to display the sequence A1, B2, C3, ...., Y25, Z26, A1, B2,

#include <stdio.h>

int main() {
    int i, n = 30;
    for(i = 0; i < n; i++) {
        printf("%c%d ", 'A' + (i % 26), (i % 26) + 1);
    }
    return 0;
}

