//Divided element in two parts.
#include<stdio.h>
int main()
{
	int size,i,mid,ei;
	printf("enter your array size:");
	scanf("%d",&size);
	int arr[size];
	printf("enter your array element:\n");
	for(i=0;i<size;i++)
	{
		printf("arr[%d]=",i);
		scanf("%d",&arr[i]);
	}
	printf("your array element:\n");
	for(i=0;i<size;i++)
	{
		ei=i;
		printf("%d\t",arr[i]);
	}
	mid=(0+ei)/2;
	printf("\nenter divided element:\n");
	for(i=0;i<mid+1;i++)
	{
		printf("%d\t",arr[i]);
		
	}
	printf("\nenter divided element:\n");
	for(i=mid+1;i<size;i++)
	{
		printf("%d\t",arr[i]);
	}
	return 0;
}
