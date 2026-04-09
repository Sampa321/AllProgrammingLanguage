//print sum of cube natural numbers.
#include <stdio.h>
#include <Math.h>
int main()
{
	int i,n,sum=0;
	printf("enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+pow(i,3);
	}
	printf("sum cube of natural number=%d",sum);
	return 0;
}

/*#include <stdio.h>
int main()
{
	int n,sum;
	printf("enter the number:");
	scanf("%d",&n);
	sum=pow((n*(n+1)),2)/4;
	printf("sum cube of natural number=%d",sum);
	return 0;
}*/
