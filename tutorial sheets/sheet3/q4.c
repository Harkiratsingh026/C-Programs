#include<stdio.h>
int main()
{
	
	int i,n,j,k,count;
	printf("Enter n:");
	scanf("%d",&n);
	count=n-1;
	for(i=1;i<=n+n-1;++i)
	{
		if(i<=n)
		{
		for(k=n-1;k>=i;--k)
		{
			printf(" ");
		}
		for(j=1;j<=i*2-1;++j)
		{
			printf("*");
		}
	   }
	 else
	   {
	   	 
	   	  for(k=n+1;k<=i;++k)
	   	  {
	   	  	printf(" ");
			 }
			for(j=1;j<=count*2-1;++j)
			{
				printf("*");
			}
			count--;
	   }
		printf("\n");
	}
}
