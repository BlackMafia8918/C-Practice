#include <stdio.h>
int main()
{
//	int a, b;
//	printf("Enter 2 numbes: ");
//	scanf("%d %d", &a, &b);
//	
//	int s = pow(a,b);
//	printf("a to the powerb is: %d", s);

//	int a=5;
//	printf("%d%d%d", --a, a--, a); 

//	int a, b;
//	a=10;
//	b=(++a)+(++a);
//	
//	printf("Desired output is: %d, %d, %d, %d, %d", b,++a,++b,a++,b++);

	int i=10;
	void *p = &i;
	
	printf("%f\n", (float*)p);
	return 0;	
}




