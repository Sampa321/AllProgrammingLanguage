//#include<stdio.h>
//int main(){
//	int n,i,j;
//	printf("enter the number:");
//	scanf("%d",&n);
//	for(i=1;i<=n;i++){
//		for(j=1;j<=i;j++){
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

#include<stdio.h>
int main(){
	int n,i,j,k;
	printf("enter the n=");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=n-i;j>=1;j--){
			printf("\t");
		}
		for(k=1;k<=i;k++){
			printf("*\t");
		}
		printf("\n");
	}
	return 0;
}
