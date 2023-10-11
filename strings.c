#include <stdio.h>
#include <string.h>
  
int main()
{
	char course[8]="COMP";
	char code[4]="304";
	char favcourse[10];
	int len1 = strlen(course);           // len1 = 4 
	int len2 = strlen(code);             // len2 = 3
    
	strcat(course, code);              // course="COMP304"
	strcpy(favcourse, course);         // favcourse="COMP304"
	printf("course: %s, favcourse: %s\n", course, favcourse);
	return 0;
} 
