#include<stdio.h>
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
    int search;
    printf("enter the search array:");
    scanf("%d",&search);
	int left=0;
	int right=n-1;
	while(left<=right){
		int mid=(left+right)/2;
		if(arr[mid]==search)
		{
			printf("%d is found",search);
			return 0;
		}
		else if(arr[mid]>search)
		{
		
			right=mid-1;
		}
		else if(arr[mid]<search)
		{
				left=mid+1;
		}
	}
	printf("not found!");
	
}
