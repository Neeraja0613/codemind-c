#include<stdio.h>
#include<stdlib.h>
struct node{
	struct node *prev;
	struct node *curr;
	int data;
	struct node *next;
};
void prev(struct node *head)
{
	struct node *prev=NULL;
	struct node *curr=head;
	struct node *next=NULL;
	while(curr!=NULL)
	{
		next=curr->next;
		curr->next=prev;
		prev=curr;
		curr=next;
	}
	return prev;
}
int main()
{
	struct node n1=(struct node)malloc(sizeof(struct node));
	struct node n2=(struct node)malloc(sizeof(struct node));
	struct node n3=(struct node)malloc(sizeof(struct node));
	struct node n4=(struct node)malloc(sizeof(struct node));
	struct node n5=(struct node)malloc(sizeof(struct node));
	struct node *head;
	n1->data=10;
	n2->data=20;
	n3->data=30;
	n4->data=40;
	n5->data=50;
	prev(head);
}
