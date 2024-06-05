#include <stdio.h>
#define DECIMAL 0.01

int main(void)
{
	float loan, interest, payment, balance;
	
	printf("Enter amount of loan: ");
	scanf("%f", &loan);
	printf("Enter interest rate: ");
	scanf("%f", &interest);
	printf("Enter monthly payment: ");
	scanf("%f", &payment);
	 
	balance = (loan - payment) + (loan * (interest * DECIMAL / 12));
	printf("Balance remaining after first payment: %.2f\n", balance);
	
	balance = (balance - payment) + (balance * (interest * DECIMAL / 12));
	printf("Balance remaining after second payment: %.2f\n", balance);
	
	balance = (balance - payment) + (balance * (interest * DECIMAL / 12));
	printf("Balance remaining after third payment: %.2f\n", balance);
	
	return 0;
}
