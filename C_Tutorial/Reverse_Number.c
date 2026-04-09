//print the reverse number.
#include<stdio.h>
int main()
{
	int n,rem=0,rev,temp;
	printf("enter the number:");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	printf("The original number is %d\n",temp);
	printf("The reverse number is %d",rev);
	return 0;
}
