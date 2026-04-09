//print sum 1st natural numbers.
/*#include <stdio.h>
int main()
{
	int i,n,sum=0;
	printf("enter the number:");
	scanf("%d",&n);
	for (i=0;i<=n;i++){
		sum+=i;
	}
	printf("sum of 1 st natural number=%d",sum);
	return 0;
}*/

#include <stdio.h>
int main()
{
	int i,n,sum=0;
	printf("enter the number:");
	scanf("%d",&n);
	sum=(n*(n+1))/2;
	printf("sum of 1 st natural number=%d",sum);
	return 0;
}
