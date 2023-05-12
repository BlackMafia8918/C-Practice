#include <stdio.h>
int main()
{
	int x=10;
	char ch='A';
	void *gp;
	gp=&x;
	printf("\n Generic pointer points to the integer value: %d", *(int*)gp);
	gp=&ch;
	printf("\n Generic pointer now points to the character: %c", *(char*)gp);
	return 0;
}



//{
//	int *pnum;
//	char *pch;
//	float *pfnum;
//	double *pdnum;
//	printf("Size of integer is %d\n", sizeof(pnum));
//	printf("Size of character is %d\n", sizeof(pch));
//	printf("Size of float is %d\n", sizeof(pfnum));
//	printf("Size of double is %d\n", sizeof(pdnum));
//}




// {
//		int x=10, *p;
//		p=&x;
//		printf("%u\n", p);
//		printf("\n%d", *p);	
// } 