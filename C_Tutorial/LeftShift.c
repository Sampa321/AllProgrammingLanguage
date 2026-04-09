#include <stdio.h>
int main()
{
	int x,leftshift,y;
	printf("enter the value and leftshift:");
	scanf("%d%d",&x,&leftshift);
	printf("x=%d,leftshift=%d\n",x,leftshift);
	y=(x<<leftshift);
	printf("leftshift=%d",y);
}
