//print reverse of a string.
#include<stdio.h>
#include<string.h>
int main()
{
	char str[30],rev[30];
	printf("enter a string:");
	scanf("%s",str);
	int length,i,j=0;
	length=strlen(str);
	for(i=length-1;i>=0;i--)
	{
		rev[j]=str[i];
		j++;
	}
	
	printf("original string:%s\n",str);
	printf("reverse string:%s",rev);
	return 0;
}
