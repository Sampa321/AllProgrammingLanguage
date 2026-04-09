//15.write a c program to swap the two number using third variable and without using third variable.
//USING THIRD VARIABLE:
/*#include<stdio.h>
int main()
{
	int a,b,temp;
	printf("enter the value of a and b:");
	scanf("%d%d",&a,&b);
	printf("Before swaping,a=%d,b=%d\n",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("After swaping,a=%d,b=%d",a,b);
	return 0;
}*/

//WITHOUT THIRD VARIABLE:
#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the value of a and b:");
	scanf("%d%d",&a,&b);
	printf("Before swaping,a=%d,b=%d\n",a,b);//12,3
	a=a+b;//15
	b=a-b;//12
	a=a-b;//3
	printf("After swaping,a=%d,b=%d",a,b);
	return 0;
}
