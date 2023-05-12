#include <stdio.h>
#include <string.h>
int main()
{
	char name[20];
	char abc[20];
	
	printf("\nFirst string: ");
	gets(name);
	
	printf("\nSecond string: ");
	gets(abc);
	
	printf("\nComparison is: %d", strcmp(name, abc));
	
	return 0;

}
