//sum of n natural number using recursion.
#include<stdio.h>
int sum(int n)
{
	if(n==0)
	{
		return 0;
	}
	else if(n==1)
	{
		return 1;
	}
	else 
	{
		return n+sum(n-1);
	}
}
int main()
{
	int n1;
	printf("enter the number:");
	scanf("%d",&n1);
	int result=sum(n1);
	printf("sum of %d number=%d",n1,result);
	return 0;
}
