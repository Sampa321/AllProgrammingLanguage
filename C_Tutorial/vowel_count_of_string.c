//Take a string from user and count how many vowel present using while loop.
/*#include<stdio.h>
int main()
{
	char name[30];
	int i=0,v_count=0;
	printf("enter a string:");
	gets(name);
	while(name[i]!=NULL)
	{
		if(name[i]=='a' || name[i]=='e' || name[i]=='i' || name[i]=='o' || name[i]=='u' || 
		name[i]=='A' || name[i]=='E' || name[i]=='I' || name[i]=='O' || name[i]=='U')
		{
			v_count+=1;
		}
		i++;
	}
	printf("vowel present of a string=%d",v_count);
	return 0;
}*/


//Take a string from user and count how many vowel present using for loop.
/*#include<stdio.h>
#include<string.h>
int main()
{
	char str[30];
	int i,length,v_count=0;
	printf("enter a string:");
	gets(str);
	length=strlen(str);
	for(i=0;i<length;i++)
	{
		if(str[i]=='a'|| str[i]=='e'|| str[i]=='i'|| str[i]=='o'|| str[i]=='u'|| str[i]=='A'
		|| str[i]=='E'|| str[i]=='I'|| str[i]=='O'|| str[i]=='U')
		{
			v_count+=1;	
		}
	}
	printf("count of vowel=%d",v_count);
	return 0;
}*/


//Take a string from user and count how many vowel present using do while loop.
#include<stdio.h>
int main()
{
	char name[30];
	printf("enter a string:");
	gets(name);
	int i=0,v_count=0;
	do
	{
		if(name[i]=='a' || name[i]=='e' || name[i]=='i' || name[i]=='o' || name[i]=='u' || 
		name[i]=='A' || name[i]=='E' || name[i]=='I' || name[i]=='O' || name[i]=='U')
		{
			v_count+=1;
		}
		i++;
	}
	while(name[i]!=NULL);
	printf("vowel count=%d",v_count);
	return 0;
}
