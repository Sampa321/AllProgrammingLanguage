#include<stdio.h>
int main()
{
	int n,count=0;
	printf("enter the number:");
	scanf("%d",&n);
	if(n==0){
		count+=1;
		printf("count the digit is %d",count);
	}
	else{
		while(n!=0)
		{
		count+=1;
		n=n/10;
		}
	printf("count the digit is %d",count);	
	}
	 
}
