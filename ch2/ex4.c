#include <stdio.h>

int main(void) {

    int phoneOne, phoneTwo, phoneThree;

    printf("Enter phone number [(xxx) xxx-xxxx)]: ");
    scanf("(%d) %d-%d", &phoneOne, &phoneTwo, &phoneThree);
    printf("You entered %d.%d.%d", phoneOne, phoneTwo, phoneThree);

    return 0;
}
