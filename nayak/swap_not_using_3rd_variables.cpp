#include<stdio.h>
int main(){
	int a,b;
	printf("enter the number of a:");
	scanf("%d",&a);
	printf("enter the number of b:");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("using 2 variable number swap:a=%d,b=%d",a,b);
	return 0;
}
