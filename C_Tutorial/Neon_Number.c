//check a number is  neon number or not.
/*#include<stdio.h>
int main()
{
	int n,n1,r,sum=0;
	printf("enter the number:");
	scanf("%d",&n); //9
	n1=n*n; //81
 
	while(n1!=0)
	{
		r=n1%10; //1 //8
		sum+=r;//0+1=1+8=9
		n1=n1/10;//8
	}
	if(sum==n)
	{
		printf("%d is neon number",n);
	}
	else
	{
		printf("%d is not neon number",n);
	}
	return 0;
}*/

//Print neon number within range.

#include<stdio.h>
int main(){
	int r,i,n1,sum,digit;
	printf("Enter the range:");
	scanf("%d",&r);
	for(i=0;i<=r;i++)
	{
		n1=i*i; //81
 		sum=0;
		while(n1!=0)
		{
			digit=n1%10; //1 //8
			sum+=digit;//0+1=1+8=9
			n1=n1/10;//8
		}
		if(sum==i)
		{
			printf("%d\t",i);
		}
	}
	return 0;
}
   
 
