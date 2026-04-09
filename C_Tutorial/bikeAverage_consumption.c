/*wap to calculate a bike's average consumption from the given total distance(integer value) travelled (in km) and spent fuel(in litters,float number-2 decimal points).
Test Data:
	input total distance in km:350
	input total fuel spent in liters:5
Expected output:
	Average consumption(km/lt)=70.000*/
#include<stdio.h>
int main()
{
	int distance;
	float fuel,avg;
	printf("Input total distance in km:");
	scanf("%d",&distance);
	printf("Input total fuel spent in liters:");
	scanf("%f",&fuel);
	avg=distance/fuel;
	printf("Average consumption(km/lt)=%0.3f",avg);
	return 0;
}
