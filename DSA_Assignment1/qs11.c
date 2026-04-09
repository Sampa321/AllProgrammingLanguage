//11.Write a c program to find the sum of following series:1+1/2+1/3+1/4+1/5+....+1/N
#include<stdio.h>
int main()
{
	int n;
	printf("enter your number:");
	scanf("%d",&n);
	float i,sum=0;
	for(i=1;i<=n;i++)
	{
		sum+=(1/i);
	}
	printf("sum=%f",sum);
	return 0;
}
