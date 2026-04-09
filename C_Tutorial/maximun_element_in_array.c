//Find the maximum element in an array.
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
	int max=arr[0],index;
	for(i=0;i<size;i++)
	{
		if(arr[i]>max)
		{
			index=i;
			max=arr[i];
		}
	}
	printf("\n%d is maximum number at index %d",max,index);
	return 0;
}
