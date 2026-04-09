//print array element using pointer dynamic malloc method
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr,n,i;
	printf("enter the size of an array:");
	scanf("%d",&n);
	ptr=(int*)malloc(sizeof(int));
	printf("enter your array element:\n");
	for(i=0;i<n;i++)
	{
		printf("ptr[%d]=",i);
		scanf("%d",&ptr[i]);
	}
	printf("your array element:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",ptr[i]);	
	}
	//memory allocated
	printf("\nmemory allocated for first index:%d",sizeof(ptr[0]));
	return 0;
}
