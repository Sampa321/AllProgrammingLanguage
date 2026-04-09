//14.write program to convert from celsius to Fahrenheit degree or vice versa.
//#include<stdio.h>
//int main()
//{
//	float C,F;
//	printf("enter C:");
//	scanf("%f",&C);
//	F=((9*C)/5)+32;
//	printf("F=%f",F);
//	return 0;
//}

#include<stdio.h>
int main()
{
	float C,F;
	printf("enter F:");
	scanf("%f",&F);
	C=(5*(F-32))/9;
	printf("C=%f",C);
	return 0;
}
