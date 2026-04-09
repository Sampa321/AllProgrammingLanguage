//3.Write a c program to inplement quick sort and merge sort.
#include<stdio.h>
int position(int arr[],int low,int high)
{
	int pivot=arr[high],i=low-1,temp,j;
	for(j=low;j<high;j++)
	{
		if(arr[i]<pivot)
		{
			temp=arr[++i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
	}
	temp=arr[i+1];
	arr[i+1]=arr[high];
	arr[high]=temp;
	return i+1;	
}
void quicksort(int arr[],int low,int high)
{
	if(low<high)
	{
		int pi=position(arr,low,high);
		quicksort(arr,low,pi-1);
		quicksort(arr,pi+1,high);
	}
}
void main()
{
	int n=5;
	int arr[n]={2,11,27,5,9};
	qucksort(arr,0,n-1);
	printf("sorted array:");
	for(int i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
}
