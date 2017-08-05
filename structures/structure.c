#include<stdio.h>
typedef struct  nd
{
	int data;
	 struct nd *next;
}nd;
int main()
{
	nd *head;
	nd n1,n2,n3;
	n1.data=30;
	n2.data=40;
	n3.data=10;
	n1.next=&n2;
	n2.next=&n3;
	n3.next=NULL;
	head=&n1;
	printf("%d %d %d\n",n1.data,n1.next->data,n1.next->next->data);
	printf("%d %d %d",head->data,head->next->data,head->next->next->data);
	
}
