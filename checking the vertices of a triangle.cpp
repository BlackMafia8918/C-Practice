#include <stdio.h>
int main()
{
	int a,b,c;
	
	printf("Enter a: ");
	scanf("%d", &a);
	
	printf("Enter b: ");
	scanf("%d", &b);
	
	printf("Enter c: ");
	scanf("%d", &c);
	
	if (a+b>c & a+c>b & b+c>a)
	{
		printf("%d, %d and %d are the vertices of a Triangle", a, b, c);
	}
	else
	{		
		printf("%d, %d and %d are not the vertices of a Triangle", a, b, c);
	}
	
	return 0;
}