    #include <stdio.h>

    int main(void) {
        int digitOne, digitTwo, digitThree;

        printf("Enter a three-digit number, each one individually: ");
        scanf("%d%d%d", &digitOne, &digitTwo, &digitThree);
        printf("The reversal is: %d%d%d", digitThree, digitTwo, digitOne);

        return 0;
    }
