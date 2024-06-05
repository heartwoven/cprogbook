#include <stdio.h>
#define RADIUS 10
#define PI 3.14f

int main(void)
{
 float piCubed = PI * PI * PI;
 float volume = RADIUS * (4.0f/3.0f) * piCubed;
 printf("The volume of the sphere is %.2f.\n", volume);

 return 0;
}
