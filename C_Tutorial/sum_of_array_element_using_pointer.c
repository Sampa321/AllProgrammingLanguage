//sum of array element using pointer.
#include<stdio.h>
int main()
{
	int size,i,*p,*q,sum=0;
	printf("enter your array size:");
	scanf("%d",&size);
	int arr[size];
	printf("enter your array element:\n");
	for(i=0;i<size;i++)
	{
		printf("arr[%d]=",i);
		scanf("%d",&arr[i]);
	}
	//same meaning p & q(address of array at index 0)
	p=arr;//pointer is set at 0 index
	/*q=&arr[0];
	printf("p=%d\n",p);
	printf("q=%d\n",q);*/
	for(i=0;i<size;i++)
	{
		sum+=*(p+i);
	}
	printf("sum of array element=%d\t",sum);
	return 0;
}
