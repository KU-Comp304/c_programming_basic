#include <stdio.h>
#define PI 3.14159
struct Circle
{
	int center_x, center_y;
	int radius;
};

int main(void)
{
	// Initialization
	struct Circle c1 = {0, 0, 2};
	struct Circle c2 = {.center_x=1.2, .center_y=4, .radius=4};
	struct Circle c3;
	c3.center_x = 3.2;
	c3.center_y = 6.2;
	c3.radius = 4.1; 
	double a1 = 0.0, a2 = 0.0;

	// Accessing structure fields
	a1 = PI * c1.radius * c1.radius;  // Area of c1
	printf("a1: %0.2lf\n", a1);
	return 0;
}
