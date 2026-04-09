//Check both string is equal or not using inbuild method.
#include<stdio.h>
#include<string.h>                                                                               
int main()
{
	char str[30],str1[30];
	printf("Enter your first string:");
	gets(str);
	printf("Enter your last string:");
	gets(str1);
	if(strcmp(str,str1)==0)
	{
		printf("Both string are equal");
	}
	else
	{
		printf("Both string are not equal");	
	}
	return 0;
}
