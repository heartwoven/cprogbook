#include <stdio.h>

int main(void) {
	int variable;
	int result; 
	
	printf("Enter a value for x: ");
	scanf("%d", &variable);
	
	result = ((((((((3 * variable) + 2) * variable) - 5) * variable) - 1) * variable) + 7) * variable - 6;
	
	printf("The value of the polynomial is %d", result);
	return 0;	
}