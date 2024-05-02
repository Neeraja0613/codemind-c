//stack implementation using linked list
//PUSH-->insert at head
//POP-->delete at head
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
typedef struct node Node;
Node *head=NULL;
int top=-1;
int size;
void PUSH(int ele)
{
	if(top==size-1)
	{
		printf("Stack is full\n");
		return;
	}
	//insertion at head
	Node *newnode=(Node *)malloc(sizeof(Node));
	newnode->data=ele;
	newnode->next=NULL;
	if(head==NULL)
	{
		head=newnode;
	}
	else
	{
		newnode->next=head;
		head=newnode;
	}
	top++;
}
void POP()
{
	if(head==NULL)
	{
		printf("Stack is empty\n");
	}
	else
	{
		head=head->next;
	}
}
void Display()
{
	if(head==NULL)
	{
		printf("Stack is empty\n");
	}
	else
	{
		Node *temp=head;
		while(temp!=NULL)
		{
			printf("%d",temp->data);
			temp=temp->next;
		}
	}
}
int main()
{
	printf("Enter size of stack: ");
	scanf("%d",&size);
	int ch;
	while(1)
	{
		printf("Enter\n1. PUSH\n2. POP\n3. Display\n4. Any other to exit\n");
		scanf("%d",&ch);
		if(ch==1)
		{
			int ele;
			printf("Enter an element to push: ");
			scanf("%d",&ele);
			PUSH(ele);
		}
		else if(ch==2)
		{
			POP();
		}
		else if(ch==3)
		{
			Display();
		}
		else
		{
			break;
		}
	}
}
