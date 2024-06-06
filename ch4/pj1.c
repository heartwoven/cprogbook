#include <stdio.h>

int main(void) {
    int digit;

    printf("Enter a two-digit number: ");
    scanf("%d", &digit);
    printf("The reversal is: %d%d", (digit / 10, digit % 10));

    return 0;
}
