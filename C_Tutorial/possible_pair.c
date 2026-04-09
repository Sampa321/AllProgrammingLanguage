//possible pair of array element:
#include<stdio.h>
int main()
{
	int size;
	printf("enter the array size:");
	scanf("%d",&size);
	int arr[size],i,j;
	printf("enter your array element:\n");
	//for array input:
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
}	
//for array output:
	printf("your array element:\n");
	for(i=0;i<size;i++)
	{
		printf("%d\n",arr[i]);
	}
	//possible pair:
	printf("possible pair of array element:\n");
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			printf("(arr[%d],arr[%d])=",i,j);
			printf("(%d,%d)\n",arr[i],arr[j]);
		}
	}
	return 0;
}
