#include<stdio.h>
#include<math.h>
int power(int a1,int b1)//2,3
{
	if(b1==0)
	{
		return 1;
	}
	else if(b1==1)
	{
		return a1;
	}
	else
	{
		return a1*power(a1,b1-1);//2*pow(2,2),2*power
	}
}
int main()
{
	int a,b;
	printf("enter the value of a and b:");
	scanff("%d%d",&a,&b);
	int r=power(a,b);
	printf("%d^%d=",r);
	return 0;
}
