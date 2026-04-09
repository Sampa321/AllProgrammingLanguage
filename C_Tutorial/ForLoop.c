//print 10 to 1 natural numbers.
/*#include <stdio.h>
int main()
{
	int i;
	printf("First 10 to 1 natural no is:\n");
	for(i=10;i>=0;i--)
	{
		printf("%d\t",i);
	}
	return 0;
}*/

//print 1 to 10 natural numbers.
/*#include <stdio.h>
int main()
{
	int i;
	printf("First 1 to 10 natural no is:\n");
	for(i=1;i<=0;i++)
	{
		printf("%d\t",i);
	}
	return 0;
}*/

//print (1+2/3+3/5+4/7+....)
 /*#include <stdio.h>
 int main()
 {
 	int n;
 	float i,sum=0;
 	printf("enter the number:");
 	scanf("%d",&n);
 	for(i=0;i<=n;i++){
 		sum=sum+((i+1)/(2*i+1));
	}
	printf("sum=%f",sum);
	return 0;
 }*/
 
 //print (1/2+2/3+3/4+4/5+....+n/n+1)
 /*#include<stdio.h>
int main()
{
	int n;
	float i,sum=0;
	printf("enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum+=(i/(i+1));
	}
	printf("%f",sum);
	return 0;
}*/

//print(1^2+2^3+3^2+4^3+......)
#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==1)
		{
			sum+=pow(i,2);
		}
		else{
			sum+=pow(i,3);
		}
			
	}
	printf("sum=%d",sum);
	return 0;
}
