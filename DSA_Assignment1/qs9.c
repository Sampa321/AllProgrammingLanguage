//9.Write a c program to check whether a given number is armstrong or not.(An armstrong number of three digits such that the sum of the cubes of its digits is equal to the number itself.For Example,371 is an armstrong).
#include<stdio.h>
#include<math.h>
int main()
{
	int num,r,arm=0,temp;
	printf("enter your number:");
	scanf("%d",&num);
	temp=num;
	while(num!=0)
	{
		r=num%10;
		arm=arm+pow(r,3);
		num=num/10;
	}
	if(temp==arm)
	{
		printf("%d is armstrong number",temp);
	}
	else
	{
		printf("%d is not armstrong number",temp);
	}
	return 0;
}
