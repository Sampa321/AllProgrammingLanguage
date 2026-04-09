//count npr number.
#include<stdio.h>
int fact(int n)
{
	int i,f=1;
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	return f;
}
int main()
{
	int n1,r,nfact,n_rfact,npr;
	printf("enter the value of n and r:");
	scanf("%d%d",&n1,&r);
	nfact=fact(n1);
	n_rfact=fact(n1-r);
	npr=nfact/n_rfact;
	printf("npr=%d",npr);
	return 0;
}

 
