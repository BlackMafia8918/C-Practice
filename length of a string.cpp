#include <stdio.h>
int main()
{
	char str[50], t;
	int length=0, i, j;
	
	printf("Enter a string: ");
	scanf("%s", &str);
	
	while (str[length] != '\0')
	{
		length++;
	}
	
	gets(str);
	i = 0;
	j = strlen(str) - 1;
	while (i<j)
	{
		t = str[i];
		str[i] = str[j];
		str[j] = t;
		i++;
		j--;
	}
	
	
	printf("Length of the string is: %d\n", length);
	
	printf("Reverse string is: %s\n", str);
	
	return 0;
}
