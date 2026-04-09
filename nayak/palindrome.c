#include<stdio.h>
int main(){
	int num,rev=0,temp;
	printf("enter the number:");
	scanf("%d",&num);
	temp=num;
	while(num!=0){
		rev=rev*10+num%10;
		num=num/10;
	}
	if(rev==temp){
		printf("palindrome");
	}
	else{
		printf("not palindrome");
	}
	return 0;
}


 
    
