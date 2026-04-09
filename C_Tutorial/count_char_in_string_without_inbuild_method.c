//count character in a string without inbuild method.
#include<stdio.h>
int main()
{
	char name[20];
	printf("enter a string:");
	gets(name);
	int i=0,count=0;
	while(name[i]!=NULL)
	{
		count+=1;
		i++;
	}
	printf("count character in a string=%d",count);
	return 0;
}
