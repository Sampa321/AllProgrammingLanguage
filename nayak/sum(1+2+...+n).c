//#include<stdio.h>
//int main(){
//	int n,result,i;
//	printf("enter the number:");
//	scanf("%d",&n);
//	for(i=1;i<=n;i++){
//		result=result+i;
//	}
//	printf("result:%d\n",result);
//	return 0;
//}

#include<stdio.h>
int main(){
	int num,i;
	printf("enter the number:");
	scanf("%d",&num);
	while(i<=num){
		printf("%d\n",i);
		i++;
	}
	return 0;
}
