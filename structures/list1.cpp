#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *next;

}node;
void delet(node *temp)
{
	if(temp->next==NULL)
	{
		printf("\ndeleted value:%d",temp->data);
		free(temp);
		return;
	}
	
		delet(temp->next);
		printf("\ndeleted value:%d",temp->data);
		free(temp);
	
}
int main()
{
	int n,i,k,count=0;
	node *newnode,*head,*targ;
	printf("enter number of nodes:");
	scanf("%d",&n);
	for(i=1;i<=n;++i)
	{
		newnode=(node *)malloc(sizeof(node));
		newnode->data=i;
		newnode->next=NULL;
		if(i==1)
		{
			head=newnode;
			targ=newnode;
		}
		else{
			targ->next=newnode;
			targ=newnode;
		}
		
	}
	targ=head;
	for(i=1;i<=n;++i)
	{
		printf("%d  ",targ->data);
		targ=targ->next;
	}
	printf("\nEnter search key:");
	scanf("%d",&k);
	targ=head;
	for(i=1;i<=n;++i)
	{
		count++;
		if(targ->data==k)
		{
			
			printf("Found at position:%d",count);
			break;
		}
		targ=targ->next;
	}
	delet(head);
}
