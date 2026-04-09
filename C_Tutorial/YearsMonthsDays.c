//WAP TO CONVERT SPECIFIED DAYS INTO YEARS,MONTHS,WEEKS AND DAYS.
#include <stdio.h>
int main()
{
	int days,year,months,a,weeks,b,day;
	printf("enter the days:");
	scanf("%d",&days); //403
	year=(days/365); //1
	a=(days%365); //
	months=(a/30);
	b=(a%30);
	weeks=(b/7);
	day=(b%7);
	printf("year=%d\nmonths=%d\nweeks=%d\ndays=%d\n",year,months,weeks,day);
}
