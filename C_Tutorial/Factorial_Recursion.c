//Recursion is a function it called itself until satisfy its base condition.
//WAP factorial of a number using recursive function.
#include<stdio.h>
int fact(int n)
{
	if(n==0 || n==1)
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);
	}
}
int main(){
	int a,r;
	printf("enter the number:");
	scanf("%d",&a);
	r=fact(a);
	printf("Factorial=%d",r);
	return 0;
}
