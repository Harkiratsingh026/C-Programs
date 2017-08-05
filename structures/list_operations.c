#include<stdio.h>
typedef struct node
{
	int value;
	struct node *next; 
}node;
void insertsorted(node **hd,int value)
{
	node *temp;
	node *newnode=(node*)malloc(sizeof(node));
	newnode->value=value;
	newnode->next=NULL;
	temp=*hd;
	if(*hd==NULL)
	{
		*hd=newnode;
	}
	else if(newnode->value < temp->value)
	{
		newnode->next=*hd;
		*hd=newnode;
	}
	else
	{
		
		temp=*hd;
		while(temp->next!=NULL)
		{
			if(temp->next->value>newnode->value)
			{
				newnode->next=temp->next;
				temp->next=newnode;
				return;
			}
			temp=temp->next;
			
		}
		if(temp->next==NULL)
		{
			temp->next=newnode;
		}
	}
}
void printmiddle(node *hd)
{
	
	node *temp;
	int c=0,i;
	temp=hd;
	while(temp->next!=NULL)
	{
		temp=temp->next;
		c++;
	}
	temp=hd;
//	printf("c=%d",c);
	for(i=1;i<c/2;++i)
	{
		temp=temp->next;
	}
	printf("middle element:%d",temp->value);
}
void remduplicates(node *hd)
{
	node *temp,*prev;
	int flag;
	temp=hd->next;
	prev=hd;
	while(temp->next!=NULL)
	{
	  flag=0;
	    while(prev->value==temp->value)
	    {
		   temp=temp->next;
		   flag=1;
	    }
	    if(flag==1)
		{
			prev->next=temp;
			
		}
		prev=prev->next;
			temp=temp->next;
	}
}
void insert(node **hd,int value)
{
	node *newnode=(node*)malloc(sizeof(node));
	newnode->value=value;
	newnode->next=NULL;
	if(*hd==NULL)
	{
		*hd=newnode;
	}
	else
	{
		node *temp;
		temp=*hd;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newnode;
		
	}
}
void printlist(node *hd)
{
	while(hd!=NULL)
	{
		printf("%d ",hd->value);
		hd=hd->next;
		
	}
}
void delet(node **hd,int key)
{

     node *prev;
	node *temp=*hd;
	if(temp!=NULL && temp->value==key)
	{
		*hd=temp->next;
		free(temp);
	}
		
		
		while(temp->next!=NULL && temp->value!=key)
		{
			prev=temp;
			temp=temp->next;
		}
		if(temp->next!=NULL||temp->value==key)
		{
			prev->next=temp->next;
		free(temp);
		//printf("not in list");
		//	return;
		}
		
	
}
int main()
{
	node *head=NULL;
	insertsorted(&head,7);
	insertsorted(&head,13);
	insertsorted(&head,10);
	insertsorted(&head,30);
	insertsorted(&head,15);
	insertsorted(&head,10);
	insertsorted(&head,1);
	insertsorted(&head,63);
	insertsorted(&head,15);
	insertsorted(&head,15);	
	insertsorted(&head,1);
	insertsorted(&head,7);
	printlist(head);
	printmiddle(head);
	remduplicates(head);
	printf("\n");
	printlist(head);
//	delet(&head,13);
//	printlist(head);
}
