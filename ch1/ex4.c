#include <stdio.h>

int main(void)
{
 float value;
 printf("Enter an amount: ");
 scanf("%f", &value);
 
 printf("With tax added: %.2f", value + (value * 0.05));
 
 return 0;
}