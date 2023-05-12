#include <stdio.h>
int reverse(int n)
{
	int a=0, remainder;
	while (n!=0)
	{
		remainder = n%10;
		a=a*10 + remainder;
		n = n/10;
	}
	return a;
}
int main() 
{
	int num, r;
	printf("Enter the number: ");
	scanf("%d", &num);
	
	r = reverse(num);
	printf("Reverse of the %d is: %d", num, r);
	
	return r;	
}