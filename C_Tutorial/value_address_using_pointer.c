//print the value and address using pointer
#include<stdio.h>
int main()
{
	int a,b,*p,*q;
	printf("enter the value of a and b:");
	scanf("%d%d",&a,&b);
	printf("The value of a=%d\n",a);
	printf("The value of b=%d\n",b);
	printf("The address of a=%d\n",&a);
	printf("The address of b=%d\n",&b);
	//for address
	p=&a;
	q=&b;
	printf("The address of a=%d\n",p);
	printf("The address of b=%d\n",q);
	//for value
	printf("The value of a=%d\n",*p);
	printf("The value of b=%d\n",*q);
	return 0;
}
