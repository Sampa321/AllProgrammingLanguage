//1.Write a c program to find the maximum and minimum element in an array.

//3.Write a c program to inplement quick sort and merge sort.
//4.write a c program to implement selection and insertion sort.
//5.write a c program to implement linear search and binary search.
//6.convert an infix expression to postfix using a stack.
//7.Implement a stack include methods for push,pop,peek, and empty.
//8.Implement a queue include methods for enqueue,dequeue,peek and empty.

#include<stdio.h>
int main()
{
	int size,i;
	printf("enter your array size:");
	scanf("%d",&size);
	int arr[size],min,max;
	printf("enter your array element:\n");
	for(i=0;i<size;i++)
	{
		printf("arr[%d]=",i);
		scanf("%d",&arr[i]);
	}
	min=arr[0],max=arr[0];
	for(i=0;i<size;i++)
	{
		if(min>arr[i])
		{
			min=arr[i];
		}
	}
	for(i=0;i<size;i++)
	{
		if(max<arr[i])
		{
			max=arr[i];
		}
	}
	printf("minimum number=%d\n",min);
	printf("maximum number=%d",max);
}

