//print square sum of natural number.
#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+i*i;
	}
	printf("square sum of natural number=%d",sum);
	return 0;
}

/*#include<stdio.h>
int main()
{
	int i,n,sum;
	printf("enter the number:");
	scanf("%d",&n);
	sum=(n*(n+1)*(2*n+1))/6;
	printf("square sum of natural number=%d",sum);
	return 0;
}*/
