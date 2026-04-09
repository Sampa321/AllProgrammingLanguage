//how to find the frequency of each element in a 1D array.
#include<stdio.h>
int main()
{
	int size,i,j,count;
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
		count=0;
		for(j=0;j<size;j++)
		{
			if(arr[i]==arr[j])
			{
				count+=1;
			}
			
		}
		printf("%d is present %d times\n",arr[i],count);
	}
 
	return 0;
}
