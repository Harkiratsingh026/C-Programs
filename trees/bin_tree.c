#include<stdio.h>
#include<stdlib.h>
typedef struct bintree
{
	int value;
	struct bintree *right,*left;
}bintree;
bintree * search_null(bintree *root)
{
	 bintree *prev=root;
	if(root->right->right==NULL)
	   {
	   	prev->right=NULL;
	   	return root;
	   }
	 search_null(root->right);
}
bintree * search(bintree *root,int key)
{
	if(root!=NULL)
   {
   
	if(root->value==key)
	   return root;
    else if(root->value > key)
     return search(root->left,key);
    else 
      return search(root->right,key);
  }
}
int delet(bintree **root,int key)
{
	bintree *temp1=*root,*temp2;
	if(temp1==NULL)
	  return -1;
	/*if(key< temp->value)
	   delet(&temp->left,key,&temp);
	 else
	   delet(&temp->right,key,&temp);*/
	   temp1=search(*root,key);
	   if(temp1->left!=NULL)
	     temp2=search_null(temp1->left);
	     else temp2=NULL;
	     
	     if(temp2->right==NULL)
	       {
		   temp1->value=temp1->right->value;
		   //temp1=temp1->right;
	       }
	       else
	       {
	       	temp1->value=temp2->value;
	       	
		   }
	   
	 
	 return 1;
	 
	 	
		       
	  
}
void create(bintree **root,int key)
{
	bintree *temp,*newnode;
	temp=*root;
	
	if(temp==NULL)
	{
		newnode=(bintree *)malloc(sizeof(bintree));
	    newnode->left=NULL;
	    newnode->right=NULL;
	    newnode->value=key;
		*root=newnode;
	}
	else if(key > temp->value)
	{
		create(&temp->right,key);
	}
	else
	{
		create(&temp->left,key);
	}
	
}
void inorder(bintree *root)
{
	if(root==NULL)
	  return;
	inorder(root->left);
	printf("%d ",root->value);
	inorder(root->right);  
}
void postorder(bintree *root)
{
	if(root==NULL)
	  return;
	postorder(root->left);
	postorder(root->right);
	printf("%d ",root->value);
}
void preorder(bintree *root)
{
	if(root==NULL)
	  return;
	printf("%d ",root->value);  
	preorder(root->left);
	preorder(root->right);
}
int binsearch(bintree *root,int key)
{
   if(root!=NULL)
   {
   
	if(root->value==key)
	   return 1;
    else if(root->value > key)
     return binsearch(root->left,key);
    else 
      return binsearch(root->right,key);
  }
      
      return -1;
	
}
int main()
{
	bintree *root=NULL;
	int i,n,a,key;
	printf("Enter no. of nodes:");
	scanf("%d",&n);
	printf("Enter nodes:");
	for(i=0;i<n;++i)
	{
		scanf("%d",&a);
		create(&root,a);
	}
	printf("IN order:");
	inorder(root);
	printf("\nPre order:");
	preorder(root);
	printf("\nPost order:");
	postorder(root);
	printf("\nEnter key to be found:");
	scanf("%d",&key);
	a=binsearch(root,key);
	if(a==1)
	{
		printf("Found\n");
	}
	else
	{
		printf("Not found\n");
	}
	printf("Enter the key to be deleted:");
	scanf("%d",&key);
	a=delet(root,key);
	inorder(root);
}
