/*#include<stdio.h>
int main()
{
	int i,n,j;
	printf("enter the number:");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		for(j=i;j<=4;j++)
		{
			printf("%d\t",i+j);
		}
	}
	return 0;
}*/

#include<stdio.h>
int main()
{
	int n,i,j;//4
	printf("enter the number:");
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		for(j=4;j>0;j--){
			printf("%d\t",i+j);
		}
	}
}
