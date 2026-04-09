//create a structure of students and print atleast 3 student information(name,roll,marks)
#include<stdio.h>
struct student
{
	char name[20];
	int roll;
	float marks;
}s1,s2,s3;
int main()
{
//	struct student s1 and s2 and s3;
	printf("Enter student1,student2 and student3 name:");
	scanf("%s%s%s",s1.name,s2.name,s3.name);
	printf("Enter student1,student2 and student3 Roll:");
	scanf("%d%d%d",&s1.roll,&s2.roll,&s3.roll);
	printf("Enter student1,student2 and student3 Marks:");
	scanf("%f%f%f",&s1.marks,&s2.marks,&s3.marks);
	//print your informartion
	printf("----------------student1 Information---------------\n");
	printf("student1 Name is: %s\n",s1.name);
	printf("student1 roll  Number: %d\n",s1.roll);
	printf("student1  Marks is: %f \n",s1.marks);
	printf("----------------student2 Information---------------\n");
	printf("student2 Name is: %s\n",s2.name);
	printf("student2 Roll Number: %d\n",s2.roll);
	printf("student2 Marks is: %f \n",s2.marks);
	printf("----------------student3 Information---------------\n");
	printf("student3 Name is: %s\n",s3.name);
	printf("student3 roll  Number: %d\n",s3.roll);
	printf("student3  Marks is: %f \n",s3.marks);
	printf("---------------------Total Memory Allocated-------------------\n");
	printf("Memory_allocated=%d",sizeof(s1)+sizeof(s2)+sizeof(s3));
	return 0;
}
