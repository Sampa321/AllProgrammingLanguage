//12.Write a c program for finding factorial of a number.
#include<stdio.h>
int main()
{
	int n,i,fact=1;
	printf("enter a number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact*=i;
	}
	printf("factorial number of %d=%d",n,fact);
	return 0;
}
