 #include <stdio.h>
#include<stdlib.h>
struct Stack{
	int size;
	int top;
	int *s;
};

void create(struct Stack *st)
{
	int some;
	printf("Enter Size of Stack:");
	scanf("%d",&some);
	st->size=some;
	st->top=-1;
	st->s=(int *)malloc(sizeof(int)*some);
	printf("\n Stack Created!");
}
void push(struct Stack *st,int data)
{
	if(st->top!=st->size-1)
	{
		st->top++;
		st->s[st->top]=data;
	}
	else
	{
		printf("\n Stack Overflow!");
	}
}
int pop(struct Stack *st)
{
	int x=-1;
	if(st->top==-1)
	{
		printf("\n Stack Underflow!!");
	}
	else
	{
		x=st->s[st->top];
		st->s[st->top]=0;
		st->top--;
	}
	if(x!=0)
	{
		printf("\n Deleted Item:%d",x);
	}
	return x;
}
void display(struct Stack *st,int i)
{
	if(i<=st->top)
	{
		display(st,i+1);
		printf("%d ",st->s[i]);
	}
}

void main()
{
	int choice,data;
	struct Stack st;
	do{
		printf("\n\n-----------------\n");
		printf("1.Create Stack\n");
		printf("2.Push\n");
		printf("3.Pop \n");
		printf("4.Display\n");
		printf("5.Exit\n");
		printf("-----------\n");
		printf("Enter Your Choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				create(&st);
				break;
			case 2:
				if(st.size)
				{
					printf("\nEnter data to Push:");
					scanf("%d",&data);
					push(&st,data);
				}
				else
				{
					printf("\n Create Stack First!!");
				}
				break;
			case 3:
				if(st.size)
				{
					pop(&st);
				}
				else{
					printf("\n Create Stack First!!");
				}
				break;
			case 4:
				if(st.size)
				{
					printf("\n Stack Elements:[");
					display(&st,0);
					printf("]\n");
				}
				else{
					printf("\n Create Stack First!!");
				}
				break;
			case 5:
				printf("\n Exiting.....");
				break;
			default:
				printf("\n Enter valid Choice!!");
		}
		printf("\n---------------\n");
	}
	while(choice!=5);
}
