// C program to display the sequence AMM, COO, EQQ

#include <stdio.h>

int main() {
    char letters[] = {'A', 'C', 'E'};
    char letter1, letter2;
    int i, n = 4;
    
    for(i = 0; i < n; i++) {
        letter1 = letters[i];
        letter2 = letters[i] + 2;
        printf("%c%c%c ", letter1, letter2, letter2);
        letters[i] += 2;
    }
    return 0;
}

