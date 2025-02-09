// Write a program to display the sequence 21, 9, 21, 11, 21, 13, 21,

#include <stdio.h>

int main() {
    int i, n = 10;
    for(i = 0; i < n; i++) {
        if(i % 2 == 0)
            printf("21 ");
        else
            printf("%d ", 9 + (i - 1) / 2 * 2);  // 9, 11, 13
    }
    return 0;
}

