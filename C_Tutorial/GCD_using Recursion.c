//GCD between two number using recursion.
#include <stdio.h>
int gcd(int n1,int n2)
{
	if(n2!=0)
	{
		return gcd(n2,n1%n2);
	}
	else
	{
		return n1;
	}
}
int main()
{
	int m,n,i;
	printf("enter two numbers:");
	scanf("%d%d",&m,&n);
 	int r=gcd(m,n);
	printf("GCD=%d",r);
	return 0;
}
