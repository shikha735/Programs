#include <stdio.h>
#define max 30

void push(int);
int pop();
int peep();
void display();

int stack[max];
int top = -1;
int main(){
	int option;
	int value;
	do{
		printf("\n Select option: \n");
		printf(" 1.Push \n 2.Pop \n 3.Peep \n 4.Display \n 5.Exit");
		scanf("%d",&option);
		switch(option){
			case 1: printf("Enter value: ");
					scanf("%d",&value);
					push(value);
					break;
			case 2: if(pop()!=-1)
						printf("Popped value is %d ",pop());
					break;
			case 3: if(peep()!=-1)
						printf("Top element of stack is %d",peep());
					break;
			case 4: printf("The elements in stack are: \n");
					display();
					break;
			case 5: exit(0);
			default: printf("Enter valid option!!");
		}
	}while(1);
	return 0;
}

void push(int value){
	if(top == max-1){
		printf("Stack overflow");
		return;
	}
	stack[++top] = value;
}

int pop(){
	if(top == -1){
		printf("Stack underflow");
		return -1;
	}
	return stack[top--];
}

int peep(){
	if(top == -1){
		printf("Stack is empty");
		return -1;
	}
	return stack[top];
}

void display(){
	int i;
	if(top == -1){
		printf("Stack is empty");
		return;
	}
	for(i=0;i<=top;i++){
		printf("%d ",stack[i]);
	}
}