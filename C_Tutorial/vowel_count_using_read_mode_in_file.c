//count vowel which is write in file.
#include<stdio.h>
int main()
{
	FILE *ptr;
	ptr=fopen("sampa.txt","r");
	if(ptr==NULL)
	{
		printf("file is not open successfully");
	}
	else
	{
		char ch;
		int v_count=0;
		printf("file open successfully");
		while((ch=fgetc(ptr))!=EOF)
		{
			if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
			v_count+=1;
		}
		printf("\nvowel count=%d",v_count);
	}

	return 0;
}
