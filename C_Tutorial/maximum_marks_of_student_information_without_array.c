//print student information which get maximum marks without array.
#include<stdio.h>
struct student
{
	char name[30];
	int roll;
	float mark;
}s1,s2,s3;
int main()
{
	printf("---------Enter student information----\n");
	printf("enter 1st student information:\n");
	printf("enter your name:");
	scanf("%s",s1.name);
	printf("enter your Roll No:");
	scanf("%d",&s1.roll);
	printf("enter your marks:");
	scanf("%f",&s1.mark);
	printf("enter 2nd student information:\n");
	printf("enter your name:");
	scanf("%s",s2.name);
	printf("enter your Roll No:");
	scanf("%d",&s2.roll);
	printf("enter your marks:");
	scanf("%f",&s2.mark);
	printf("enter 3rd student information:\n");
	printf("enter your name:");
	scanf("%s",s3.name);
	printf("enter your Roll No:");
	scanf("%d",&s3.roll);
	printf("enter your marks:");
	scanf("%f",&s3.mark);
	printf("-------- student information----\n");
	printf("1st student information:\n");
	printf("your name:");
	printf("%s\n",s1.name);
	printf("your Roll No:");
	printf("%d\n",s1.roll);
	printf("your marks:");
	printf("%f\n",s1.mark);
	printf("2nd student information:\n");
	printf("your name:");
	printf("%s\n",s2.name);
	printf("your Roll No:");
	printf("%d\n",s2.roll);
	printf("your marks:");
	printf("%f\n",s2.mark);
	printf("3rd student information:\n");
	printf("your name:");
	printf("%s\n",s3.name);
	printf("your Roll No:");
	printf("%d\n",s3.roll);
	printf("your marks:");
	printf("%f\n",s3.mark);
	printf("-----student information which get maximum marks--------------\n");
	if(s1.mark>=s2.mark && s1.mark>=s3.mark)
	{
		printf("Name:%s\n",s1.name);
		printf("Roll:%d\n",s1.roll);
		printf("Mark:%0.2f\n",s1.mark);
	}
	else if(s2.mark>=s1.mark && s2.mark>=s3.mark)
	{
		printf("Name:%s\n",s2.name);
		printf("Roll:%d\n",s2.roll);
		printf("Mark:%0.2f\n",s2.mark);
	}
	else
	{
		printf("Name:%s\n",s3.name);
		printf("Roll:%d\n",s3.roll);
		printf("Mark:%0.2f\n",s3.mark);
	}
	return 0;
}
