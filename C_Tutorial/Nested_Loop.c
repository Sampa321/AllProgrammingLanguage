/*#include<stdio.h>
int main()
{
	int i,n,j;
	printf("enter the number:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=1;j<=5;j++)
		{
			printf("%d\t",j);
		}
	}
	return 0;
}*/

/*#include<stdio.h>
int main()
{
	int i,j;
	for(i=5;i<=10;i++)
	{
		for(j=i;j<=10;j++)
		{
			if((i+j)%3==0 && (i+j)%5==0){
				printf("(%d,%d)\n",i,j);
			}
		}
	}
	return 0;
}*/

/*#include<stdio.h>
int main()
{
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			if((i+j)%2==0){
				printf("(%d,%d)\n",i,j);
			}
		}
	}
	return 0;
}*/

#include<stdio.h>
int main()
{
	int i,j;
	for(i=5;i<=10;i++)
	{
		for(j=i;j<=10;j++)
		{
			if((i+j)%3==0 || (i+j)%5==0){
				printf("(%d,%d)\n",i,j);
			}
		}
	}
	return 0;
}

