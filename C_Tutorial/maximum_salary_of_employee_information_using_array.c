//print employee information which get maximum salary using structure.
#include<stdio.h>
struct employee
{
	char name[30];
	int id;
	float salary;
};
int main()
{
	int n,i,max_salary_index=0;
	printf("enter the number of employee:");
	scanf("%d",&n);//4
	struct employee e[n];//e[0],e[1],e[2],e[3]
	printf("------------Enter all employee imformation-----------\n");
	for(i=0;i<n;i++)
	{
		printf("Enter %d employee information:\n",i+1);
		printf("Enter name:");
		scanf("%s",e[i].name);
		printf("Enter id:");
		scanf("%d",&e[i].id);
		printf("Enter salary:");
		scanf("%f",&e[i].salary);
	}
	//print all employee information
	printf("-----------All employee imformation-----------\n");
	for(i=0;i<n;i++)
	{
		printf("%d employee information:\n",i+1);
		printf("Enter your name:%s\n",e[i].name);
		printf("Enter your id:%d\n",e[i].id);
		printf("Enter your salary:%0.2f\n",e[i].salary);
	}
	printf("----------All information of employee who getting Maximum salary----\n");
	float max_salary=e[0].salary;
	for(i=1;i<n;i++)
	{
		if(max_salary<e[i].salary)
		{
			max_salary=e[i].salary;
			max_salary_index=i;
		}
	}
	printf("Name:%s\n",e[max_salary_index].name);
	printf("ID:%d\n",e[max_salary_index].id);
	printf("Salary:%0.2f\n",e[max_salary_index].salary);
	return 0;
}
