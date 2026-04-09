//count no of character,digit and special character from  a string.
#include<stdio.h>
#include<string.h>
int main()
{
	int size;
	printf("enter your string size:");
	scanf("%d",&size);
	char str[size];
	int i,length,no_char=0,digit=0,special_char=0;
	printf("enter a string:");
	scanf("%s",str);
	length=strlen(str);
	for(i=0;i<length;i++)
	{
		if((str[i]>='a' && str[i]<='z')||(str[i]>='A' && str[i]<='Z'))
		{
			no_char+=1;
		}
		else if(str[i]>='0' && str[i]<='9')
		{
			digit+=1;
		}
		else
		{ 
			special_char+=1;
		}
	}
	printf("No of character=%d\nNo of digit=%d\nspecial character=%d",no_char,digit,special_char);
	return 0;	
}
