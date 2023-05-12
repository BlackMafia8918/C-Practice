#include <stdio.h>
int main()
{   char str[100], ch;
    int count = 0, i;

    printf("Enter a string: ");
    gets(str);

    printf("Enter the alphabet to count: ");
    scanf("%c", &ch);

    for(i = 0; str[i] != '\0'; i++) 
    {
        if(ch == str[i])
            count++;
    }
printf("'%c' occurs %d times in the given string.", ch, count, str);

return 0;
}