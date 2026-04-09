#include<stdio.h>
int main()
{
	int a;
	float b;
	char c;
	printf("enter the value of a:");
	scanf("%d",&a);
	printf("enter the value of b:");
	scanf("%f",&b);
	printf("enter the value of c:");
	scanf("%c",&c);
	printf("a=%d\n",a);
	printf("b=%f\n",b);
	flash(stdin);
	printf("c=%c\n",c);
	return 0;
}
