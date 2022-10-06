#include<stdio.h>
#define MAX 5
void push();
void pop();
void display();
int top=-1;
int s[MAX];
int main()	{
	while(1) {
	printf("\n********* Implementation of Stack : *************\n");
	int op;
	printf("1.Push\n");
	printf("2.Pop\n");
	printf("3.Display\n");
	printf("4.Exit\n");
	printf("Enter your Choice : ");
	scanf("%d",&op);
	switch(op)	{
		case 1 : push();
				break;
		case 2 : pop();
				break;
		case 3 : display();
				break;
		case 4 : return 0;
		default : printf("Invalid Choice\n");
	}
}
}
void push()	{
	int item;
	if(top==MAX-1)	{
		printf("Stack is Full !\n");
	}
	else	{
	printf("Enter a item to push : ");
	scanf("%d",&item);
	top = top+1;
	s[top] = item;
	printf("%d Pushed into Stack.\n",item);
	}
}
void pop()	{
	if(top==-1)	{
		printf("Stack is Empty !\n");
	}
	else	{
	printf("Popped Item is %d",s[top]);
	top = top-1;
	}
}
void display()	{
	int i=top;
	if(top==-1)	{
		printf("Stack is Empty !\n");
	}
	else	{
	printf("Stack Items are : \n");
	while(i!=-1)	{
		printf("%d\n",s[i]);
		i--;
	}
	}
}
