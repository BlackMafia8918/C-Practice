#include <stdio.h>
int main() 
{
    float P, R, T, SI;
    
    printf("Enter the Principal Amount: ");
    scanf("%f", &P);
    
    printf("Enter the Rate: ");
    scanf("%f", &R);
    
    printf("Enter the Time (in years only): ");
    scanf("%f", &T);
        
    SI = (P*R*T)/100;    
    printf("Simple Interest of given amount is: %.2f", SI);
    
    return 0;
}