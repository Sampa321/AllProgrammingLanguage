//memory allocated using dynamic memory allocation calloc method.
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,*ptr;
	printf("No of element:");
	scanf("%d",&n);
	ptr=(int*)calloc(n,sizeof(int));
	if(ptr==NULL)
	{
		printf("Memory is not allocated");
	}
	else
	{
		printf("Memory is allocated\n");
		printf("memory allocated=%d",sizeof(*ptr));
	}
	return 0;
}
