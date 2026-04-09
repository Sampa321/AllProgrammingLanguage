//Frequency count of a char in a string.
#include<stdio.h>
int main()
{
	char name[30],search;
	printf("enter a string:");
	gets(name);
	printf("enter a search character:");
	scanf("%c",&search);
	int i=0,f=0;
	while(name[i]!=0)
	{
		if(name[i]==search)
		{
			f+=1;
		}
		i++;
	}
	printf("%c is present %d times of %s",search,f,name);
	return 0;
}
