    #include <stdio.h>

    int main(void) {
        int digit;

        printf("Enter a three-digit number: ");
        scanf("%d", &digit);
        printf("The reversal is: %d%d%d", (digit % 10), (digit / 10 % 10), (digit / 100));

        return 0;
    }
