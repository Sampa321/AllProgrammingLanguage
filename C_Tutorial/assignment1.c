//1.wacp to print some text on screen.
/*#include<stdio.h>
int main()
{
	printf("hello");
	return 0;
}*/

//2.wap to add between two numbers.
/*#include<stdio.h>
int main()
{
	int a,b,sum;
	printf("enter two numbers:");
	scanf("%d%d",&a,&b);
	sum=a+b;
	printf("sum=%d",sum);
	return 0;
}*/

//3.wap to subtract between two numbers.
/*#include<stdio.h>
int main()
{
	int a,b,sub;
	printf("enter two numbers:");
	scanf("%d%d",&a,&b);
	sub=a-b;
	printf("sub=%d",sub);
	return 0;
}*/

//4.wap to multiply between two numbers.
/*#include<stdio.h>
int main()
{
	int a,b,mult;
	printf("enter two numbers:");
	scanf("%d%d",&a,&b);
	mult=a*b;
	printf("mult=%d",mult);
	return 0;
}*/

//5.wap to divide between two numbers.
/*#include<stdio.h>
int main()
{
	int a,b,div;
	printf("enter two numbers:");
	scanf("%d%d",&a,&b);
	div=a/b;
	printf("div=%d",div);
	return 0;
}*/

//6.wap to swap between two numbers using third variavle.
/*#include<stdio.h>
int main()
{
	int a,b,temp;
	printf("enter the value of a and b:"); //10,12
	scanf("%d%d",&a,&b);
	printf("before swaping,a=%d,b=%d\n",a,b);
	temp=a;//10
	a=b;//12
	b=temp;//10
	printf("after swaping,a=%d,b=%d",a,b);
	return 0;
}*/

//7.wap to swap between two numbers without using third variavle.
/*#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the value of a and b:"); //10,12
	scanf("%d%d",&a,&b);
	printf("before swaping,a=%d,b=%d\n",a,b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("after swaping,a=%d,b=%d",a,b);
	return 0;
}*/
#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the value of a and b:"); //10,5
	scanf("%d%d",&a,&b);
	printf("before swaping,a=%d,b=%d\n",a,b);
	a=a+b;//15
	b=a-b;//15-5=10
	a=a-b;//15-10=5
	printf("after swaping,a=%d,b=%d",a,b);
	return 0;
}
	
