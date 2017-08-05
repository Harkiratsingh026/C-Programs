#include<stdio.h>
int perfect(int n)
{
	int sum=1,i;
	for(i=2;i<=n/2;++i)
	{
		if(n%i==0)
		   sum+=i;
	}
	if(sum==n)
	 return 1;
	 
	 return 0;
}
int main()
{
	int i,p;
	for(i=2;i<100;++i)
	{
		p=perfect(i);
		if(p==1)
		 printf("%d\n",i);
	}
}
