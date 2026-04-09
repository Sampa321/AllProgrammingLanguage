//How to take array input from user.
#include<stdio.h>
int main()
{
	int size,i;
	printf("enter your size:");
	scanf("%d",&size);
	int arr[size];
	//for array input:
	printf("enter your arrray elements:\n");
	for(i=0;i<size;i++)
	{
		printf("arr[%d]=",i);
		scanf("%d",&arr[i]);
	}
	//for array output:
	printf("your output array:");
	for(i=0;i<size;i++)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}
