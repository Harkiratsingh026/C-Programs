#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,n,s;
	printf("enter n:");
	scanf("%d",&n);
	s=sqrt(n);
	j=s-1;
	for(i=1;i<s;++i)
	{
		
		if(i*i+j*j==n)
		 printf("%d,%d",i,j);
		 else if(i*i+j*j>n)
		  j--;
		  else if(i*i+j*j<n)
		   continue;
	}
	
}
