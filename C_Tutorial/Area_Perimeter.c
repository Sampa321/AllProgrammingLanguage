//WAP TO COMPUTE THE PERIMETRE AND AREA OF A CIRCLE WITH A GIVEN RADIUS.
#include <stdio.h>
int main()
{
	float r;
	printf("enter the radius:");
	scanf("%f",&r);
	float perimeter=2*(22/7)*r;
	float area=(22/7)*pow(r,2);
	printf("perimeter=%0.2f\narea=%0.2f",perimeter,area);
}
