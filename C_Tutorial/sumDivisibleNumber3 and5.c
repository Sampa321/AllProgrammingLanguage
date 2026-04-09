//sum (1-50) number which is divisible by 3 and 5.
#include <stdio.h>
int main()
{
	int i,n,sum=0;
	printf("enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%3==0 && i%5==0)
		{
			sum=sum+i;
		}
	}
	printf("sum of number which is divisible by 3 and 5=%d",sum);
	return 0;
}

