#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	printf("enter the number:");
	scanf("%d",&n);
 	int t=n;
	int count=(int)(log10(n)+1);
	int arm=0;
	while(n!=0)
	{
		int r=n%10;
		arm+=pow(r,count);
		n/=10;
	}
	if(t==arm)
	{
		printf("%d is armstrong number",t);
	}
	else
	{
		printf("%d is armstrong number",t);
	}
	return 0;
}
