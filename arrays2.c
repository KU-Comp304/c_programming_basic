#include <stdio.h>
#define SIZE 6

int main(void)
{
	int m = 1.2, i = 0;
	float c = -0.2;
	float x[]={1.1, 2.4, 3.7, 4.8, 6.2, 7.5};
	float y[SIZE];
	for(i = 0; i < SIZE; i++)
 	{
		y[i] = m * x[i] + c;      // y = 1.2x-0.2  
	}
	for(i = 0; i < SIZE; i++)
	{
		printf("y[%d]: %0.1f, ", i, y[i]);
	}
	printf("\n");
	return 0;     
}
