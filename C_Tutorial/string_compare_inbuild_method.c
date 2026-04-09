//Two string comparison using inbuild method.
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
		printf("%s and %s are not equal",str,str1);	
	}
	return 0;
}
