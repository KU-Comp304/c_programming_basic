#include <stdio.h>
int main(void)
{
	int i = 0, in;
	FILE *fptr;
	fptr = fopen("myfile.txt","r");
	if(fptr == NULL)
	{
		printf("Could not open file for reading\n");
		return -1;
	}
	for(i = 0; i < 10; i++)
	{
		fscanf(fptr, "%d", &in);
		printf("%d\n", in);
	}
	fclose(fptr);
	return 0;
}
