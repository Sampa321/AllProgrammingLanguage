//print 1st 50 numbers.
/*#include<stdio.h>
int main()
{
	int i;
	for(i=0;i<=50;i++)
	{
		printf("%d\t",i);
	}
	return 0;
}*/

//print 1st 50 numbers in reverse order.
/*#include<stdio.h>
int main()
{
	int i;
	for(i=50;i>=0;i--)
	{
		printf("%d\t",i);
	}
	return 0;
}*/

//print 20 to 40.
/*#include<stdio.h>
int main()
{
	int i;
	for(i=20;i<=40;i++)
	{
		printf("%d\t",i);
	}
	return 0;
}*/

//print all even number within range.
/*#include<stdio.h>
int main()
{
	int i,n;
	printf("enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			printf("%d\t",i);
		}
	}
	return 0;
}*/

//print all odd number within range.
/*#include<stdio.h>
int main()
{
	int i,n;
	printf("enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==1)
		{
			printf("%d\t",i);
		}
	}
	return 0;
}*/
/*#include<stdio.h>
int main()
{
	int i,n;
	printf("enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i+=2)
	{
	printf("%d\t",i);
	}
	return 0;
}*/

//sum of 1st 10 numbers.
/*#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum+=i;
	}
	printf("sum=%d",sum);
	return 0;
}*/

//sum of 1st 10 even numbers.
/*#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i+=2)
	{
		sum+=i;
	}
	printf("even sum=%d",sum);
	return 0;
}*/

//sum of 1st 10 odd numbers.
/*#include<stdio.h>
int main(){
	int i,n,sum=0;
	printf("enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i+=2)
	{
		sum+=i;
	}
	printf("odd sum=%d",sum);
	return 0;
}*/

//print this series 1 4 9 16 25 36 49 64
/*#include<stdio.h>
int main()
{
	int i,n,series;
	printf("enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		series=i*i;
		printf("%d\t",series);
	}
	return 0;
}*/

//wap that reads 5 numbers and sum all odd values between them.
/*#include<stdio.h>
int main()
{
	int first,second,third,fourth,fifth,sum=0;
	printf("Input the first number:");
	scanf("%d",&first);
	printf("Input the second number:");
	scanf("%d",&second);
	printf("Input the third number:");
	scanf("%d",&third);
	printf("Input the fourth number:");
	scanf("%d",&fourth);
	printf("Input the fifth number:");
	scanf("%d",&fifth);
	if(first%2==1 )
	{
		sum+=first;
	}
	if(second%2==1 )
	{
		sum+=second;
	}
	if(third%2==1 )
	{
		sum+=third;
	}
	if(fourth%2==1 )
	{
		sum+=fourth;
	}
	if(fifth%2==1 )
	{
		sum+=fifth;
	}
	printf("sum of odd number=%d",sum);
	return 0;
}*/
