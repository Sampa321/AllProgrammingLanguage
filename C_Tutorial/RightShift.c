#include <stdio.h>
int main(){
	int x,rightShift,y;
	printf("enter the value and rightShift:");
	scanf("%d%d",&x,&rightShift);
	printf("x=%d,rightShift=%d\n",x,rightShift);
	y=(x>>rightShift);
	printf("y=%d",y);
}
