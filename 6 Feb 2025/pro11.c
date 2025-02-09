// Write a program to display the sequence 14, 28, 20, 40, 32, 64

#include <stdio.h>

int main() {
    int i, n = 10;
    for(i = 0; i < n; i++) {
        if(i % 2 == 0)
            printf("%d ", 14 * (i / 2 + 1));  // 14, 28, 20, ...
        else
            printf("%d ", 40 * (i / 2 + 1));  // 40, 64, ...
    }
    return 0;
}

