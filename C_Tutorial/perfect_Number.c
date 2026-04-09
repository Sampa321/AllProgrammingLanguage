//Check a number is perfect number or not.
#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("enter the number:");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum+=i;
		}
	}
	if(sum==n)
	{
		printf("%d is perfect number",n);
	}
	else
	{
		printf("%d is not perfect number",n);	
	}
	return 0;
}

//print perfect number within range.
/*#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=1000;i++)
	{
		int sum=0;
		for(j=1;j<i;j++)
		{
			if(i%j==0){
				sum+=j;
			}
		}
		if(i==sum)
		{
			printf("%d\n",i);
		}
		
	}
	return 0;
}*/
