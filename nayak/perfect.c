#include<stdio.h>
int main(){
	int num,i,sum;
	printf("enter the number:");
	scanf("%d",&num);
	sum=0;
	for(i=1;i<num;i++){
		if(num%i==0){
			sum=sum+i;
		}
	}
	if(sum==num){
		printf("perfect");
	}
	else{
		printf("not perfect");
	}
	return 0;
}
