#include<stdio.h>
#include<math.h>
typedef struct point
{
	int x,y;
}pt;
int findcolinear(pt a,pt b,pt c)
{
	int m1,m2;
	 m1=abs(b.x-a.x)/abs(b.y-a.y);
	 m2=abs(c.x-b.x)/abs(c.y-b.y);
	 if(m1==m2)
	   return 1;
	   else return 0;
}
int main()
{
	pt p1,p2,p3;
	printf("enter x & y of p1:");
	scanf("%d %d",&p1.x,&p1.y);
	printf("enter x & y of p2:");
	scanf("%d %d",&p2.x,&p2.y);
	printf("enter x & y of p3:");
	scanf("%d %d",&p3.x,&p3.y);
	if(findcolinear(p1,p2,p3))
	{
		printf("The three points are colinear");
	}
	else 
	 printf("not colinear");
}
