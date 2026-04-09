//check a number is prime number or not.
/*#include<stdio.h>
int main()
{
	int n,i,f=0;
	printf("enter the number:");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0){
			f=1;
			break;
		}
	}
	if(f==1)
	{
		printf("%d is not prime number",n);
	}
	else
	{
		printf("%d is prime number",n);
	}
	return 0;
}*/

/*#include<stdio.h>
int main()
{
	int n,i,count=0;
	printf("enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count+=1;
		}
	}
	if(count==2){
		printf("%d is prime number",n);
	}
	else
	{
		printf("%d is not prime number",n);
	}
	return 0;
}*/


//print prime number within a range.
#include<stdio.h>
int main()
{
	int n,i,j,count;
	printf("enter the range:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		count=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				count+=1;
			}
		
		}
		if(count==2){
			printf("%d\n",i);
		}
		
	}
	
	return 0;
}
