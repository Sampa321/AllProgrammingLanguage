//1.WAP to print "welcome" 10 times using while loop.
/*#include<stdio.h>
int main()
{
	char str[100];
	int i=1;
	printf("enter the string:");
	scanf("%s",&str);
	while(i!=11){
		printf("%s\n",str);
		i++;
	}
	return 0;
}*/

//2.WAP to print n natural numbers using while loop.
/*#include<stdio.h>
int main()
{
	int i=1,n;
	printf("enter the value of n::");
	scanf("%d",&n);
	while(i!=n){
		printf("%d\n",i);
		i++;
	}
	return 0;
}*/

//3.WAP to print n natural numbers using d0-while loop.
/*#include<stdio.h>
int main()
{
	int i=1,n;
	printf("enter the value of n::");
	scanf("%d",&n);
	do{
		printf("%d\n",i);
		i++;
	}
	while(i!=n);
	return 0;
}*/

//4.WAP to print all odd numbers in a given range.
/*#include<stdio.h>
int main()
{
	int i,n;
	printf("enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(i%2==1)
		{
			printf("%d\t",i);
		}
	}
	return 0;
 } */
 /*#include<stdio.h>
int main()
{
	int i,n;
	printf("enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i+=2){
		printf("%d\t",i);
	}
	return 0;
}*/

//5.WAP to add first n numbers using while loop.
/*#include<stdio.h>
int main()
{
	int i=1,n,sum=0;
	printf("enter the number:");
	scanf("%d",&n);
	while(i!=n)
	{
		sum+=i;
		i++;	
	}
	printf("sum=%d",sum);
	return 0;
}*/

//6.WAP to print all numbers in a given range which are divisible by 3 or 5 using while loop.
/*#include<stdio.h>
int main()
{
	int i=1,n;
	printf("enter the number:");
	scanf("%d",&n);
	while(i!=n)
	{
		i++;
		if(i%3==0 || i%5==0)
		{
			printf("%d\t",i);
		}
	}
	return 0;
}*/

//7.WAP to print all numbers in a given range which are divisible by 3 or 5 using do-while loop.
/*#include<stdio.h>
int main()
{
	int i=1,n;
	printf("enter the number:");
	scanf("%d",&n);
	do
	{
		i++;
		if(i%3==0 || i%5==0)
		{
			printf("%d\t",i);
		}
	}
	while(i!=n);
	return 0;
}*/

//8.WAP to add all even numbers in a given range.
 /*#include<stdio.h>
 int main()
 {
 	int i,n,even_sum=0;
 	printf("enter the number:");
 	scanf("%d",&n);
 	for(i=2;i<=n;i+=2)
 	{
 		even_sum+=i;
	 }
	 printf("sum of even number=%d",even_sum);
	 return 0;
 }*/
 
//9.WAP to calculate the factorial of a given number.
/*#include<stdio.h>
int main()
{
	int n,i,fact=1;
	printf("enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact*=i;
	}
	printf("factorial=%d",fact);
	return 0;
}*/

//10.WAP to find a number is prime or not.
/*#include<stdio.h>
int main()
{
	int num,i,count=0;
	printf("enter the number:");
	scanf("%d",&num);
	for(i=1;i<num;i++)
	{
		if(num%i==0)
		{
			count+=1;
		}
	}
	if(count==1)
	{
		printf("%d is prime number",num);
	}
	else
	{
		printf("%d is not prime number",num);
	}
	return 0;
}*/

//11.WAP to find the reverse of a given number.
/*#include<stdio.h>
int main()
{
	int num,rem,rev=0;
	printf("enter the number:");
	scanf("%d",&num);
	printf("actual number=%d\n",num);
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	printf("reverse number=%d",rev);
	return 0;
}*/

//12.WAP to add all the digits of a given number.
/*#include<stdio.h>
int main()
{
	int num,rem,digit_sum=0;
	printf("enter the number:");
	scanf("%d",&num);
	while(num!=0)
	{
		rem=num%10;
		digit_sum+=rem;
		num=num/10;
		
	}
	printf("sum of digit of a number=%d",digit_sum);
	return 0;
}*/

//13.WAP to print all the fibonacci series up to a given range.
/*#include<stdio.h>
int fibo(int n)
{
	if(n==0)
	{
		return 0;
	}
	else if(n==1)
	{
		return 1;
	}
	else
	{
		return fibo(n-1)+fibo(n-2);
	}
}
int main()
{
	int a,i;
	printf("enter the number:");
	scanf("%d",&a);
	fibo(a);
	if(a<0){
		printf("please enter a valid input");
	}
	else
	{
		for(i=0;i<=a;i++)
		{
			printf("%d\t",fibo(i));
		}
	}
	return 0;
}*/

//14.WAP to find a number is armstrong or not.
/*#include<stdio.h>
int main()
{
	int num,rem,digit_count=0,temp,rem1,arm,temp1;
	printf("enter the number:");
	scanf("%d",&num);
	temp1=num;
	temp=num;
	while(num!=0)
	{
		rem=num%10;
		digit_count+=1;
		num=num/10;
		
	}
	//printf("sum of digit of a number=%d",digit_count);
	while(temp!=0)
	{
		rem1=temp%10;
		arm=arm+pow(rem1,digit_count);
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

//15.WAP to find a number is palindrome or not.
/*#include<stdio.h>
int main()
{
	int num,rem,rev=0,temp;
	printf("enter the number:");
	scanf("%d",&num);
	temp=num;
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	if(temp==rev)
	{
		printf("%d is palindrome number",temp);	
	}
	else{
		printf("%d is not1 palindrome number",temp);	
	}
	return 0;
}*/

//16.WAP to factorize of a given number.
