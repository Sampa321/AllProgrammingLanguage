#include<stdio.h>
int main(){
	int a,b,c;
	printf("enter the value of a:");
	scanf("%d",&a);
	printf("enter the value of b:");
	scanf("%d",&b);
		c=a+b;
		a=c-a;
		b=c-b;
	printf("using 3 variable number swap:a=%d,b=%d\n",a,b);
}
