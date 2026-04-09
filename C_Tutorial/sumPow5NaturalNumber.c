//print sum of (1^5+2^5+3^5+4^5+.....+n^5).
#include <stdio.h>
#include <Math.h>
int main()
{
	int i,n,sum=0;
	printf("enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+pow(i,5);
	}
	printf("sum pow5 of natural number=%d",sum);
	return 0;
}
