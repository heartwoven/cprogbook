#include <stdio.h>

int main(void) {
	int variable;
	int square;
	int cube;
	int fourth;
	int fifth;
	int result;
	
	printf("Enter a value for x: ");
	scanf("%d", &variable);
	
	square = variable * variable;
	cube = square * variable;
	fourth = cube * variable;
	fifth = fourth * variable;
	
	result = (3 * fifth) + (2 * fourth) - (5 * cube) - square + (7 * variable) - 6;
	printf("The value of the polynomial is %d", result);
	
	return 0;
}