#include<stdio.h>
int main(){
	int marks;
	printf("\n");
	printf("\nenter the marks between 0 to 100:");
	printf("enter the marks:");
	scanf("%d",&marks);
	switch(marks/10){
		case 1:
			printf("\nyour grade is:A+");
			break;
		case 2:
			printf("\nyour grade is:A");
			break;
		case 3:
			printf("\nyour grade is:B+");
			break;
		case 4:
			printf("\nyour grade is:B");
			break;
		case 5:
			printf("\nyour grade is:C+");
			break;
		case 6:
			printf("\nyour grade is:C");
			break;
		case 7:
			printf("\nyour grade is:d");
			break;
		default:
			printf("\nyour grade is:fail");
			break;
	}
	getch();
	return 0;	
}
