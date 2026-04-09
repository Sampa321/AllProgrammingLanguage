#include <stdio.h>
void insertionSort(int A[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		int t=A[i];
		int j=i-1;
		while(j>=0 && A[j]>t)
		{
			A[j+1]=t;
			j--;
		}
		A[j+1]=t;
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",A[i]);
	}
}
int main()
{
	int n,i;
	printf("enter your array size:");
	scanf("%d",&n);
	int A[n];
	printf("enter your array element:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	insertionSort(A[n],n);
	}
