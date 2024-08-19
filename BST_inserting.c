#include<stdio.h>
#include<stdlib.h>
struct TreeNode{
    int data;
    struct TreeNode *left;
    struct TreeNode *right;
};
struct TreeNode *createNode(int key)
{
    struct TreeNode *temp=(struct TreeNode*)malloc(sizeof(struct TreeNode));
    temp->data=key;
    temp->left=temp->right=NULL;
    return temp;
};
struct TreeNode *insert(struct TreeNode *root, int key)
{
    if(root==NULL)
    {
        return createNode(key);
    }
    if(root->data==key) return root;
    if(key<root->data)
    {
        root->left=insert(root->left,key);
    }
    if(key>root->data)
    {
        root->right=insert(root->right,key);
    }
    return root;

void inorder(struct TreeNode *root)
{
    if(root==NULL) return;
    inorder(root->left);
    printf("%d ",root->data);
    inorder(root->right);
}
struct TreeNode *BSTinsert(int low,int high,int nodes[])
{
	if(low>high) return NULL;
    if(low==high)
    {
        return createNode(nodes[low]);	
    }
    int mid=(low+high)/2;
    struct TreeNode *root=createNode(nodes[mid]);
    root->left=BSTinsert(low,mid-1,nodes);
    root->right=BSTinsert(mid+1,high,nodes);
    return root;
}
int main()
{
    int n,i;
    scanf("%d",&n);
    int nodes[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&nodes[i]);
    }
    struct TreeNode *root=BSTinsert(0,n-1,nodes);
    inorder(root);
} 
