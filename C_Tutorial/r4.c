#include <stdio.h>
#include <stdlib.h>
int main()
{
	char str[34];
	printf("enter your string:");
	scanf("%s",str);
	lower(str);
	printf("%s",str);
	return 0;
}
