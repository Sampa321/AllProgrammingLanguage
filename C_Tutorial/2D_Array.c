//user input of 2D Array.
#include<stdio.h>
int main()
{
	int r,c;
	printf("enter your array matrix row and column:");
	scanf("%d%d",&r,&c); 
	int m[r][c],i,j;
	//user input:
	printf("Enter your array matrix element:\n");
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
	return 0;
	
}
