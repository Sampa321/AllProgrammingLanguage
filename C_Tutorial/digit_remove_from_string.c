//digit remove of a string using for loop.
#include<stdio.h>
#include<string.h>
int main()
{
	char str[30],rem[30];
	int i,length,j=0;
	printf("enter a string:");
	scanf("%s",str);
	length=strlen(str);
	for(i=0;i<length;i++)
	{
		if(str[i]>='0' && str[i]<='9')
		{
			continue;
		}
		rem[j]=str[i];
		j++;
	}
	printf("%s is original string\n",str);
	printf("%s is remove string",rem);
	return 0;
}

//Digit remove of a string using while loop .
/*#include<stdio.h>
#include<string.h>
int main()
{
	char str[30],rem[30];
	printf("enter your string:");
	scanf("%s",str);
	int i=0,j=0;
	while(str[i]!=NULL)
	{
		if(str[i]>='0' &&  str[i]<='9')
		{
			i++;
			continue;
		}
		rem[j]=str[i];
		j++;
		i++;
	}
	rem[j]='\0';
	printf("original str:%s\n",str);
	printf("after remove digit,string=%s",rem);
	return 0;
}*/
