//count ncr number.
#include<stdio.h>
int fact(int n)
{
	int f=1,i;
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	return f;
}
int main()
{
	int n1,r,nfact,rfact,n_rfact,result;
	printf("enter two number:");
	scanf("%d%d",&n1,&r);
	nfact=fact(n1);
	rfact=fact(r);
	n_rfact=fact(n1-r);
	result=nfact/(rfact*n_rfact);
	printf("NCR=%d",result);
	return 0;
}
