//print a transpose matrix of a matrix.
#include<stdio.h>
int main()
{
	int r,c,i,j;
	printf("enter your matrix row and column:");
	scanf("%d%d",&r,&c);
	int m[r][c],t[r][c];
	printf("enter your matrix element:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++)
		{
			printf("m[%d][%d]=",i,j);
			scanf("%d",&m[i][j]);	
		}
	}
	printf("your original matrix:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++)
		{
			printf("%d\t",m[i][j]);
		}
		printf("\n");
	}
	//store original matrix element in transpose matrix
	for(i=0;i<r;i++){
		for(j=0;j<c;j++)
		{
			t[j][i]=m[i][j];
		}
		printf("%d\t",t[i][j]);
	}
	/*printf("your transpose matrix:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++)
		{
			printf("%d\t",t[i][j]);
		}
		printf("\n");
	}*/
	
	return 0;
}
