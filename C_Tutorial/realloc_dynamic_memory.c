//realloc() dynamic memory
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,*ptr,i,sum=0;
	printf("enter the initial element:");
	scanf("%d",&n);
	//using calloc
	ptr=(int*)calloc(n,sizeof(int));
	if(ptr==NULL)
	{
		printf("memory is not allocated successfully\n");
	}
	else
	{
		printf("memory is allocated successfully\n");
	}
	int m;
	printf("you want to add element:");
	scanf("%d",&m);
	realloc(ptr,m);
	printf("memory reallocation successfully\n");
	printf("enter your array items:\n");
	for(i=0;i<n+m;i++)
	{
		scanf("%d",&ptr[i]);
	}
	printf("your array items:\n");
	for(i=0;i<n+m;i++)
	{
		printf("%d ",ptr[i]);
		sum+=sizeof(ptr[i]);
	}
	printf("\ntotal memory allocated=%d",sum);
	free(ptr);//free your memory
	return 0;
}
