//Find out the 2nd max,2nd min element and sum of second min and 2nd max element in an array.
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
	//main part of sorting:
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
	//find 2nd min and 2nd max:
	int sec_min=arr[1];
	int sec_max=arr[size-2];
	printf("\nsecond min element=%d,second max element=%d",sec_min,sec_max);
	printf("\nsum of second min and 2nd max element=%d",sec_min+sec_max);
	return 0;
}
