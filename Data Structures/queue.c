#include <stdio.h>
#define max 30

int queue[max];
int f=0, r=-1;
void insert(int);
int deleteElement();
void display();

int main(){
	int option;
	int value;
	do{
		printf(" Menu: \n");
		printf(" 1.Insert \n 2.Delete \n 3.Display \n 4.Exit\n");
		scanf("%d",&option);
		switch(option){
			case 1: printf("Enter the value: ");
					scanf("%d",&value);
					insert(value);
					break;
			case 2: value = deleteElement();
					if(value != -1)
						printf("Deleted element is %d",value);
					break;
			case 3: display();
					break;
			case 4: exit(0);
			default: printf("Select valid option!!");
		}
	}while(1);
	return 0;
}

void insert(int value){
	if(r == max-1){
		printf("Queue is full");
		return;
	}
	queue[++r] = value;
}

int deleteElement(){
	if(f > r){
		printf("Queue is empty");
		return -1;
	}
	return queue[f++];
}

void display(){
	int i;
	if(f > r){
		printf("Queue is empty");
		return;
	}
	for(i=f;i <= r;i++){
		printf(" %d ", queue[i]);
	}
}