#include<stdio.h>
int main(){
int a,b,i;
printf("enter the value of a:");
scanf("%d",&a);
printf("enter the value of b:");
scanf("%d",&b);
for(i=a;i<=b;i++){
	if(i%2==0){      
		printf("even number=%d\n",i);
	}
	else{
		printf("odd number=%d\n",i);
	}
}
return 0;
}
