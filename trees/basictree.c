#include<stdio.h>
typedef struct bintree{
	int value;
	struct bintree *left,*right;
}bintree;
void insright(bintree **root,int key)
{
	bintree *newnode,*temp;
	temp=*root;
	newnode=(bintree *)malloc(sizeof(bintree));
	newnode->left=NULL;
	newnode->right=NULL;
	newnode->value=key;
	
	if(temp ==NULL)
	{
		*root=newnode;
	}
	else
	{
		while(temp->right!=NULL)
		{
			temp=temp->right;
			
		}
		temp->right=newnode;
	}
	
}
void insleft(bintree **root,int key)
{
	bintree *newnode,*temp;
	temp=*root;
	newnode=(bintree *)malloc(sizeof(bintree));
	newnode->left=NULL;
	newnode->right=NULL;
	newnode->value=key;
	
	if(temp ==NULL)
	{
		*root=newnode;
	}
	else
	{
		while(temp->left!=NULL)
		{
			temp=temp->left;
			
		}
		temp->left=newnode;
	}
	
}
void display(bintree *root)
{
	if(root==NULL)
	{
		
		return;
	}
	printf("%d ",root->value);
	display(root->left);
	
	display(root->right);
	//printf("%d ",root->value);
}
int main()
{
	bintree *root=NULL;
	insright(&root,7);
	insleft(&root,6);
	insright(&root,3);
	insright(&root,10);
	insleft(&root,12);
	display(root);
	
	
	
}
