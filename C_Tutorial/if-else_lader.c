/*CONTROL-FLOW:
	if-else lader*/
//Greatest between three number.
/*#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the three number:");
	scanf("%d%d%d",&a,&b,&c);
	if(a>=b && a>=c)
	{
		printf("%d is the greatest number",a);
	}
	else if(b>=a && b>=c)
	{
		printf("%d is the greatest number",b);
	}
	else{
		printf("%d is the greatest number",c);
	}
	return 0;
}*/


// Wap to check a number is divisible by 5 or 3.
#include <stdio.h>
int main()
{
	int num;
	printf("enter the number:");
	scanf("%d",&num);
	if(num%3==0 || num%5==0)
	{
		printf("%d is divisible by 5 and 3",num);
	}
	else
	{
		printf("%d is not divisible by 5 and 3",num);
	}
	return 0;
}

//Wap to check a number is divisible by 5 and  3 or not.
/*#include <stdio.h>
int main()
{
	int num;
	printf("enter the number:");
	scanf("%d",&num);
	if(num%3==0 && num%5==0)
	{
		printf("%d is divisible by 5 and 3",num);
	}
	else if(num%5==0)
	{
		printf("%d is divisible by 5",num);
	}
	else if(num%3==0)
	{
		printf("%d is divisible by 3",num);
	}
	else
	{
		printf("%d is not divisible by 5 and 3",num);
	}
	return 0;
}*/

