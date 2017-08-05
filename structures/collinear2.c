#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int x,y;
	

}node;
int main()
{
	node p[50];
	int n;
	printf("Enter no of points you want to enter:");
	scanf("%d",&n);
	for(i=0;i<n;++i)
	{
		printf("Enter x:");
		scanf("%d",&p[i].x);
		printf("Enter y:");
		scanf("%d",&p[i].y);
	}
}
