#include<stdio.h>
#include <stdlib.h>
#define MAXSIZE 10 
int top=-1;
void push(int A[],int data)
{
	if(top<MAXSIZE-1)
	{
		A[++top]=data;
	}
}
void pop(int A[])
{
	if(pop>=0)
	{
		printf("\n Deleted item:%d\n",A[top]);
		top--;
	}
}
void Display(int A[])
{
	printf("\nStack Data:");
	for(int i=top;i>=0;i--)
	{
		printf("%d\n",A[i]);
	}
	printf("\n");
}
int main()
{
	int A[MAXSIZE];
	int choice=0;
	while(choice!=4){
		printf("1.PUSH\n 2.POP \n 3.Display\n 4.exit\n =>");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				int data;
				printf("Enter data:");
				scanf("%d",&data);
				push(A,data);
				break;
			case 2:
				pop(A);
				break;
			case 3:
				Display(A);
				break;
			case 4:
				printf("Bye Bye!");		
		}
	}
	return 0;
}
