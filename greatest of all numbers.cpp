#include <stdio.h>
int main() 
{
    int a, b, c;
    
	printf("Enter a:");
	scanf("%d", &a);
	
	printf("Enter b:");
	scanf("%d", &b);
	
	printf("Enter c:");
	scanf("%d", &c);
	
	if (a>=b & a>=c)
	{
		printf("%d is Greatest of all numbers.", a);
	}
	else if (b>=a & b>=c)
	{
		printf("%d is Greatest of all numbers.", b);
	}
	else if(c>=a & c>=b) 
	{
		printf("%d is Greatest of all numbers.", c);
	}
	else
	{
		printf("%d, %d and %d are all Equal", a, b, c);
	}
	

    return 0;
}