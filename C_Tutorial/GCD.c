//GCD between two numbers.
#include<stdio.h>
int main()
{
	int n1,n2,i,f=0;
	printf("enter two number:");
	scanf("%d%d",&n1,&n2);
	for(i=1;i<=n1;i++)
	{
		if(n1%i==0 && n2%i==0)
		{
			f=i;
		}
	}
	printf("GCD=%d",f);
	return 0;
}
