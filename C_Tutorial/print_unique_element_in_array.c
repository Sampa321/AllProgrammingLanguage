//print all unique element and element sum in array.
#include<stdio.h>
int main()
{
	int n,i,j,count,sum=0;
	printf("enter the number of elements you want to store:");
	scanf("%d",&n);
	int arr[n];
	printf("enter your array elements:\n");
	for(i=0;i<n;i++)
	{
		printf("arr[%d]=",i);
		scanf("%d",&arr[i]);	
	}
	printf("enter your unique elements are:\n");
	for(i=0;i<n;i++)
	{
		count=1;
		for(j=0;j<n;j++)
		{
			if(arr[i]==arr[j] && i!=j)
			{
			 count=0;
			 break;
			}
		}
		if(count==1)
		{
			sum+=arr[i];
			printf("%d\t",arr[i]);
		}
		
	}
	printf("\nsum of unique elements:%d",sum);
	return 0;
}
