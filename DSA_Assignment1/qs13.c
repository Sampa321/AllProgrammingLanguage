//13.Write a c program to check whether the user input number is palindrome number or not.
#include<stdio.h>
int main()
{
	int n,temp,r,rev=0;
	printf("enter your number:");
	scanf("%d",&n);
	temp=n;
	while(temp!=0)
	{
		r=temp%10;
		rev=rev*10+r;
		temp=temp/10;
	}
	if(n==rev)
	{
		printf("%d is palindrome number",n);
	}
	else
	{
		printf("%d is not palindrome number",n);
	}
	return 0;
}
