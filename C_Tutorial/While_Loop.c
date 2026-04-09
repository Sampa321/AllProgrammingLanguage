//print natural numbers.
/*#include<stdio.h>
int main()
{
	int n,i=0;
	printf("enter the number:");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("%d\t",i);    //statement
		i++;    //update
	}
	return 0;
}*/

//sum of the remainder number.
#include <stdio.h>
int main()
{
	int n,r,sum=0;
	printf("enter the number:");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		sum+=r;
		n=n/10;
	}
	printf("sum=%d\n",sum);
	return 0;
}
