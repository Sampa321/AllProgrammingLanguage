//count string using inbuild method.
#include<stdio.h>
#include<string.h>
int main()
{
	char str[30];
	printf("enter your string:");
	gets(str);
	int length=strlen(str);
	printf("length of string:%d",length);
	return 0;
}
