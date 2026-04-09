//Target sum of possible pair array element.
#include<stdio.h>
int main()
{
	int size;
	printf("enter your array size:");
	scanf("%d",&size);
	int arr[size],i,j;
	int target;
	printf("enter your target number:");
	scanf("%d",&target);
	printf("your array element:\n");
	for(i=0;i<size;i++)
	{
		printf("arr[%d]:",i);
		scanf("%d",&arr[i]);
	}
	printf("target sum of possible pair:\n");
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(arr[i]+arr[j]==target)
			{
				printf("(%d,%d)\n",arr[i],arr[j]);
			}
		}
	}
	return 0;
}
