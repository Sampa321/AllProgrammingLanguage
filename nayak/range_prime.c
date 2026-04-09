#include<stdio.h>
int main(){
int a,b,i,count,j;
printf("enter the value of a:");
scanf("%d",&a);
printf("enter the value of b:");
scanf("%d",&b);
for(i=a;i<=b;i++){
	count=0;
	for(j=1;j<=i;j++){
		if(i%j==0){
			count=count+1;
		}
	}
if(count==2){
	printf("prime=%d\n",i);
}
}
return 0;
}


 
 
