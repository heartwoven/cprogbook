#include <stdio.h>

int main(void) {
    int gsi, group, publisher, item, check;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &gsi, &group, &publisher, &item, &check);

    printf("GSI prefix: %d\nGroup Identifier: %d\n", gsi, group);
    printf("Publisher code: %d\nItem number: %d\nCheck digit: %d\n", publisher, item, check);

    return 0;
}
