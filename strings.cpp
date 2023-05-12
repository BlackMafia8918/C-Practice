//#include <stdio.h>
//int main()
//{
//	char carname[20];
//	printf("Enter the car name: ");
//	scanf("%s", carname);
//	
//	printf("\nName of the car is: %s", carname);
//	
//}



//#include <stdio.h>
//int main()
//{
//	char name[100];
//	
//	puts("\n Enter a string: ");
//	gets(name);
//	
//	printf("String is: ");
//	puts (name);
//}



//#include <stdio.h>
//int main()
//{
//	char name[] = "Lovely Professional University";
//	
//	int i = 0;
//	
//	while (name[i]!='\0')
//	{
//		printf("%c", name[i]);
//		i++;
//	}
//}



//#include <stdio.h>
//int main()
//{
//	char *p = "Lovely Professional University";
//	
//	int i=0;
//	while (*(p+i) != '\0')
//	{
//		printf("%c", *(p+i));
//	}
//}



#include <stdio.h>
#include <string.h>
int main()
{
	char name[20] = "Let US See";
	char abc[20] = "The Movie";
	
//	strcpy(abc, name);
	
//	printf("\nCopied string is: %s", abc);
	
//	printf("\nLength of the string is: %d", strlen(name));
	
//	printf("\nReverse of the string is: %s", strrev(name));
	
//	printf("\nLowercase of the string is: %s", strlwr(name));
	
//	printf("\nUppercase of the string is: %s", strupr(name));
	
	strcat(name,abc);
	
	printf("\nConcatenated string is: %s", name);
	
	return 0;

}


