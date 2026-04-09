//qs-1:
/*#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter the rows:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n/;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}*/

//qs-2:
/*#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter the rows:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}*/

//qs-3:
/*#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter the rows:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%d ",j+1);
		}
		printf("\n");
	}
	return 0;
}*/

//qs-4:
/*#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter the rows:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%d ",i+j+1);
		}
		printf("\n");
	}
	return 0;
}*/

//qs-5:
/*#include<stdio.h>
int main()
{
	int i,j,n,sum=0;
	printf("enter the rows:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			sum+=1;
			printf("%d ",sum);
		}
		printf("\n");
	}
	return 0;
}*/

//qs-6:
/*#include<stdio.h>
int main()
{
	int i,j,sum,n;
	printf("enter the rows:");
	scanf("%d",&n);
	printf("print the start number:");
	scanf("%d",&sum);
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%d ",sum);
			sum-=1;
		}
		printf("\n");
	}
	return 0;
}*/

//qs-7:
/*#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter the rows:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%d ",i+1);
		}
		printf("\n");
	}
	return 0;
}  */

//qs-8:
/*#include<stdio.h>
int main()
{
	int i,j,k,n;
	printf("enter the rows:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			printf(" ");
		}
		for(k=0;k<=i;k++)
		{
			
			printf("* ");
		}
		printf("\n");
	}
	return 0;
} */

//qs-9:
/*#include<stdio.h>
int main()
{
	int i,j,k,n;
	printf("enter the rows:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			printf(" ");
		}
		for(k=0;k<n-i;k++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}*/

//qs-10:
/*#include<stdio.h>
int main()
{
	int i,j,k,n;
	printf("enter the rows:");
	scanf("%d",&n);	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			printf(" ");
		}
		for(k=0;k<=i;k++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for(i=n-2;i>=0;i--)
	{
		for(j=0;j<n-i-1;j++)
		{
			printf(" ");
		}
		for(k=0;k<=i;k++)
		{
			printf("* ");
		}
		printf("\n");
	}	
	return 0;
} */

//qs-11:
/*#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter the rows:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for(i=n-3;i>=0;i--)//2,1,0
	{
		for(j=0;j<=i;j++)//
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
} */

//qs-12:
/*#include<stdio.h>
int main()
{
	char i,j;
	for(i=96;i<100;i++)
	{
		for(j=96;j<=i;j++)
		{
			printf("%c ",i+1);
		}
		printf("\n");
	}
	return 0;
} */

//qs-13:
/*#include<stdio.h>
int main()
{
	int n=65;
	char i,j;
	for(i=n;i<69;i++)
	{
		for(j=65;j<=i;j++)
		{
			printf("%c ",n);
			n+=1;
		}
		printf("\n");
	}
	return 0;
} */

//qs-14:
#include<stdio.h>
int main()
{
	char i,j;
	for(i=65;i<69;i++)
	{
		for(j=65;j<=i;j++)
		{
			printf("%c ",j);
		}
		printf("\n");
	}
	return 0;
} 
 


