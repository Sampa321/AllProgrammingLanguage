//null pointer
#include<stdio.h>
int main()
{
	//what is null pointer-->when pointer point is NULL                
	int *ptr=NULL;
	if(ptr==NULL)
	{
		printf("Memory is not allocated");
	}
	else
	{
		printf("Memory is allocated");
	}
	return 0;
}
