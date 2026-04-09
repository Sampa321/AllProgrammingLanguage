//WAP calculate the value of a^b using recursion[both input a,b taking from user]
#include<stdio.h>
int power(int a,int b)
{
	if(b==0)
	{
		return 1;
	}
	else if(b==1)
	{
		return a;
	}
	else
	{
		return a*power(a,b-1);
	}
}
int main()
{
	int m,n;
	printf("enter the number of m and n:");
	scanf("%d%d",&m,&n);
	int r=power(m,n);
	printf("%d^%d=%d",m,n,r);
	return 0;
}
