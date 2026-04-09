//print square sum of odd number.
#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i+=2)
	{
		sum=sum+i*i;
	}
	printf("square sum of odd number=%d",sum);
	return 0;
}
