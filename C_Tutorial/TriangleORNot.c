//WAP to input three angles and determine if they form a triangle or not.(Hint:sum a triangles all three angle is 180)
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter three number:");
	scanf("%d%d%d",&a,&b,&c);
	if(a*a+b*b==c*c)
	{
		printf("It is triangle");
	}
	else{
		printf("It is not triangle");
	}
	return 0;
}
