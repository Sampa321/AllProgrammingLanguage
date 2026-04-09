//Total memory allocated using dynamic malloc method of an array
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,*ptr,memory_allocated=0;
	printf("enter the size of an array:");
	scanf("%d",&n);
	ptr=(int*)malloc(sizeof(int));
	printf("enter your array elements:\n");
	for(i=0;i<n;i++)
	{
		printf("ptr[%d]=",i);
		scanf("%d",&ptr[i]);
	}
	printf("your array element:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",ptr[i]);
		memory_allocated=memory_allocated+sizeof(ptr[i]);
	}
	printf("\nmemory allocated only first index=%d",sizeof(ptr[0]));
	printf("\nTotal memory allocated=%d",memory_allocated);
	return 0;
}
