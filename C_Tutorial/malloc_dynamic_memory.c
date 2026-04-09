//malloc using dynamic memory allocated
#include<stdio.h>
//#include<stdlib.h>
int main()
{
	int *ptr;
	ptr=(int*)malloc(5*sizeof(int));
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
