//check palindrome using inbuild method
#include <stdio.h>
#include <string.h>
int main()
{
	char str[20],rev[20];
	printf("enter your char:");
	gets(str);
	 
	strcpy(rev,str);
	strrev(rev);
	if(strcmp(str,rev)==0)
	{
		printf("%s is palindrome string",str);
	}
	else
	{
		printf("%s is not palindrome string",str);
	}
	return 0;
}
