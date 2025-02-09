// Write a program to display the sequence 1, 1, 5, 5, 9, 9, 13, 13,

#include <stdio.h>

int main() {
    int i, n = 10, term = 1;
    for(i = 1; i <= n; i++) {
        printf("%d ", term);
        if(i % 2 == 0) term += 4;  // Increase every two terms by 4
        else term += 4;
    }
    return 0;
}

