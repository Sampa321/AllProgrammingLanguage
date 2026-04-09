//1.wap to check if a number is even or odd.
/*#include<stdio.h>
int main()
{
	int num;
	printf("enter the number:");
	scanf("%d",&num);
	if(num%2==0){
		printf("%d is even number",num);
	}
	else
	{
		printf("%d is odd number",num);
	}
	return 0;
 } */
 
//2.wap to check if a number is divisible by 3 or not.
/*#include<stdio.h>
int main()
{
	int num;
	printf("enter the number:");
	scanf("%d",&num);
	if(num%3==0){
		printf("%d is divisible by 3",num);
	}
	else
	{
		printf("%d is not divisible by 3",num);
	}
	return 0;
 }*/
 
 //3.wap to find greater among two numbers.
 /*#include<stdio.h>
 int main()
 {
 	int n1,n2;
 	printf("enter two numbers:");
 	scanf("%d%d",&n1,&n2);
 	if(n1>n2){
 		printf("%d is greater number",n1);
	 }
	else
	{
		printf("%d is greater number",n2);
	}
	return 0;
 }*/
 
//4.wap to check if a number is divisible by 2 and 3 or not.
/*#include<stdio.h>
int main()
{
	int num;
	printf("enter the number:");
	scanf("%d",&num);
	if(num%2==0 && num%3==0){
		printf("%d is divisible by 2 and 3",num);
	}
	else
	{
		printf("%d is not divisible by 2 and 3",num);
	}
	return 0;
 }*/
 
//5.wap to check if a number is divisible by 3 and 5 or not.
/*#include<stdio.h>
int main()
{
	int num;
	printf("enter the number:");
	scanf("%d",&num);
	if(num%3==0 && num%5==0){
		printf("%d is divisible by 3 and 5",num);
	}
	else
	{
		printf("%d is not divisible by 3 and 5",num);
	}
	return 0;
 }*/
 
//6.wap to check greatest among three numbers.
/*#include<stdio.h>
int main()
{
 	int n1,n2,n3;
 	printf("enter three numbers:");
 	scanf("%d%d%d",&n1,&n2,&n3);
 	if(n1>=n2 && n1>=n3){
 		printf("%d is greater number",n1);
	 }
	else if(n2>=n1 && n2>=n3){
 		printf("%d is greater number",n2);
	}
	else
	{
		printf("%d is greater number",n3);
	}
	return 0;
}*/

//8.wap to check a year is leap year or not.
/*#include<stdio.h>
int main()
{
	int year;
	printf("enter the year:");
	scanf("%d",&year);
	if((year%4==0 && year%100!=0) || (year%400==0))
	{
		printf("%d is leap year",year);
	}
	else{
		printf("%d is not leap year",year);
	}
	return 0;
}*/

//9.wap to check a person is adult or not.




//11.WAP to calculate the student grade.
/*#include<stdio.h>
int main()
{
	int mark;
	printf("enter the mark:");
	scanf("%d",&mark);
	if(mark>=90)
	{
		printf("%d is A+",mark);
	}
	else if(mark>=80 && mark<90){
		printf("%d is A",mark);
	}
	else if(mark>=70 && mark<80){
		printf("%d is B+",mark);
	}
	else if(mark>=60 && mark<70){
		printf("%d is B",mark);
	}
	else if(mark>=50 && mark<60){
		printf("%d is C+",mark);
	}
	else if(mark>=40 && mark<=50){
		printf("%d is C",mark);
	}
	else
	{
		printf("%d is D",mark);
	}
	return 0;
}*/

//12.WAP to calculate the student grade using switch case.
/*#include<stdio.h>
int main()
{
	char grade;
	printf("enter the grade:");
	scanf("%c",&grade);
	switch(grade)
	{
	case 1:
		grade='A+';
		break;
	case 2:
		grade='A';
		break;
	case 3:
		grade='B+';
		break;
	default:
		grade='D';
		break;
	}
	printf("%c",grade);
	return 0;
}*/

//13.WAP to convert the temperature from celsius to Fahrenhide and vide versa.
/*#include<stdio.h>
int main()
{
	float celsius,F;
	printf("enter the celsius:");
	scanf("%f",&celsius);
	F=((9*celsius)/5)+32;
	printf("Fahrenhide:%f",F);
	return 0;
}*/
/*#include<stdio.h>
int main()
{
	float celsius,F;
	printf("enter the Fahrenhide:");
	scanf("%f",&F);
	celsius=(5*(F-32))/9;
	printf("celsius:%f",celsius);
	return 0;
}*/

//14.WAP to calculate no of days ,month and year from the total number of days.
#include<stdio.h>
int main()
{
	int days,year,month;
	printf("enter the days:");
	scanf("%d",&days);
	year=days/365;
	days=days%365;
	month=days/30;
	days=days%30;
	printf("year=%d,month=%d,days=%d",year,month,days);
	return 0;
}

