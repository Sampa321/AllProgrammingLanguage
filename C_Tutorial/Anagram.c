//check a number is anagram or not.
#include<stdio.h>
int main()
{
	int size;
	printf("enter string size:");
	scanf("%d",&size);
	char string1[size];
	printf("enter your 1rd string:");
	scanf("%s",string1);
	char string2[size];
	printf("enter your 2nd string:");
	scanf("%s",string1);
	string a1=str_split(strtolower(string1));
	string a2=str_split(strtolower(string2));
	sort(a1);
	sort(a2);
	if(a1==a2)
	{
		printf("%s is anagram",a1);
	}
	else
	{
		printf("Not anagram");
	}
}


//#include<stdio.h>
//int main()
//{
//	char a[]="dsecimal";
//	char b[]="medical";
//	int i,H[29]={};
//	for(i=0;a[i]!='\0';i++)
//	{
//		H[a[i]-97]+=1;
//	}
//	for(i=0;b[i]!='\0';i++)
//	{
//		H[b[i]-97]-=1;
//		if(H[b[i]-97]<0)
//		{
//			printf("Not anagram");
//			break;
//		}
//	}
//	if(b[i]=='\0')
//	{
//		printf("anagram");
//	}
//}
// 
