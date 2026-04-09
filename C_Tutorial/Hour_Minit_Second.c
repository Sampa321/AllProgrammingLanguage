//WAP to convert specified seconds into hour,minit and seconds.
#include <stdio.h>
int main()
{
	int seconds,hour,Minit,second;
	printf("enter the seconds:");
	scanf("%d",&seconds);
	printf("Total second is:%d\n",seconds);
	hour=(seconds/3600);
	seconds=(seconds%3600);
	Minit=(seconds/60);
	second=(seconds%60);
	printf("Hour=%d\nMinit=%d\nSeconds=%d\n",hour,Minit,second);
}

