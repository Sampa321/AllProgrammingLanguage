//check a string is palindrome or not.
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char str[30],rev[30];
	printf("enter your string:");
	scanf("%s",str);
	int i,j=0,length,f=1;
	length=strlen(str);
	for(i=0;i<length;i++)
	{
		str[i]=tolower(str[i]);
	}
	for(i=length-1;i>=0;i--)
	{
		rev[j]=str[i];
		j++;
	}
	rev[j]='\0';
	for(i=0;i<length;i++)
	{
		if(str[i]!=rev[i])
		{
			f=0;
			break;
		}
	}
	if(f==1)
	{
		printf("%s is palindrome",str);
	}
	else
	{
		printf("%s is not palindrome",str);
	}
	return 0;
}
