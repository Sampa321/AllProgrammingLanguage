//check a matrix is symmetric or not.
#include<stdio.h>
int main()
{
	int r,c,i,j,flag=0;
	printf("enter your matrix row and column size:");
	scanf("%d%d",&r,&c);
	int m[r][c],t[r][c];
	printf("enter your matrix element:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("m[%d][%d]=",i,j);
			scanf("%d",&m[i][j]);
		}
	}
	printf("your original matrix:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",m[i][j]);
		}
		printf("\n");
	}
	//start transpose matrix
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			t[j][i]=m[i][j];	 
		}
	}
	//check symmetric or not
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(t[i][j]!=m[i][j])
			{
			 flag=1;
			 break;	
			}
		}
	}
	if(flag==0){
		printf("\nsymmetric");
	}
	else{
		printf("\nnot symmetric");
	}
	return 0;
}
