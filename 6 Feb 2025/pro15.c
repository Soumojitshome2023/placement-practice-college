// Write a program to display the sequence BCA1, BCB2, BCC3, BCD4

#include <stdio.h>

int main() {
    int i, n = 10;
    char letter = 'B';
    for(i = 1; i <= n; i++) {
        printf("%c%c%c%d ", letter, letter + 1, letter + 2, i);
        letter++;
    }
    return 0;
}

