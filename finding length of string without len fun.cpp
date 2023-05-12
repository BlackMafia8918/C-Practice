#include <stdio.h>
int main()
{
	char x[100];
	int i=0;
	
	printf("\nEnter string: ");
	gets(x);
	
//	while(x[i]!='\0')
//	{
//		i++;
//	}

	for (i=0; x[i]=='10'; i++)
	{
		count i++;
	}
	
	printf("\nLength of the string is: %d", i);
	return 0;
}