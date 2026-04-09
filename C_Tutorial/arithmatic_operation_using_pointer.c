//arithmetic operation using pointer
#include<stdio.h>
int main()
{
	int a,b,*p,*q,sum,sub,mult,div,mod;
	printf("enter the value of a and b:");
	scanf("%d%d",&a,&b);
	p=&a,q=&b;
	sum=*p+*q;
	sub=*p-*q;
	mult=(*p)*(*q);
	div=(*p)/(*q);
	mod=(*p)%(*q);
	printf("sum=%d\n",sum);
	printf("sub=%d\n",sub);
	printf("mult=%d\n",mult);
	printf("div=%d\n",div);
	printf("mod=%d\n",mod);
	return 0;
}
