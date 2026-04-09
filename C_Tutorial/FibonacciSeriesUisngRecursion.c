//fibonacci series using recursion.
#include<stdio.h>
int fibo(int n)
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
		return fibo(n-1)+fibo(n-2);
	}
}
int main()
{
	int i,m;
	printf("Enter how many teram do you want to print:");
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		printf("%d\t",fibo(i));	
	}
	return 0;
}
