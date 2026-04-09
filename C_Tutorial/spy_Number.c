//A number is called spy number if sum of indivisual digit and multiple of all indivisual digit are equal.
//check a number is spy number or not.
#include<stdio.h>
int main()
{
	int n,rem,sum=0,mult=1,temp;
	printf("enter the number:");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		rem=n%10;
		sum+=rem;
		mult*=rem;
		n=n/10;
	}
	if(sum==mult)
	{
		printf("%d is spy number",temp);
	}
	else
	{
		printf("%d is not spy number",temp);
	}
	return 0;
}

//print spy number within range.
/*#include<stdio.h>
int main()
{
	int n;
	printf("enter the range:");
	scanf("%d",&n);
	printf("spy number:\n");
	int i,sum,rem,mult,temp;
	for(i=1;i<=n;i++)
	{
		sum=0;
		mult=1;
		temp=i;
		while(temp!=0)
		{
			rem=temp%10;
			sum+=rem;
			mult*=rem;
			temp=temp/10;
		}
		if(sum==mult)
		{
			printf("%d\n",i);
		}
	}
	return 0;
}*/
