#include <stdio.h>
int main() 
{
    int a, b;
    
    printf("Enter a: ");
    scanf("%d", &a);
    
    printf("Enter b: ");
    scanf("%d", &b);
    
    if (a>b)
    {
        printf("%d", a);
    }
    else if (a<b)
    {
        printf("%d", b);
    }
    else 
    {
    	printf("%d and %d both numbers are equal.", a, b);
	}

    return 0;
}