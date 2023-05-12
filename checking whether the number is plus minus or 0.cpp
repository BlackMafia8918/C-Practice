#include <stdio.h>
int main() 
{
    int a, b, c;
    
	printf("Enter a: ");
	scanf("%d", &a);

	if (a>0)
	{
		printf("%d is +ve", a);
	}
	else if (a<0)
	{
		printf("%d is -ve", a);
	}
	else
	{
		printf("Given number %d is neither -ve nor +ve.", a);
	}
	
    return 0;
}