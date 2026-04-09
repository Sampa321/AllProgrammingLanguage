//malloc using dynamic memory allocated for character
#include<stdio.h>
int main()
{
	char *ptr;
	ptr=(char*)malloc(sizeof(char));
	if(ptr==NULL)
	{
		printf("memory is not allocated");
	}
	else
	{
		printf("memory is allocated\n");
		printf("memory allocated=%d",sizeof(*ptr));
	}
	return 0;
}
