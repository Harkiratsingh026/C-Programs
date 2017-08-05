#include<stdio.h>
int arm(int n)
{
	int sum=0,temp,N;
	temp=n;
	while(temp!=0)
	{
		N=temp%10;
		sum+=N*N*N;
		temp/=10;
	}
	if(sum==n)
	  return sum;
	else
	 return 0;
}
int main()
{
	int i,n;
	for(i=2;i<999;++i)
	{
		n=arm(i);
		if(n!=0)
	  printf("%d\n",n);
	}
	
	
}
