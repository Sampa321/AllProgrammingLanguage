//Find the minimum no in an array.
#include<stdio.h>
int main()
{
	int size,i;
	printf("enter your array size:");
	scanf("%d",&size);
	int arr[size];
	//taking from user input:
	printf("enter your array element:\n");
	for(i=0;i<size;i++)
	{
	printf("arr[%d]=",i);
	scanf("%d",&arr[i]);
	}
	//printf your array element:
	for(i=0;i<size;i++)
	{
	printf("%d\t",arr[i]);
	}
	int min=arr[0],index;
	for(i=0;i<size;i++)
	{
		if(arr[i]<min)
		{
			index=i;
			min=arr[i];
		}
	}
	printf("\n%d is minimum number at index %d",min,index);
	return 0;
}
