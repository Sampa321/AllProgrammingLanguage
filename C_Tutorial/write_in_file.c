//For write something a file
#include<stdio.h>
int main()
{
	FILE *ptr;
	ptr=fopen("sampa.txt","w");
	if(ptr==NULL)
	{
		printf("file is not create successfully");
	}
	else
	{
		printf("file create successfully");
	}
//	fprintf(ptr,"My name is sampa Nayak");
	fprintf(ptr,"I am a student of svu");
	printf("\nwrite successfully");
	return 0;
}
