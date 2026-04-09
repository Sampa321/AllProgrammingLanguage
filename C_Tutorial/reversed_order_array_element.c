//print Array element in reverse order.
#include<stdio.h>
int main()
{
	int size,i;
	printf("enter your array size:");
	scanf("%d",&size);
	int arr[size],new_arr[size];;
	printf("enter your array element:\n");
	for(i=0;i<size;i++)
	{
		printf("arr[%d]=",i);
		scanf("%d",&arr[i]);
	}
	printf("your array element:\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\nafter reversed order,your element:\n");
	for(i=0;i<size;i++)
	{
		new_arr[i]=arr[size-i-1];
		printf("%d\t",new_arr[i]);
	}
	return 0;
}
