#include <stdio.h>
int main()
{
	int n;
	int sum=0;

	printf("Enter the number: ");
	scanf("%d", &n);
	
	for (int i=0; i<n; i++)
	{
		sum += i;
		printf("Sum of digits is: %d", sum);
		
	}
	return 0;
}
//
//int sum(int);
//int main()
//{
//	int i;
//	printf("Enter the number: ");
//	scanf("%d", &i);
//	sum(i);
//}
//int sum(int j)
//{
//	int a, d=0, i=0, b=j;
//	for (i=0; b!=0; i++)
//	{
//		a=b%10;
//		d+=a;
//		a=b/10;
//	}
//	printf("Sum is: %d", d);
//	return 0;
//}