 //print all even number 1 to 50.
/*#include <stdio.h>
int main()
{
	int i,n;
	printf("enter the number:");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		if(i%2==0){
			printf("even number=%d\n",i);
		}
	}
	return 0;
}*/
/*#include <stdio.h>
int main()
{
	int i,n;
	printf("enter the number:");
	scanf("%d",&n);
	for (i=2;i<=n;i+=2)
	{
		printf("even number=%d\n",i);
	}
	return 0;
}*/

#include<stdio.h>
int main()
{
	int i;
	for(i=1;i<15;i++)
	{
		if(i%2!=0)
		{
			continue;
		}
	printf("%d\n",i);
	}
	return 0;
}


