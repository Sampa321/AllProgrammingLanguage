//WAP calculate the value of a^b[both input a,b taking from user]
#include<stdio.h>
int main()
{
	int a,b;
	printf("enter two number:");
	scanf("%d%d",&a,&b);
	int r=pow(a,b);
	printf("%d^%d=%d",a,b,r);
	return 0;
 } 
