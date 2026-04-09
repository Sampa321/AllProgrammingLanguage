#include<stdio.h>
struct employee
{
	char name[30];
	int id;
	float salary;
};
int main()
{
	int n,i;
	printf("Enter number of employee:");
	scanf("%d",&n);
	struct employee e[n]; // n=4 e0,e1,e2,e3
	printf("----------Enter all employee information------------------------\n");
	for(i=0;i<n;i++) // i=0 1 2 3 
	{
		printf("Enter %d employee information:\n",i+1);
		printf("Enter name:");
		scanf("%s",e[i].name);
		printf("Enter Id:");
		scanf("%d",&e[i].id);
		printf("Enter Salaray:");
		scanf("%f",&e[i].salary);		
	}
	//print all employee information
	printf("----------All employee information------------------------\n");
	for(i=0;i<n;i++) // i=0 1 2 3 
	{
		printf("%d employee information:\n",i+1);
		printf("My Name Is=%s\n",e[i].name);
		printf("My Id=%d\n",e[i].id);
		printf("My Salary=%f\n",e[i].salary);		
	}
	float max_salary=e[0].salary;
	int max_salary_index;
	for(i=0;i<n;i++)
	{
		if(max_salary<=e[i].salary);
		max_salary_index=i;
	}
	print("----------info-----\n");
	printf("name=%s\n",e[max_salary_index].name);
	printf("id=%d\n",e[max_salary_index].id);
	printf("samary=%f\n",e[max_salary_index].salary);
	return 0;
}
