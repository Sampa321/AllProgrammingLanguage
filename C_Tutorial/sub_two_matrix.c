//sub of two matrix:
 
#include<stdio.h>
int main()
{
	int r1,c1,r2,c2;
	printf("enter your 1st matrix row and column:");
	scanf("%d%d",&r1,&c1);
	printf("enter your 2nd matrix row and column:");
	scanf("%d%d",&r2,&c2);
	int m1[r1][c1],m2[r2][c2],i,j,sub[r1][c1];
	printf("enter your 1st matrix elements:\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("m1[%d][%d]=",i,j);
			scanf("%d",&m1[i][j]);
		}
	}
	printf("enter your 2nd matrix elements:\n");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("m2[%d][%d]=",i,j);
			scanf("%d",&m2[i][j]);
		}
	}
	printf("your 1st matrix:\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("%d\t",m1[i][j]);
		}
		printf("\n");
	}
	printf("your 2nd matrix:\n");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("%d\t",m2[i][j]);
		}
		printf("\n");
	}
	//sub of two matrix:
	printf("sub of 1st and 2nd matrix:\n");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			sub[i][j]=m1[i][j]-m2[i][j];
			printf("%d\t",sub[i][j]);                                                            
		}
		printf("\n");
	}
	return 0;
}
