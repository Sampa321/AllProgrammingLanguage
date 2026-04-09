//Distance between initial point to final point.
#include<stdio.h>
#include<math.h>
int main()
{
	int north,south,east,weast;
	printf("enter the north,south,east,weast:");
	scanf("%d%d%d%d",&north,&south,&east,&weast);
	int x_axis=east-weast;
	int y_axis=north-south;
	float distance=sqrt((x_axis*x_axis)+(y_axis*y_axis));
	printf("Distance=%0.3f",distance);
	return 0;
	
}
