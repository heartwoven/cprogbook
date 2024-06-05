#include <stdio.h>

int main(void) {
    int itemNumber;
    float unitPrice;
    int day, month, year;

    printf("Enter item number: ");
    scanf("%d", &itemNumber);

    printf("Enter unit price: ");
    scanf("%f", &unitPrice);

    printf("Enter purchase date (mm/dd/yyyy): " );
    scanf("%d/%d/%d", &month, &day, &year);

    printf("Item\t\tUnit\t\tPurchase\n");
    printf("\t\tPrice\t\tDate\n");
    printf("%-4d\t\t$ %6.2f\t%d/%d/%d\n", itemNumber, unitPrice, month, day, year);

    return 0;
}
