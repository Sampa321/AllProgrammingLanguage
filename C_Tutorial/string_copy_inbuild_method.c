//Copy a string in another string.
#include <stdio.h>
#include<string.h>
int main()
{
	char str[30],str1[30];
	printf("enter your string:");
	gets(str);
	printf("Original string:%s",str);
 	strcpy(str1,str);
	printf("\nCopy string:%s",str1);
	return 0;
}
