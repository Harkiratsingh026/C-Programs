#include<stdio.h>
void func(int **a,int **b)
{
int *temp;
temp=*a;
*a=*b;
*b=temp;
}
int main()
{
int x=10,y=20;
int *p1=&x,*p2=&y;
printf("%x %x ",p1,p2);
int **p3=&p1, **p4=&p2;
func(p3,p4);
printf("%x %x ",p1,p2);
}
