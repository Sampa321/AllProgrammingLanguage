 //Reverse string using inbuild method.
#include<stdio.h>
#include<string.h>                                                                               
int main()
{
	char str[30];
	printf("Enter your first string:");
	gets(str);
	printf("Original string:%s\n",str);
	strrev(str);
	printf("Reverse string:%s\n",str);
	return 0;
}
