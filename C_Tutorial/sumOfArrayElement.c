//Write a program in c sum of array element.
#include<stdio.h>
int main()
{
	int size;
	printf("enter array size:");
	scanf("%d",&size);
	int marks[size],i,sum=0;
	printf("enter your array elements:\n");
	for(i=0;i<size;i++)
	{
		printf("arr[%d]=",i);
		scanf("%d",&marks[i]);
	}
	for(i=0;i<size;i++)
	{
		sum+=marks[i];
	}
	printf("sum of array elements=%d",sum);
	return 0;
}
