//WAP to print "welcome" 10 times using while loop.
#include<stdio.h>
int main()
{
	char str[100];
	int i=1;
	printf("enter the string:");
	scanf("%s",&str);
	while(i!=11){
		printf("%s\n",str); //%s is access specifier
		i++;
	}
	return 0;
}
