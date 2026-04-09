//2.Write a c program to reverse the array element.
#include<stdio.h>
int main()
{
	int size,i;
	printf("enter your array size:");
	scanf("%d",&size);
	int arr[size];
	printf("enter your array element:\n");
	for(i=0;i<size;i++)
	{
		printf("arr[%d]=",i);
		scanf("%d",&arr[i]);
	}
	printf("your array:\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\nyour reverse array element:\n");
	for(i=size-1;i>=0;i--)
	{
		printf("%d\t",arr[i]);
	}
	return 0;
}
