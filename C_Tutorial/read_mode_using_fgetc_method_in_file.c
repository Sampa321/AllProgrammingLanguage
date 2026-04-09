//For read
#include<stdio.h>
int main()
{
	FILE *ptr;
	ptr=fopen("sampa.txt","r");
	if(ptr==NULL)
	{
		printf("file is not open successfully");
	}
	else
	{
		char ch;
		printf("file open successfully");
		while((ch=fgetc(ptr))!=EOF)
		{
			printf("%c",ch);
		}
	}
	return 0;
}
