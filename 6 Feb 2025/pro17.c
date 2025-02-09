// C program to display the sequence ABA, BCB, CDC, DED,

#include <stdio.h>

int main() {
    char letter = 'A';
    int i, n = 4;
    for(i = 0; i < n; i++) {
        printf("%c%c%c ", letter, letter + 1, letter + 2);
        letter++;
    }
    return 0;
}

