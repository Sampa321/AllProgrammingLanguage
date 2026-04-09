#include <stdio.h>
int main()
{
	int a,b;
	printf("enter the value of a and b:");
	scanf("%d%d",&a,&b);
	printf("a=%d,b=%d\n",a,b);
	if(a>b){
		printf("The greatest no is:%d",a);
	}
	else{
		printf("The greatest no is:%d",b);
	}
	return 0;
}
