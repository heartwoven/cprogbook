#include <stdio.h>
#define PI 3.14f

int main(void)
{
 float piCubed = PI * PI * PI;
 float radius;
 
 printf("Enter radius: ");
 scanf("%f", &radius);
 
 float volume = radius * (4.0f/3.0f) * piCubed;
 printf("The volume of the sphere is %.2f.\n", volume);
}