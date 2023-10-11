#include <stdio.h>

int main(void)
{
	int i = 0, in;
	FILE *fptr;
	fptr = fopen("myfile.txt","w");
	if(fptr == NULL)
	{
		printf("Could not create file\n");
		return -1;
	}
	for(i = 0; i < 10; i++)
	{
		scanf("%d", &in);
		fprintf(fptr, "%d\n", in);
	}
	fclose(fptr);
}
