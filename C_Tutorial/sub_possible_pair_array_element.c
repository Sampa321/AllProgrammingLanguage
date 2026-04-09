//sub of possible pair array element:
#include<stdio.h>
int main()
{
	int size,sum=0;
	printf("enter your array size:");
	scanf("%d",&size);
	int arr[size],i,j;
	printf("enter your array element:\n");
	//array input:
	for(i=0;i<size;i++)
	{
		printf("arr[%d]=",i);
		scanf("%d",&arr[i]);
	}
	//array output:
	printf("your array element:\n");
	for(i=0;i<size;i++)
	{
		printf("%d\n",arr[i]);
	}
	printf("possible pair sum:\n");
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			printf("(arr[%d]-arr[%d])=",j,i);
			int sub=arr[j]-arr[i];
			printf("(%d-%d)=%d\n",arr[j],arr[i],sub);
		}
	}
	return 0;
}
