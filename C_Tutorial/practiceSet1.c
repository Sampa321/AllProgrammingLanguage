// #include <stdio.h>
// int main(){
// 	int a,b,sum;
// 	printf("enter the number:");
// 	scanf("%d%d",&a,&b);
// 	printf("sum=%d\n",a+b);
// 	printf("sub=%d\n",a-b);
// 	printf("mul=%d\n",a*b);
// 	printf("div=%d\n",a/b);
// 	printf("mod=%d\n",a%b);
// 	return 0;
// }

//#include <stdio.h>
//int main(){
//	int l,b,peri,area;
//	printf("enter the value:");
//	scanf("%d%d",&l,&b);
//	peri=2*(l+b);
//	area=(l*b);
//	printf("perimeter=%d\n",peri);
//	printf("area=%d",area);
//	return 0;
//}


//#include <stdio.h>
//int main(){
//	int a,b,c,d,e,Total_marks,avg;
//	printf("enter the marks:");
//	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
//	Total_marks=(a+b+c+d+e);
//	avg=(Total_marks/5);
//	printf("Total marks=%d\n",Total_marks);
//	printf("average=%d",avg);
//}

//WAP CALCULATE THE SIMPLE INTEREST
//#include <stdio.h>
//int main(){
//	int p,r,t,SI;
//	printf("enter the value of p,r,t:");
//	scanf("%d%d%d",&p,&r,&t);
//	printf("p=%d,r=%d,t=%d\n",p,r,t);
//	SI=(p*r*t/100);
//	printf("SI=%d",SI);
//}


//1.sum of even and odd digit of this number 7896.
/*#include<stdio.h>
int main()
{
	int n,r,even_sum=0,odd_sum=0;
	printf("enter the number:");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		if(r%2==0)
		{
			even_sum+=r;
		}
		else
		{
			odd_sum+=r;
		}
		n=n/10;
	}
	printf("even sum=%d\n",even_sum);
	printf("odd sum=%d",odd_sum);
	return 0;
 } */
 
 //2.Check a string is palindrome or not.
/*#include <stdio.h>
#include <stdlib.h>
int main()
{
	char str[30],rev[30];
	printf("Enter the string:");
	scanf("%s",str);
	strcpy(rev,str);
	strrev(rev);
	if(strcmp(str,rev)==0)
	{
		printf("palindrome");
	}
	else
	{
	 	printf("Not palindrome");
	}
	return 0;
}*/

//3.Sum of maximum and minimum array element.
/*#include<stdio.h>
int main()
{
	int size,i,max,min,sum=0;
	printf("enter your array size:");
	scanf("%d",&size);
	int arr[size];
	printf("enter your array elements:\n");
	for(i=0;i<size;i++)
	{
		printf("arr[%d]=",i);
		scanf("%d",&arr[i]);
	}
	printf("Your array elements:\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",arr[i]);
	}
	max=arr[0];
	min=arr[0];
	for(i=1;i<size;i++)
	{
		if(max<arr[i])
		{
			max=arr[i];
		}
		if(min>arr[i])
		{
			min=arr[i];
		}
	}
	sum=max+min;
	printf("\nmaximum element=%d\n",max);
	printf("minimum element=%d\n",min);
	printf("sum=%d",sum);
	return 0;
}*/

//4.Create a structure name employee and take atleast 3 employee[name,id,salary] and show employee information who getting maximum salary.
/*#include <stdio.h>
struct employee
{
	char name[30];
	int id;
	float salary;
};
int main()
{
	int n,i,max_salary_index=0;
	printf("enter the no of employee:");
	scanf("%d",&n);
	struct employee e[n]; 
	for(i=0;i<n;i++)
	{
		printf("Enter %d employee information:\n",i+1);
		printf("Enter your name:");
		scanf("%s",e[i].name);
		printf("Enter your id:");
		scanf("%d",&e[i].id);
		printf("Enter your salary:");
		scanf("%f",&e[i].salary);
	}
	for(i=0;i<n;i++)
	{
		printf("%d employee information:\n",i+1);
		printf("Your name:%s\n",e[i].name);
		printf("Your id:%d\n",e[i].id);
		printf("Your salary:%0.2f\n",e[i].salary);
	}
	float max_salary=e[0].salary;
	for(i=1;i<n;i++)
	{
		if(max_salary<e[i].salary)
		{
			max_salary=e[i].salary;
			max_salary_index=i;
		}
	}
	printf("Employee information who getting maximum salary:\n");
	printf("Name:%s\n",e[max_salary_index].name);
	printf("Id:%d\n",e[max_salary_index].id);
	printf("Salary:%0.2f\n",e[max_salary_index].salary);
	return 0;
}*/

//5.Print the result of this series 1+1/2+1/3+1/4+..............................
#include<stdio.h>
int main()
{
	int n;
	printf("entre the value of n:");
	scanf("%d",&n);
	float sum=0,i;
	for(i=1;i<=n;i++)
	{
		sum+=(1/i);
	}
	printf("sum=%0.2f",sum);
	return 0;
}


