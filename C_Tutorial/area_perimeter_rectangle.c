//area and perimeter of a ractangle.
/*#include<stdio.h>
int area(int l,int w)
{
	return l*w;
}
int perimeter(int l,int w)
{
	return 2*(l+w);
}
int main()
{
	int l1,w1,area1,peri;
	printf("enter the l1 and w1:");
	scanf("%d%d",&l1,&w1);
	area1=area(l1,w1);
	peri=perimeter(l1,w1);
	printf("area=%d\n",area1);
	printf("perimeter=%d",peri);
	return 0;
}*/

#include<stdio.h>
int area(int l,int w)
{
	int area=l*w;
	printf("area=%d",area);
}
int perimeter(int l,int w)
{
	int perimeter=2*(l+w);
	printf("perimeter=%d",perimeter);
}
int main()
{
	int l1,w1;
	printf("enter the length and width:");
	scanf("%d%d",&l1,&w1);
	area(l1,w1);
	perimeter(l1,w1);
	return 0;
}
