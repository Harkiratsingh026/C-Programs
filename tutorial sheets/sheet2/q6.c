#include<stdio.h>
int main()
{
	int  n,sum=0,term,val=1;
	printf("Enter a number");
	scanf("%d",&n);
	while(n>0)
	{
		term=n%10;
		sum=sum+val*term;
		val*=2;
		n/=10;
	}
	printf("%d",sum);
}
