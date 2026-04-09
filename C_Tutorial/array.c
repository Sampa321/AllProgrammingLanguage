#include<stdio.h>
int main()
{
	int age[5]={19,20,22,19,22},i;
	printf("%d\n",age[0]);//10
	printf("%d\n",age);//Return garbage value
	for(i=0;i<5;i++)
	{
		printf("%d\n",age[i]);	
	}
	return 0;
}
