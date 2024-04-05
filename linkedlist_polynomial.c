//polynomial representation unsing linked list
#include<stdio.h>
#include<stdlib.h>
struct node
{
	float coeff;
	int expo;
	struct node *next;
};
//alias
typedef struct node Node;
Node* insert_term(Node *head,float c,int e)
{
	//create a node 
	Node *newNode=(Node *)malloc(sizeof(Node));
	newNode->coeff=c;
	newNode->expo=e;
	newNode->next=NULL;
	//implementation insert at tail operation
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
	}
	return head;
}
Node* create_polynomial()
{
	Node *head=NULL;
	int n,i;
	printf("Enter number of terms of the polynomial: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		float co;
		int ex;
		printf("Enter co-efficient of term %d: ",i);
		scanf("%f",&co);
		printf("Enter exponent of term %d: ",i);
		scanf("%d",&ex);
		head=insert_term(head,co,ex);
	}
	return head;
}
void display(Node *head)
{
	Node *temp=head;
	while(temp!=NULL)
	{
		printf("(%.1f)x^%d%c",temp->coeff,temp->expo,(temp->next==NULL)?'\n':'+');
		temp=temp->next;
	}
}
int main()
{
	Node *poly1=create_polynomial();
	display(poly1);
	
}
