//swap two number using third variables.

#include <stdio.h>
int main()
{
	int x,y,r;   //12,13
	printf("enter the number of x and y:");
	scanf("%d%d",&x,&y);
	printf("Before swaping,x=%d,y=%d\n",x,y);
	r=x;    //12
	x=y;   //13
	y=r;    //12
	printf("After swaping,x=%d,y=%d",x,y);
	
}
