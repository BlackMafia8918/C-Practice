#include <stdio.h>
#include <string.h>

int main()
{
	char str[100], temp[100];
	
	printf("\nEnter the string: ");
	gets(str);
	
	printf("\nEnter temp: ");
	gets(temp);
	
	if (str==temp)
	{
		printf("\nString copied");
	}
	else 
	{
		printf("\nString not copied");
	}
		
	return 0;
}