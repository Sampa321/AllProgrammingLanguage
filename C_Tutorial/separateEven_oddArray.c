//WAP in c to separate odd and even integers into separate arrays.
#include<stdio.h>
int main()
{
	int size,i;
	printf("enter your array size:");
	scanf("%d",&size);
	int arr[size];
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
	int even_arr[size];
	int odd_arr[size];
	//separate array start:
	for(i=0;i<size;i++)
	{ 
		if(arr[i]%2==0)
		{
			even_arr[i]=arr[i];	
		}
		else
		{
		 	odd_arr[i]=arr[i];	
		}
	}
	printf("\nyour even array element:\n");
	for(i=0;i<size;i++)
	{ 
		if(arr[i]%2!=0)
		{
			continue;
		}
		printf("%d\t",even_arr[i]);
	}
	printf("\nyour odd array element:\n");
	for(i=0;i<size;i++)
	{ 
		if(arr[i]%2==0)
		{
			continue;
		}
		printf("%d\t",odd_arr[i]);
	}
	return 0;
}
