/*#include<stdio.h>
int main()
{
	int size;
	printf("enter the string size:");
	scanf("%d",&size);
	char name[size];
	//take string input:
	printf("enter your string:");
	scanf("%s",&name);//%s is accessspecifier of string
	printf("%s",name);
	return 0;
}*/

#include<stdio.h>
int main()
{
	char name[20];
	//take string input:
	printf("enter your string:");
	gets(name);//%s is accessspecifier of string
	printf("%s",name);
	return 0;
}
