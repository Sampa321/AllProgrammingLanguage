#include <stdio.h>
int main(){
	int a,b;
	char ch;
	printf("enter the value of a,b:");
	scanf("%d%d",&a,&b);
	fflush(stdin);
	printf("enter the char:");
	scanf("%c",&ch);
	printf("a=%d,b=%d\n",a,b);
	printf("ch=%c",ch);
}
