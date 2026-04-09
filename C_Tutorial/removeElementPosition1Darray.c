//WAP to remove an element  at a specipic position in a 1D array.
#include<stdio.h>
int main()
{
	int size,i,j;
	printf("enter your array size:");
	scanf("%d",&size);
	int pos;
	printf("enter your remove array element position:");
	scanf("%d",&pos);
	int arr[size];
	printf("enter your array elements:\n");
	for(i=0;i<size;i++)
	{
		printf("arr[%d]=",i);
		scanf("%d",&arr[i]);
	}
 	printf("your array elements:\n");
	for(i=0;i<size;i++)
	{
		if(arr[i]==arr[pos-1])
		{
			continue;
			
		}
		printf("%d\t",arr[i]);
	}
	return 0;
}
