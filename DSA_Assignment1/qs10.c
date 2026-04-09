//10.Write a c program to check whether a given number is perfect number or not.(6,28 is perfect number)(a perfect number is a positive integer that is equal to the sum of its proper positive divisors,that is,the sum of its positive divisors wxcluding the number itself)
#include<stdio.h>
int main()
{
	int num,i,sum=0;
	printf("enter your number:");
	scanf("%d",&num);
	for(i=1;i<num;i++)
	{
		if(num%i==0)
		{
			sum+=i;
		}	
	}
	if(num==sum)
	{
		printf("%d is perfect number",num);
	}
	else
	{
		printf("%d is not perfect number",num);
	}
	return 0;
}
