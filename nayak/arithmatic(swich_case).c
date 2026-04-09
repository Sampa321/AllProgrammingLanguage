#include<stdio.h>
int main(){
	int num1,num2;
	printf("enter the two number:");
	scanf("%d %d",&num1,&num2);
	printf("1.for addition.\n");
	printf("2.for subtruction.\n");
	printf("3.for multiplication.\n");
	printf("4.for divition.\n");
	printf("5.for module.\n");
	int choice;
	printf("enter your choice:");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			printf("result:%d\n",num1,num2,num1+num2);
			break;
		case 2:
			printf("result:%d\n",num1,num2,num1-num2);
			break;
		case 3:
			printf("result:%d\n",num1,num2,num1*num2);
			break;
		case 4:
			printf("result:%d\n",num1,num2,num1/num2);
			break;
		case 5:
			printf("result:%d\n",num1,num2,num1%num2);
			break;
		default:
			printf("wrong input.\n");
			break;
	}
	return 0;
}
