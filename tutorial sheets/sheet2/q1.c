#include<stdio.h>
int main()
{
	int n,i,s,flag;
	printf("Enter a number:");
	scanf("%d",&n);
	s=sqrt(n);
	for(i=2;i<=s;++i)
	{
		flag=0;
		if(n%i==0)
		  { flag=1;break;4
		  }
	}
	if(flag==0)
	{
		printf("Prime");
	}
	else
	{
		printf("Not prime");
	}
	
	printf("NOW PRINTING primes between 1000 & 1100");
	n=1000;
	while(n<=1100)
	{
		flag=0;
		s=sqrt(n);
		for(i=2;i<s;++i)
		{
			if(n%i==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		  printf("\n %d",)
	}
	
}
