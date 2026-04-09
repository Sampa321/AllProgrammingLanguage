//Two string concate using inbuild method.
#include<stdio.h>
#include<string.h>
int main()
{
	char str[30],str1[30];
	printf("Enter your first string:");
	scanf("%s",&str);
	printf("Enter your last string:");
	scanf("%s",&str1);
	printf("First string:%s\n",str);
	printf("Last string:%s\n",str1);
	strcat(str," ");
	strcat(str,str1);
	printf("Concate string:%s",str);
	return 0;
}
