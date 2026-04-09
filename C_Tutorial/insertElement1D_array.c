//WAP to insert an element  at a specipic position in a 1D array.
#include<stdio.h>
int main()
{
	int size,i,ele,pos;
	printf("Enter the size of an array:");
	scanf("%d",&size);
	int arr[size];
	printf("Enter the array element:\n");
	for(i=0;i<size;i++)
	{
		printf("arr[%d]=",i);
		scanf("%d",&arr[i]);
		
	}
	printf("Your array:\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\nEnter your element:");
	scanf("%d",&ele);
	printf("Enter your position:");
	scanf("%d",&pos);
	size=size+1;
	for(i=size-1;i>=pos;i--)
	{
		arr[i]=arr[i-1];
	}
	arr[pos-1]=ele;
	//print your final array after insert
	printf("After insert,your array element:\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",arr[i]);
	}
	return 0;
}
