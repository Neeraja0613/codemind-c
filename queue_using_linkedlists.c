//QUEUE USING LINKED LIST
#include<stdio.h>
struct node{
	int data;
	struct node *next;
};
typedef struct node Node;
Node *head=NULL;
Node *tail=NULL;
int size=0;
void enqueue(int val)
{
	Node *newnode=(Node *)malloc(sizeof(Node));
	newnode->data=val;
	newnode->next=NULL;
	if(head==NULL && tail==NULL)
	{
		head=newnode;
		tail=newnode;
	}
	else
	{
		tail->next=newnode;
		tail=newnode;
	}
	size++;
}
void dequeue()
{
	if(head==NULL && tail==NULL)
	{
		printf("Queue is empty\n");
		return;
	}
	Node *delnode=head;
	head=head->next;
	if(head==NULL)
	tail=NULL;
	size--;
	free(delnode);
}
void display()
{
	if(head==NULL && tail==NULL)
	{
		printf("Queue is empty\n");
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
void get_front()
{
	if(head==NULL && tail==NULL)
	{
		printf("Queue is empty\n");
		return;
	}
	printf("Front: %d",head->data);
}
void get_rear()
{
	if(head==NULL && tail==NULL)
	{
		printf("Queue is empty\n");
		return;
	}
	printf("Rear: %d",tail->data);
}
void get_size()
{
	printf("Size: %d\n",size);
}
int main()
{
	int ch;
	while(1)
	{
		printf("Enter\n1. enqueue\n2. dequeue\n3. display\n4. get_front\n5. get_rear\n6. get_size\n7. Any other to exit\n");
		scanf("%d",&ch);
		if(ch==1)
		{
			int val;
			printf("Enter a value to insert into queue: ");
			scanf("%d",&val);
			enqueue(val);
		}
		else if(ch==2)
		{
			dequeue();
		}
		else if(ch==3)
		{
			display();
		}
		else if(ch==4)
		{
			get_front();
		}
		else if(ch==5)
		{
			get_rear();
		}
		else if(ch==6)
		{
			get_size();
		}		 
		else
		{
			break;
		}
	}
}

/*#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
typedef struct node Node;
Node *head=NULL;
void get_front()
{
	printf("%d",head->data);
}
void enqueue(int val)
{
	Node *newnode=(Node *)malloc(sizeof(Node));
	Node *temp;
	newnode->data=val;
	newnode->next=NULL;
	if(head==NULL)
	{
		head=newnode;
	}
	else
	{
		temp=head;
		if(temp->next==NULL)
		temp->next=newnode;
		//head=newnode
	}
}
void dequeue()
{
	if(head==NULL)
	{
		printf("Nothing to delete\n");
	}
	else
	{
		Node *delnode=head;
		head=head->next;
		free(delnode);
	}
}
void display()
{
	if(head==NULL)
	{
		printf("Queue is empty\n");
	}
	else
	{
		Node *temp=head;
		while(temp!=NULL)
		{
			printf("%d ",temp->data);
			temp=temp->next;
		}
	}
}
int main()
{
	int ch;
	while(1)
	{
		printf("Enter\n1. enqueue\n2. dequeue\n3. display\n4. get_front\n5. get_rear\n6. get_size\n7. Any other to exit\n");
		scanf("%d",&ch);
		if(ch==1)
		{
			int val;
			printf("Enter a value to insert into queue: ");
			scanf("%d",&val);
			enqueue(val);
		}
		else if(ch==2)
		{
			dequeue();
		}
		else if(ch==3)
		{
			display();
		}
		else if(ch==4)
		{
			get_front();
		}
		else if(ch==5);
		{
			get_rear();
		}
		else if(ch==6)
		{
			get_size();
		}		else
		{
			break;
		}
	}
}*/
