//linked list operations
#include<stdio.h>
#include<stdlib.h>
//self referential structure
struct node
{
	int data;
	struct node *next;
};
//aliasing
typedef struct node Node;
Node *head=NULL;
void insert_at_head(int val)
{
	Node *newNode=(Node *)malloc(sizeof(Node));
	newNode->data=val;
	newNode->next=NULL;
	if(head==NULL)
	{
		head=newNode;
	}
	else
	{
		newNode->next=head;
		head=newNode;
	}
}
void insert_at_tail(int val)
{
	Node *newNode,*temp;
	newNode=(Node *)malloc(sizeof(Node));
	newNode->data=val;
	newNode->next=NULL;
	if(head==NULL)
	{
		head=newNode;
		return;
	}
	else
	{
		temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newNode;
	}
}
void delete_at_head()
{
	if(head==NULL)
	{
		printf("There are no nodes to delete\n");
	}
	else
	{
		head=head->next;
	}
}
void delete_at_tail()
{
	if(head==NULL)
	{
		printf("No nodes in linked list\n");
	}
	else if(head->next==NULL)
	{
		Node *delNode=head;
		head=NULL;
		free(delNode);  //de-allocating the memory
	}
	else
	{
		Node *temp=head;
		while(temp->next->next!=NULL)
		{
			temp=temp->next;
		}
		Node *delNode=temp->next;
		temp->next=NULL;
		free(delNode);   //de-allocate the memory
	}
}
void insert_at_position()
{
	
}
void display()
{
	if(head==NULL)
	{
		printf("No nodes to display\n");
		return;
	}
	Node *temp=head;
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
	while(1)  //infinite loop
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
