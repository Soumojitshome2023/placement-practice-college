// Write a program to display the series 0, 0, 2, 1, 4, 2, 6, 3, 8, 4


#include <stdio.h>

int main() {
    int i, n = 10;
    for(i = 0; i < n; i++) {
        printf("%d ", (i % 2 == 0) ? 2 * (i / 2) : i / 2);
    }
    return 0;
}

