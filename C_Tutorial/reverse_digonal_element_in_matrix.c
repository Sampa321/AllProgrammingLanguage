//sum of reverse digonal element in a matrix.
#include<stdio.h>
int main()
{
	int r,c,sum=0;
	printf("enter your matrix row and column:");
	scanf("%d%d",&r,&c);
	int m[r][c],i,j;
	printf("enter your matrix elements:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("m[%d][%d]=",i,j);
			scanf("%d",&m[i][j]);
		}
	}
	printf("your matrix:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{ 
			printf("%d\t",m[i][j]);
		}
		printf("\n");
	}
	//print reverse digonal element:
	printf("matrix digonal elements:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{ 
			if((i+j)==(r-1))
			{
				printf("%d\t",m[i][j]);
				sum+=m[i][j];
			}
			
		}
	}
	 
	printf("\nsum of digonal elements=%d",sum);
	return 0;
}
