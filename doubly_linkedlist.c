//DOUBLY LINKED LIST
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *prev;
	struct node *next;
};
typedef struct node Node;
Node *head=NULL;
void insert_at_head(int val)
{
	Node *newNode=(Node *)malloc(sizeof(Node));
	newNode->data=val;
	newNode->prev=NULL;
	newNode->next=NULL;
	if(head==NULL)
	{
		head=newNode;
	}
	else
	{
		newNode->next=head;
		head->prev=newNode;
		head=newNode;
	}
}
Node* insert_at_tail(int val)
{
	Node *newNode=(Node *)malloc(sizeof(Node));
	newNode->data=val;
	newNode->prev=NULL;
	newNode->next=NULL;
	if(head==NULL)
	{
		head=newNode;
	}
	else
	{
		Node *temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newNode;
		newNode->prev=temp;
		return head;
	}
}
void delete_at_head()
{
	if(head==NULL)
	{
		printf("There are no nodes to display");
	}
	else
	{
		head=head->next;
		head->prev=NULL;
	}
}
void delete_at_tail()
{
	Node *temp=head;
	Node *temp2=head;
	if(head->next==NULL)
	{
		head=NULL;
	}
	else
	{
		while(temp->next->next!=NULL)
		{
			temp=temp->next;
		}
	}
	temp2=temp->prev;
	temp2->next=NULL;
	free(temp);
}
void display()
{
	Node *temp=head;
	if(head==NULL)
	{
		printf("Nothing to print");
		return;
	}
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
	printf("\n");
}
int main()
{
	int ch;
	while(1)
	{
		printf("1. Insert at head\n2. Insert at tail\n3. Display\n4. Delete at head\n5. Delete at tail\nAny other to exit\n");
		scanf("%d",&ch);
		if(ch==1)
		{
			//implement insert at head
			int val;
			printf("Enter a value for the node to be inserted: ");
			scanf("%d",&val);
			insert_at_head(val);
		}
		else if(ch==2)
		{
			//implement insert at tail
			int val;
			printf("Enter a value for the node to be inserted: ");
			scanf("%d",&val);
			insert_at_tail(val);
		}
		else if(ch==3)
		{
			//implement display
			display();
		}
		else if(ch==4)
		{
			//implement delete at head
			delete_at_head();
		}
		else if(ch==5)
		{
			//implement delete at tail
			delete_at_tail();
		}
		else
		{
			printf("Thank you for testing. ADIEU!!\n");
			break;
		}
	}
}
