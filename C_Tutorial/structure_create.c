//structure is an userdefined datatypes where we can store different types of data using struct keyword.
#include<stdio.h>
struct student
{
	char name[20];
	int roll;
	float marks;
}s1;
int main()
{
//	struct student s1;
	printf("enter the student name:");
	scanf("%s",s1.name);
	printf("enter the student Roll No:");
	scanf("%d",&s1.roll);
	printf("enter the student marks:");
	scanf("%f",&s1.marks);
	printf("------------ My information-----------\n");
	printf("My name is:%s\n",s1.name);
	printf("My roll no is:%d\n",s1.roll);
	printf("My marks is:%f\n",s1.marks);
	printf("total memory allocation:%d",sizeof(s1));
	return 0;
}
