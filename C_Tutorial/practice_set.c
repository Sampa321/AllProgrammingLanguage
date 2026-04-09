//1.Largest between two and three number.
/*#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the value of a,b, and c:");
	scanf("%d%d%d",&a,&b,&c);
	if(a>=b && a>=c)
	{
		printf("%d is largest number",a);
	}
	else if(b>=a && b>=c)
	{
		printf("%d is largest number",b);
	}
	else
	{
		printf("%d is largest number",c);
	}
	return 0;
}*/

//2.Factorial using recursive.
/*#include<stdio.h>
int fact(int n)
{
	if(n==0 || n==1)
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);//3*fact(2)=3*2*fact(1)=3*2*1=6
	}
}
int main()
{
	int n1;
	printf("enter the value:");
	scanf("%d",&n1);
	int r=fact(n1);
	printf("factorial=%d",r);
	return 0;
}*/

//3.Fibonacci series
/*#include<stdio.h>
int fibo(int n)
{
	if(n==0)
	{
		return 0;
	}
	else if(n==1)
	{
		return 1;	
	}
	else
	{
		return fibo(n-1)+fibo(n-2);
	}
}
int main()
{
	int n1,i;
	printf("enter the value:");
	scanf("%d",&n1);
	printf("fibonaci series:\n");
	for(i=0;i<n1;i++)
	{
		printf("%d\t",fibo(i));
	}
	
	return 0;
}*/

//4.factorial a number.
/*#include<stdio.h>
int main()
{
	int n,i,fact=1;
	printf("enter the value of n:");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		fact*=i;
	}
	printf("factorial=%d",fact);
	return 0;
}*/

//5.Reverse of a number.
/*#include<stdio.h>
int main()
{
	int n,r,rev=0;
	printf("enter the value:");
	scanf("%d",&n);//112
	while(n!=0)
	{
		r=n%10;//2,1,1
		rev=rev*10+r;//2,21,211
		n=n/10;//11,1
	}
	printf("reverse=%d",rev);
	return 0;
}*/

//6.Greatest digit of a number.
#include<stdio.h>
int main()
{
	int n,r,r1;
	printf("enter the number:");//432
	scanf("%d",&n);
	r=n%10; //2
	while(n!=0)
	{
		r1=n%10;// 2,3,4
		if(r1>=r)// 2==2,3>2,4>3
		{
			r=r1;//r= 2,3,4
		}
		n=n/10;// 43,4,0
	}
	printf("Greatest digit=%d",r);
}

//7.palindrom number.
/*#include<stdio.h>
int main()
{
	int n,r,rev=0,temp;
	printf("enter the number:");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	if(temp==rev)
	{
		printf("%d is palindrom number",temp);
	}
	else
	{
		printf("%d is not palindrom number",temp);
	}
	return 0;
}*/

//8.Armstrong number.
/*#include<stdio.h>
#include<math.h>
int main()
{
	int n,temp,r,digit,temp1,r1,arm,i;
	printf("enter the number:");
	scanf("%d",&n);
	printf("armstrong number:\n");
	for(i=1;i<=n;i++)
	{
		temp=i;
		digit=0;
		while(temp!=0)
		{
			r=temp%10;
			digit+=1;
			temp=temp/10;
		}
		temp1=i;
		arm=0;
		while(temp1!=0)
		{
			r1=temp1%10;
			arm+=pow(r1,digit);
			temp1=temp1/10;
		}
		if(arm==i)
		{
			printf("%d\t",i);
		}
	}
	return 0;
}*/

//9.Perfect number.
/*#include<stdio.h>
int main()
{
	int n,i,sum,j;
	printf("enter the range:");
	scanf("%d",&n);
	printf("perfect number:");
	for(i=1;i<=n;i++)
	{
		sum=0;
		for(j=1;j<i;j++)
		{
			if(i%j==0)
			{
				sum+=j;
			}
		}
		if(sum==i)
		{
			printf("%d ",i);
		}
	}
	return 0;
}*/

//11.sum of array element.
/*#include<stdio.h>
int main()
{
	int size,i,sum=0;
	printf("enter your array size:");
	scanf("%d",&size);
	int arr[size];
	printf("enter your array elements:\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<size;i++)
	{
		sum+=arr[i];
	}
	printf("sum=%d",sum);
	return 0;
}*/

//12.Maximum and minimum of array element.
/*#include<stdio.h>
int main()
{
	int size,i,min,max;
	printf("enter your array size:");
	scanf("%d",&size);
	int arr[size];
	printf("enter your array elements:\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	min=arr[0];
	max=arr[0];
	for(i=0;i<size;i++)
	{
		if(min>arr[i])
		{
			min=arr[i];
		}
		if(max<arr[i])
		{
			max=arr[i];	
		}
	}
	printf("maximum element:%d\n",max);
	printf("minimum element:%d\n",min);
}*/

//13.sorting in accending and decending order array element.
/*#include<stdio.h>
int main()
{
	int size,temp,i,j;
	printf("enter your array size:");
	scanf("%d",&size);
	int arr[size];
	printf("enter your array elements:\n");//12,34,5,67,77
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Before sorting,your array elements:\n");
	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
	//ascending order:
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("\nAfter sorting,your array elements:\n");
	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}*/
/*#include<stdio.h>
int main()
{
	int size,i,temp,j;
	printf("enter the size of an array:");
	scanf("%d",&size);
	int arr[size];
	printf("enter your array elements:\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Before sorting,your array elements:\n");
	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
	//descending order:
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(arr[i]<arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("\nAfter sorting,your array elements:\n");
	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}*/

//14.Addition,subtraction,multiplication matrix element.
/*#include<stdio.h>
int main()
{
	int r,c,i,j;
	printf("enter the size of value of r and c:");
	scanf("%d%d",&r,&c);
	int m1[r][c],m2[r][c];
	printf("enter your 1st matrix of array element:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("m1[%d][%d]=",i,j);
			scanf("%d",&m1[i][j]);
		}
	}
	printf("enter your 2nd matrix of array element:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("m2[%d][%d]=",i,j);
			scanf("%d",&m2[i][j]);
		}
	}
	printf("your 1st matrix of array element:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",m1[i][j]);
		}
		printf("\n");
	}
	printf("your 2nd matrix of array element:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",m2[i][j]);
		}
		printf("\n");
	}
	printf("add two matrix:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",m1[i][j]+m2[i][j]);
		}
		printf("\n");
	}
	return 0;
}*/
/*#include<stdio.h>
int main()
{
	int r,c,i,j;
	printf("enter the size of r and c:");
	scanf("%d%d",&r,&c);
	int m1[r][c],m2[r][c];
	printf("enter your 1st matrix of array element:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("m1[%d][%d]=",i,j);
			scanf("%d",&m1[i][j]);
		}
	}
	printf("enter your 2nd matrix of array element:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("m2[%d][%d]=",i,j);
			scanf("%d",&m2[i][j]);
		}
	}
	printf("your 1st matrix of array element:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",m1[i][j]);
		}
		printf("\n");
	}
	printf("your 2nd matrix of array element:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",m2[i][j]);
		}
		printf("\n");
	}
	printf("sub of two matrix:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",m1[i][j]-m2[i][j]);
		}
		printf("\n");
	}
	return 0;
}*/

/*#include<stdio.h>
int main()
{
	int r,c,i,j,k;
	printf("enter the size of r and c:");
	scanf("%d%d",&r,&c);
	int m1[r][c],m2[r][c],sum[r][c];
	printf("enter your 1st matrix of array element:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("m1[%d][%d]=",i,j);
			scanf("%d",&m1[i][j]);
		}
	}
	printf("enter your 2nd matrix of array element:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("m2[%d][%d]=",i,j);
			scanf("%d",&m2[i][j]);
		}
	}
	printf("your 1st matrix of array element:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",m1[i][j]);
		}
		printf("\n");
	}
	printf("your 2nd matrix of array element:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",m2[i][j]);
		}
		printf("\n");
	}
	printf("after matrix multiplication:\n");
	for(i=0;i<r;i++)//i=0
	{
		for(j=0;j<c;j++)//j=0,1
		{
			sum[i][j]=0;
			for(k=0;k<c;k++)//k=0,1
			{
				sum[i][j]+=m1[i][k]*m2[k][j];//m1[0][0]*m2[0][0]+m1[0][1]*m2[[1][0]
							
			}
			printf("%d\t",sum[i][j]);
		}
		printf("\n");
	}
	return 0;
}*/

//15.Transpose of a matrix.
/*#include<stdio.h>
int main()
{
	int r,c,i,j;
	printf("enter the value od r and c:");
	scanf("%d%d",&r,&c);
	int a[r][c],t[r][c];
	printf("enter your matrix array element:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("before transpose,your matrix array:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("After transpose,your matrix array:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			t[i][j]=a[j][i];
			printf("%d\t",t[i][j]);
		}
		printf("\n");
	}
}*/

//16.sum of digonal element.
/*#include<stdio.h>
int main()
{
	int r,c,sum=0,i,j;
	printf("enter the value of r and c:");
	scanf("%d%d",&r,&c);
	int m[r][c];
	printf("enter your array element:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
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
	printf("sum of digonal element:");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i==j)
			{
				sum+=m[i][j];
			}	
		}
	}
	printf("%d\t",sum);
	return 0;
}*/

//17.Reverse a string.
/*#include<stdio.h>
#include<string.h>
int main()
{
	int size,len,i,j=0;
	printf("enter the size:");
	scanf("%d",&size);
	char string[size],rev[size];
	printf("enter the string:");
	scanf("%s",&string);
	len=strlen(string);
	for(i=len-1;i>=0;i--)
	{
		rev[j]=string[i];
		j++;
	}
	printf("original string=%s\n",string);
	printf("reverse string=%s",rev);
	return 0;
}*/


