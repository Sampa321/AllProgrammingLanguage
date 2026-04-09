#include<stdio.h>
int main()
{
	FILE *ptr;
	ptr = NULL;
	//ptr=fopen("mamon.txt","w");
	if(ptr==NULL)
	{
		printf("File is not allocated");
	}
	else
	{
		printf("File is allocated");
	}
	return 0;
}

/*#include<stdio.h>
int main()
{
	FILE *ptr;
	ptr = NULL;
//	ptr=fopen("C:\\file\\sam.txt","r");
	if(ptr==NULL)
	{
		printf("Memory is not Allocated");
	}
	else
	{
		printf("Memory is allocated");
	}
	return 0;
}*/
