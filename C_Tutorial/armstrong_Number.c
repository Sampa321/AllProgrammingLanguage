//check a number is armstrong number or not.
/*#include <stdio.h>
int main()
{
	int n,digit=0,temp,rem,arm=0,temp1;
	printf("enter the number:");
	scanf("%d",&n);
	temp=n;
	temp1=n;
	while(n!=0)
	{
		digit+=1;
		n=n/10;
	}
	while(temp!=0)
	{
		rem=temp%10;
		arm=arm+pow(rem,digit);
		temp=temp/10;
	}
	if(arm==temp1)
	{
		printf("%d is armstrong number",temp1);
	}
	else
	{
		printf("%d is not armstrong number",temp1);
	}
	return 0;
}*/

//print armstrong number within range.
#include<stdio.h>
#include<math.h>
int main()
{
	int n,arms,rem,i,number,count;
	printf("Enter the range:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		number=i;
		arms=0;
		count=0;
		while(number!=0)
		{
			count+=1;
			number=number/10;
		}
		//printf("%d\t",count);
	 	number=i;
		while(number!=0)
		{
			rem=number%10;
			arms=arms+pow(rem,count);
			number=number/10;
		}
		if(arms==i)
		{
			printf("%d\t",arms);
		}
		}
	return 0;
}	
 	 
