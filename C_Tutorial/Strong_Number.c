//check a number is strong number or not.
#include<stdio.h>
int main()
{
	int n,fact,r,i;
	printf("enter a number:");
	scanf("%d",&n);
	int sum=0;
	int temp=n;
	while(n!=0)
	{
		r=n%10;
		fact=1;
		for(i=1;i<=r;i++)
		{
			fact*=i;
		}
		n=n/10;
		sum+=fact;
	}
	if(temp==sum)
	{
		printf("%d is strong number",temp);
	}
	else
	{
		printf("%d is not strong number",temp);
	}
}


//print strong number within range.
/*#include<stdio.h>
int main()
{
	int n1,i,sum,j,fact,temp,r1;
	printf("enter the number:");
	scanf("%d",&n1);
	printf("Strong Numbers:\n");
	for(i=1;i<=n1;i++)
	{
		sum=0;
		temp=i;
		while(temp!=0)
		{
			r1=temp%10;
			fact=1;
			for(j=1;j<=r1;j++)
			{
				fact*=j;	
			}
			temp=temp/10;
			sum+=fact;
		}
		if(i==sum)
		{
			printf("%d ",i);
		}
		
	}
}*/
