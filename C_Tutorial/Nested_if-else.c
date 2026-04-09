#include <stdio.h>
int main()
{
	int num;
	printf("Enter the number:");
	scanf("%d",&num);
	if(num>0){
		if(num%2==0){
			printf("positive even=%d",num);
		}
		else{
			printf("positive odd=%d",num);
		}
	}
	else{
		if(num%2==0){
			printf("negative even=%d",num);
		}
		else{
			printf("negative odd=%d",num);
		}
	}
	return 0;
}
