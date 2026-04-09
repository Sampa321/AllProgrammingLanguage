//WAP to find duplicate element in a 1D array.
#include<stdio.h>
int main()
{
	int size,i,j;
	printf("enter your array size:");
	scanf("%d",&size);
	int arr[size];
	printf("enter your array elements:\n");
	for(i=0;i<size;i++)
	{
		printf("arr[%d]=",i);
		scanf("%d",&arr[i]);
	}
  	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(arr[i]==arr[j])
			{
				printf("%d is duplicate element at index %d and %d\n",arr[i],i,j);
			}
		}
	}
	return 0;
}
