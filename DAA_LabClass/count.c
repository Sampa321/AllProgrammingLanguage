#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	printf("enter the number:");
	scanf("%d",&n);
	 
	printf("Digit count=%d",(int)(log10(n)+1));
	return 0;
}
