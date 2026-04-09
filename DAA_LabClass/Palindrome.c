#include<stdio.h>
int main()
{
	int n;
	printf("enter the number:");
	scanf("%d",&n);
	int reverse=0;
	int t=n;
	while(n!=0)
	{
		int r=n%10;
		reverse=reverse*10+r;
		n/=10;
	}
	if(t==reverse)
	{
		printf("%d is palindrome number",t);
	}
	else
	{
		printf("%d is not palindrome number",t);
	}
	return 0;
}
