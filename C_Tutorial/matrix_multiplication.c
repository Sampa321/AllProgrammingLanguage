//matrix multiplication:
#include<stdio.h>
int main()
{
	int r,c,i,j,k;
	printf("enter the matrix row and column:");
	scanf("%d%d",&r,&c);
	int a[r][c],b[r][c],R[r][c];
	printf("enter your first matrix element:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("your first matrix:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("enter your second matrix element:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("b[%d][%d]=",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	printf("your second matrix:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			R[i][j]=0;
			for(k=0;k<r;k++)
			{
				R[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	printf("After multiplication,your multiplication matrix:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",R[i][j]);
		}
		printf("\n");
	}
	return 0;
}
