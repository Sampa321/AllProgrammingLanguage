//write a program in c sum of even array elements.
#include<stdio.h>
int main()
{
	int size,i,even_sum=0;
	printf("enter your array size:");
	scanf("%d",&size);
	//for input array:
	int arr[size];
	printf("enter your array elements:\n");
	for(i=0;i<size;i++)
	{
		printf("arr[%d]=",i);
		scanf("%d",&arr[i]);
	}
	//for output array:
	for(i=0;i<size;i++)
	{
		if(arr[i]%2==0)
		{
			even_sum+=arr[i];
		}
		
	}
	printf("sum of even array elements:%d",even_sum);
	return 0;
}
