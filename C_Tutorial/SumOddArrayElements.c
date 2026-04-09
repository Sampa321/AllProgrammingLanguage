//write a program in c sum of odd array elements.
#include<stdio.h>
int main()
{
	int size,i,odd_sum=0;
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
		if(arr[i]%2!=0)
		{
			odd_sum+=arr[i];
		}
		
	}
	printf("sum of odd array elements:%d",odd_sum);
	return 0;
}
