//swap two number without third variables.
/*#include <stdio.h>
int main()
{
	int a,b;
	printf("enter the value of a and b:"); //12,13
	scanf("%d%d",&a,&b);
	printf("before swaping,a=%d,b=%d\n",a,b);
	a=a+b; //25
	b=a-b; //25-13=12
	a=a-b; //25-12=13
	printf("after swaping,a=%d,b=%d",a,b);
}*/

#include <stdio.h>
int main()
{
	int a,b;
	printf("enter the value of a and b:"); //3,4
	scanf("%d%d",&a,&b);
	printf("before swaping,a=%d,b=%d\n",a,b);
	a=a*b; //12
	b=a/b; // 3
	a=a/b; // 4
	printf("after swaping,a=%d,b=%d",a,b);
}

//swap two number without third variables.(bitwise operator)
/*#include <stdio.h>
int main()
{
	int a,b;
	printf("enter the two value:");
	scanf("%d%d",&a,&b);
	printf("before swaping,a=%d,b=%d\n",a,b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("After swaping,a=%d,b=%d",a,b);
}*/
