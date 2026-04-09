//smallest stetement of a large program is called function.
/*#include<stdio.h>
int a=20,b=10;
int sum()
{
	printf("sum=%d\n",a+b);
}
int sub()
{
	printf("sub=%d\n",a-b);
}
int mul()
{
	printf("mul=%d\n",a*b);
}
int div()
{
	printf("div=%d\n",a/b);
}
int mod()
{
	printf("mod=%d\n",a%b);
}
int main()
{
	sum();
	sub();
	mul();
	div();
	mod();
	return 0;
}*/

/*#include<stdio.h>
int sum(int a,int b,int c)
{
	int sum=a+b+c;
	printf("sum=%d",sum);
}
int main()
{
	int p,q,r;
	printf("enter three number:");
	scanf("%d%d%d",&p,&q,&r);
	sum(p,q,r);
}*/

#include<stdio.h>
int sum(int a,int b,int c)
{
	int sum=a+b+c;
	return sum;
}
int main()
{
	int p,q,r;
	printf("enter three number:");
	scanf("%d%d%d",&p,&q,&r);
	int result=sum(p,q,r);
	printf("sum=%d",result);
}

 
