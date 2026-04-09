#include<stdio.h>
int linearsearch(int arr[],int n,int key)
{
	for(int i=0;i<n;i++)
	{
		if(arr[i]==key)
		{
			return i;
		}
		return -1;
	}
}
int binarysearch(int arr[],int n,int key)
{
	int low=0,high=n-1;
	while(low<=high)
	{
		int mid=low+(high-low)/2;
		if(arr[mid]==key)
		{
			return mid;
		}
		if(arr[mid]<key)
		{
			low=mid+1;
		}else
		{
			high=mid-1;
		}
	}
	return -1;
}
int main()
{
	int arr[]={12,34,56,78};
	int n=sizeof(arr)/sizeof(arr[0]);
	int key,choice;
	printf("enter your element to search:");
	scanf("%d",&key);
	printf("enter your choice:");
	scanf("%d",&choice);
	int result;
	if(choice==1)
	{
		result=linearsearch(arr,n,key);
		
	}
	else if(choice==2)
	{
		result=binarysearch(arr,n,key);
	}
	else
	{
		printf("Invalid choice");
		return 1;
	}
	if(result!=-1)
	{
		printf("element found at %d",result);
	}
	else
	{
		printf("element not found");	
	}
	return 0;
}
