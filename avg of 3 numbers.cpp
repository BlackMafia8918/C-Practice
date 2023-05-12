#include <stdio.h>
int main()
{
	int a, b, c; 
	float avg;
	
	printf("Enter the 1st number: ");
	scanf("%d", &a);
	
	printf("Enter the 2nd number: ");
	scanf("%d", &b);
	
	printf("Enter the 3rd number: ");
	scanf("%d", &c);
	
	avg = (a+b+c)/3;
	printf("Average of %d, %d and %d is: %.2f", a, b, c, avg);
	
	return 0;
}