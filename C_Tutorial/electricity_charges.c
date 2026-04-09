//WAP to calculate electricity charges based on number of consumed electricity units as per following conditions:
#include<stdio.h>
int main()
{
	int units,price;
	printf("enter the units:");
	scanf("%d",&units);
	if(units<=100)
	{
		price=units*2;
		printf("%d",price);
	}
	else if(units>100 && units<=200)
	{
		price=200+(units-100)*3.5;
		printf("%d",price);
	}
	else if(units>200 && units<=300)
	{
		price=550+(units-200)*7.5;
		printf("%d",price);
	}
	else
	{
		price=1300+(units-300)*9;
		printf("%d",price);	
	}
	return 0;
}
