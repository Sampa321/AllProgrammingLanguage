#include<stdio.h>
int main()
{
	int n;
	printf("enter the number:");
	scanf("%d",&n);
	int reverse=0;
	int t=n;
	while(n!=0)
	{
		int r=n%10;
		reverse=reverse*10+r;
		n/=10;
	}
	printf("Actual Number=%d\n",t);
	printf("Reverse Number=%d",reverse);
	return 0;
}
