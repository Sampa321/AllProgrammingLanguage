//Find out length of a string using inbuild method.
#include<stdio.h>
#include<string.h>
int main()
{
	char name[30];
	int i=0,length;
	printf("enter a string:");
	gets(name);
 	length=strlen(name);
 	printf("count length of a string:%d",length);
 	return 0;
}
