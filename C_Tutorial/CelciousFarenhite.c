//convert fahrenhite to celcious.
#include <stdio.h>
int main()
{
	float F,C;
	printf("enter the farenhite:");
	scanf("%f",&F);
	C=(5*(F-32))/9;
	printf("Celcious=%0.2f",C);
	return 0;
}
