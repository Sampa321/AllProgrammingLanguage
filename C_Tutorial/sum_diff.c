/*Write a  C program that returns true if the two given integer values are equal or their sum
 or difference is 5.*/
#include<stdio.h>
int val(int x,int y){
	if(x==y || x+y==5 || x-y==5)
	{
		printf("true");
	}
	else{
		printf("false");
	}
}
int main(){
	int a,b;
	printf("enter two number:");
	scanf("%d%d",&a,&b);
	val(a,b);
	return 0;
}
