#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    printf("enter the array size:");
    scanf("%d",&n);
	int arr[n] ;
    printf("Enter the array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
	int left=0;
	int right=n-1;
	int search;
	printf("Enter the searching element:");
	scanf("%d",&search);
	int temp=0;
	while(left<=right){
		int mid=(left+right)/2;
		if(arr[mid]==search)
		{
			temp=1;
			break;
		}
		else if(arr[mid]>search)
		{
			left=mid+1;
		}
		else if(arr[mid]<search)
		{
			right=mid-1;
		}
	}
	if(temp==1)
	{
		printf("%d is found",search);
	}
	else
	{
		printf("%d is not found",search);
	}
	return 0;
}
