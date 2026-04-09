//print indivisual charachter in a string
#include<stdio.h>
int main()
{
	char name[20];
	printf("enter a string:");
	gets(name);
	int i=0;
	while(name[i]!='\0')
	{
		printf("%c\n",name[i]);
		i++;
	}
	return 0;
}
