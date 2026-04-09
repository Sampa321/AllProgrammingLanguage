//WAP to calculate BMI of a person after inputting its weight in kgs and height in meters and  print the nutritional stutus as per folloowing table:
#include<stdio.h>
int main()
{
	float BMI;
	printf("enter the BMI:");
	scanf("%f",&BMI);
	if(BMI<18.5)
	{
		printf("underweight");
	}
	else if(BMI>=18.5 && BMI<=24.9)
	{
		printf("normal");
	}
	else if(BMI>=25 && BMI<=29.9)
	{
		printf("overweight");
	}
	else
	{
		printf("abese");
	}
	return 0;
}
