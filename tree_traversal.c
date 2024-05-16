//TREE TRAVERSALS
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *left;
	struct node *right;
};
typedef struct node TreeNode;
TreeNode* create_newnode(int val)
{
	TreeNode *node=(TreeNode *)malloc(sizeof(TreeNode));
	node->left=NULL;
	node->right=NULL;
	node->data=val;
	return node;
}
void preOrder(TreeNode *root)
{
	if(root!=NULL)
	{
		printf("%d ",root->data);
		preOrder(root->left);
		preOrder(ro ot->right);
	}
}
void inOrder(TreeNode *root)
{
	if(root!=NULL)
	{
		inOrder(root->left);
		printf("%d ",root->data);
		inOrder(root->right);
	}
}
void postOrder(TreeNode *root)
{
	if(root!=NULL)
	{
		postOrder(root->left);
		postOrder(root->right);
		printf("%d ",root->data);
	}
}
int main()
{
	TreeNode *node1=create_newnode(10);
	TreeNode *node2=create_newnode(20);
	TreeNode *node3=create_newnode(30);
	TreeNode *node4=create_newnode(40);
	TreeNode *node5=create_newnode(50);
	TreeNode *node6=create_newnode(60);
	TreeNode *node7=create_newnode(70);
	node1->left=node2;
	node1->right=node3;
	node2->left=node4;
	node2->right=node5;
	node3->left=node6;
	node3->right=node7;
	TreeNode *root=node1;
	//printf("%d\n",root->right->right->data);
	//printf("%d\n",root->right->left->data);
	//printf("%d\n",root->left->right->data);
	//printf("%d\n",root->left->left->data);
	preOrder(root);
	printf("\n");
	inOrder(root);
	printf("\n");
	postOrder(root);
}
