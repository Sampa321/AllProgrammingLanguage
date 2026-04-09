//print factorial of a number using return function.
/*#include<stdio.h>
int fact(int num)
{
	int fact=1,i;
	for(i=1;i<=num;i++)
	{
		fact=fact*i;
	}
	return fact;
}
int main()
{
	int a;
	printf("enter the number:");
	scanf("%d",&a);
	int r=fact(a);
	printf("factorial=%d",r);
	return 0;
}*/

#include<stdio.h>
int main()
{
	int n,fact=1,i;
	printf("enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("factorial=%d",fact);
	return 0;
}
