#include<stdio.h>
int main()
{
int a,count,i;
printf("enter the value of a:");
scanf("%d",&a);
count=0;
for(i=1;i<=a;i++){
	if(a%i==0){
		count=count+1;
	}
}
if(count==2){
	printf("prime");
}
else{
	printf("not prime");
}
return 0;

}
