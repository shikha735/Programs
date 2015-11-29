#include<stdio.h>

typedef struct slnode{
 int info;
 struct slnode *next;
}node;

node *head,*newnode;

void createnode();
void create();
void insert();
void delet();
void display();
void reverse();
void main()
{
	
	int choice;
	do
	{
	 printf("Enter choice \n1.Create \n2.Insert \n3.Delete \n4.Display \n5.Reverse \n6.Exit");
	 scanf("%d",&choice);
	 switch(choice)
	 {
		case 1:
			create();
			break;

		case 2:
			insert();
			break;

		case 3:
			delet();
			break;

		case 4:
			display();
			break;
		
		case 5:
			reverse();
			break;

		case 6:
			exit(0);
	 }
	}while(1);
}

void createnode()
{
	newnode=(node *)malloc(sizeof(node));
	printf("Enter data");
	scanf("%d",&newnode->info);
	newnode->next=NULL;
}

void create()
{
	if(head!=NULL)
	{
		printf("linked list already exists");
		return;
	}
	createnode();
	head=newnode;
}


void insert()
{
	int choice,val;
	node *t;
	t=head;
	printf("Enter \n1.Beginning \n2.Middle \n3.End");
	scanf("%d",&choice);
	createnode();
	if(head==NULL)
	{
		printf("linked list is empty");
		head=newnode;
		return;
	}

	switch(choice)
	{
		case 1:	
			newnode->next=head;
			head=newnode;
			break;

		case 2:
			printf("Enter node's data after which new node is to be inserted");
			scanf("%d",&val);
			while((t!=NULL)&&(t->info!=val))
				t=t->next;
			if(t==NULL)
			{
				printf("Node doesn't exists");
				return;
			}
			newnode->next=t->next;
			t->next=newnode;
			break;
		case 3:
			while(t->next!=NULL)
				t=t->next;
			t->next=newnode;
			break;
	}
}


void delet()
{
	int v;
	node *prev,*pres;
	printf("enter nodes data which is to be deleted");
	scanf("%d",&v);
	pres=head;
	while(pres!=NULL)
	{
		if(pres->info==v)
			break;
		prev=pres;
		pres=pres->next;
	}
	if(pres==NULL)
		printf("node with specified data is not available");
	else
	{
		if(head!=pres)
		{
			prev->next=pres->next;
			free(pres);
		}
		else
		{
			head=head->next;
			free(pres);
		}
	}
}
	

void display()
{
	node *t;
	if(head==NULL)
	{
		printf("LL is empty");
		return;
	}
	for(t=head;t!=NULL;t=t->next)
	 	printf("%d->",t->info);
}
		
void reverse()
{

	node *prev,*pres,*next;
	prev=NULL;
	pres = head;
	while (pres != NULL)
	{
		next  = pres->next; 
		pres->next = prev;  
		prev = pres;
		pres = next;
	}
	head = prev;
	printf("Linked list reversed");
}

		
			
