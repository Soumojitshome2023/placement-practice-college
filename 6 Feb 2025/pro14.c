// Write a program to display the sequence A, Z, X, B, V

#include <stdio.h>

int main() {
    char letter1 = 'A', letter2 = 'Z';
    int n = 10;
    for(int i = 0; i < n; i++) {
        if(i % 2 == 0)
            printf("%c ", letter1++);  // A, B, C, ...
        else
            printf("%c ", letter2--);  // Z, Y, X, ...
    }
    return 0;
}

