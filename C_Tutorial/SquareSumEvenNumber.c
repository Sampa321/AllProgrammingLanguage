//print square sum of even number.
#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("enter the number:");
	scanf("%d",&n);
	for(i=2;i<=n;i+=2)
	{
		sum=sum+i*i;
	}
	printf("square sum of even number=%d",sum);
	return 0;
}
