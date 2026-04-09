#include<stdio.h>
int main()
{
	int n;
	printf("enter the number:");
	scanf("%d",&n);
	int count=0;
	while(n!=0)
	{
		count++;
		n/=10;
	}
	printf("Total digit=%d",count);
	return 0;
}
