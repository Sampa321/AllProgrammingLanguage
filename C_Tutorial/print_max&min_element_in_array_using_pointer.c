//print max and min array element using pointer.
#include<stdio.h>
int main()
{
	int size,i,*p,*q,min,max;
	printf("enter your array size:");
	scanf("%d",&size);
	int arr[size];
	printf("enter your array element:\n");
	for(i=0;i<size;i++)
	{
		printf("arr[%d]=",i);
		scanf("%d",&arr[i]);
	}
	p=arr;
	max=*arr;
	min=arr[0];
	for(i=0;i<size;i++)
	{
		if(max<*(p+i))
		{
			max=*(p+i);
		}
		if(min>*(p+i))
		{
			min=*(p+i);
		}
	}
	printf("max element=%d\n",max);
	printf("min element=%d\n",min);
	return 0;
}
