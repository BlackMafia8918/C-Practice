#include <stdio.h>
int main() 
{
    int a, b, sum=0;
    
    printf("Enter the 1st number: ");
    scanf("%d", &a);
    
    printf("Enter the 2nd number: ");
    scanf("%d", &b);
    
    sum=a+b;
    printf("Sum of %d and %d is: %d", a, b, sum);
    
    return 0;
}