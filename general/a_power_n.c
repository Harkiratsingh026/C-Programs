#include<stdio.h>
int power(int a,int n)
{
	int x;
	if(n==1)
	 return a;
	x=power(a,n/2);
	return x*x; 
}
int main()
{
	int n,x,retval;
	printf("enter number:");
	scanf("%d",&n);
	printf("Enter power:");
	scanf("%d",&x);
	retval=power(n,x);
	printf("\nresult=%d",retval);
}
