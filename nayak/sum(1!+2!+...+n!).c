//#include<stdio.h>
//int main(){
//	int fact(int n){
//	if(n<=1){
//		return 1;
//	}
//	else{
//		return n*fact(n-1);
//	}
//}
//	int n,i,result=0;
//	printf("enter the number:");
//	scanf("%d",&n);
//	for(i=1;i<=n;i++){
//		result+=fact(i);
//	}
//	printf("result=%d\n",result);
//	return 0;
//}


//#include<stdio.h>
//int main(){
//	int fact(int n){
//		if(n<=1){
//			return 1;
//		}
//		else{
//			return n*fact(n-1);
//		}
//	}
//	int n,i;
//	double result=0.0;
//	printf("enter the number:");
//	scanf("%d",&n);
//	for(i=1;i<=n;i++){
//		result+=1.0/fact(i);
//	}
//	printf("result is:%f\n",result);
//	return 0;
//}

#include<stdio.h>
int main(){
	int fact(int n){
		if(n<=1){
			return 1;
		}
		else{
			return n*fact(n-1);
		}
	}
	int n,i;
	double result=1.0;
	printf("enter the number:");
	scanf("%d",&n);
	for(i=2;i<=n;i+=2){
		result+=1.0/fact(i);
	}
	printf("result is:%f\n",result);
	return 0;
}





