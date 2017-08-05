#include<stdio.h>
#include<stdlib.h>
typedef struct  nd
{
	int data;
	 struct nd *next;
}nd;
int main()
{
	nd *newnode,*head,*trav;
	newnode=(nd*)malloc(sizeof(nd));
	newnode->data=30;
	head=newnode;
	trav=newnode;
	newnode=(nd*)malloc(sizeof(nd));
	newnode->data=40;
	trav->next=newnode;
	trav=newnode;
	newnode=(nd*)malloc(sizeof(nd));
	newnode->data=10;
	trav->next=newnode;
	trav=newnode;
	printf("%d %d %d",head->data,head->next->data,head->next->next->data);
	
}
