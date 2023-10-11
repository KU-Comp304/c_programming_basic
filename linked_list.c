#include <stdio.h>
#include <stdlib.h>
 
struct Node
{
	int data;
	struct Node *nxt;
};

int main(void)
{
	struct Node* first = (struct Node*)malloc(sizeof(struct Node));
	struct Node* sec  = (struct Node*)malloc(sizeof(struct Node));
	struct Node* third = (struct Node*)malloc(sizeof(struct Node));
    
	first->data = 10;
	first->nxt = sec;
	sec->data = 20;
	sec->nxt = third;
	third->data = 30;
	third->nxt = NULL;
	
	struct Node* ptr = first;
	
	while(ptr != NULL) 
	{
		printf("%d ", ptr->data);
		ptr = ptr->nxt;
	}       
	printf("\n");
	return 0;
}
