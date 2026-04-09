/*Write a C program to calculate the distance between two points.
Test Data :
Input x1: 25
Input y1: 15
Input x2: 35
Input y2: 10
Expected Output:
Distance between the said points: 11.1803*/

#include<stdio.h>
#include<math.h>
int main()
{
	int x1,y1,x2,y2,r;
	printf("enter the value of x1,y1,x2,y2:");
	scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
	r=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
	printf("distance=%0.4f",sqrt(r));
}
