#include<stdio.h>
int main()
{  
 	int salary,roomrent,family,extrapurpose,shopping,emi,saving;
 	printf("enter your salary:");
 	scanf("%d",&salary);
 	printf("your roomrent:");
 	scanf("%d",&roomrent);
 	printf("your family:");
 	scanf("%d",&family);
 	printf("your extrapurpose:");
 	scanf("%d",&extrapurpose);
 	printf("your shopping:");
 	scanf("%d",&shopping);
 	printf("your emi:");
 	scanf("%d",&emi);
 	saving=salary-(roomrent+family+extrapurpose+shopping+emi);
 	printf("your saving=%d",saving);
	return 0;
}
