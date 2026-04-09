#include<stdio.h>
int main(){
	int n;
	printf("enter the number:");
	scanf("%d",&n);
	if(n%3==0){
		printf("%d is divided by 3",n);
	}
	else{
		printf("%d is not divided by 3",n);
	}
	return 0;
}
