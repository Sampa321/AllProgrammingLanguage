//swaping two number using called by reference.
#include<stdio.h>
int swap(int *p,int *q)//12,5
{

	int temp=*p;
	*p=*q;
	*q=temp;
	printf("after swaping,a=%d,b=%d\n",*p,*q);
}
int main()
{
	int a,b;
	printf("enter the value of a and b:");
	scanf("%d%d",&a,&b);
	printf("before swaping,a=%d,b=%d\n",a,b);
	swap(&a,&b);
	return 0;
}
