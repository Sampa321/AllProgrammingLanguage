//sorting of accending order in an array element.
#include<stdio.h>
int main()
{
	int size,i,j,temp;
	printf("enter an array size:");
	scanf("%d",&size);
	int arr[size];
	printf("enter your array element:\n");
	//array input from user:
	for(i=0;i<size;i++)
	{
		printf("arr[%d]=",i);
		scanf("%d",&arr[i]);
	}
	printf("before sorting:");
	for(i=0;i<size;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\nafter sorting:");
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	for(i=0;i<size;i++)
	{
		printf("%d\t",arr[i]);
	}
	return 0;
}
