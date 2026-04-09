//print all odd number within a range.
/*#include<stdio.h>
int main()
{
	int i,n;
	printf("enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2!=0){
			printf("odd number=%d\n",i);
		}
	}
	return 0;
}*/

#include<stdio.h>
int main()
{
	int i,n;
	printf("enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i+=2)
	{
		printf("odd number=%d\n",i);
		
	}
	return 0;
}
