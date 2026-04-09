//While loop VS dO while Loop.
/*If the condition is false statement not to be execute.
If the condition is false statement must be one time execute.*/
/*#include<stdio.h>
int main()
{
	int i=0;
	while(i<=10)
	{
		printf("%d\t",i);
		i++;
	}
	return 0;
}*/

#include<stdio.h>
int main()
{
	int i;
	do
	{
		printf("%d\t",i);
		i++;
	}
	while(i>=10);
	return 0;
}
