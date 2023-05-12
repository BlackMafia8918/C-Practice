#include <stdio.h>
int main() 
{
    int a;
    
    printf("Enter the number: ");
    scanf("%d", &a);
    
    if (a%2==0)
    {
    	printf("%d is an Even number", a);
	}
	else
	{
    	printf("%d is an Odd number", a);
	}

    return 0;
}