//Sparse Matrix Representation using linked list
#include<stdio.h>
#include<stdlib.h>
//linked list node
struct node
{
	int row;
	int col;
	int data;
	struct node *next;
};
typedef struct node Node;
Node *head=NULL;  //head as a global variable
void insert(int r,int c,int val)       //INSERT_AT_TAIL
{
	Node *newNode=(Node *)malloc(sizeof(Node));
	newNode->row=r;   //setting row field to r
	newNode->col=c;   //setting column field c
	newNode->data=val;
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
	}
}
void display()
{
	printf("Non-zero Elements of Matrix\n");
	printf("Row\tCol\tData\n");
	Node *temp=head;
	while(temp!=NULL)
	{
		printf("%d\t%d\t%d\n",temp->row,temp->col,temp->data);
		temp=temp->next;
	}
}
int main()
{
	int r,c,i,j;
	scanf("%d%d",&r,&c);
	int mat[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&mat[i][j]);
		}
	}
	//run a loop on the matrix
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(mat[i][j]!=0)
			{
				insert(i,j,mat[i][j]);
			}
		}
	}
	display();
}
