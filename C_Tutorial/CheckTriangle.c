#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter three number:");
	scanf("%d%d%d",&a,&b,&c);
	if((a*a+b*b)==c*c){
		printf("This is triangle");
	}
	else{
		printf("This is not triangle");
	}
	return 0;
}
