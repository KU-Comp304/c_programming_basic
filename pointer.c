#include <stdio.h>
#define SIZE 4

int main(void)
{
	int data[SIZE] = {10, 45, 90, 23};
	int *dataPtr = &data[0];
	// Print in original order
	for(int i=0; i<SIZE; i++)
	{
		printf("%d\n", *dataPtr);
		dataPtr++;
	}
	// Print reverse
	dataPtr = &data[SIZE-1];
	for(int i = SIZE; i > 0; i--)
	{
		printf("%d\n", *dataPtr);
		dataPtr--;
	}
	return 0;
}
