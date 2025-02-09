/* Read a number from STDIN, then display the sequence given below:
Input: 52934
Output: A5, B2, C9, D3, E4 

*/

#include <stdio.h>

int main() {
    long number;
    printf("Enter a number: ");
    scanf("%ld", &number);
    
    char letters[] = {'A', 'B', 'C', 'D', 'E'};
    int i;
    for(i = 0; i < 5; i++) {
        printf("%c%d, ", letters[i], (number / (long)pow(10, i)) % 10);
    }
    return 0;
}

