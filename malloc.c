#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n = 6, i = 0;
 
	int *dataPtr = (int *)malloc(sizeof(int) * n);
	if (dataPtr == NULL)
	{
		printf("Error allocating memory\n");
		return -1;
	}    
	for(int i = 0; i < n; i++)
	{ 
		dataPtr[i] = 2 * i;
	}        
	for(int i = 0; i < n; i++)
	{
		printf("%d\n", dataPtr[i]);
	}  
} 
