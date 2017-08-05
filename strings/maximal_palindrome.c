#include<stdio.h>
#include<string.h>
char n[100];
int max=0;
int palin(int s,int e)
{
	int l,i,j,count=0;
  char st[100]={'\0'};
  
	for(i=s;i<=e;++i)
	{
		st[count++]=n[i];
	}
	for(i=0,j=e-s;i<=j;++i,--j)
	{
		if(st[i]==st[j])
		{
			
			continue;
		}
		else return -1;
	}
	return 1;
}
int main()
{
	int i,j,ptr=0,x,m,count=0;
	
	
	printf("Enter string:");
	scanf("%s",n);
	//st[0]=n[0];
	for(i=0;i<strlen(n);++i)
	{
		x=-1;
		for(j=strlen(n)-1;j>i;--j)
		{
			
			if(n[i]==n[j])
			{
				x=palin(i,j);
				break;
			}
		}
		
		
		if(x==1)
		{
	      for(m=i;m<=j;++m) printf("%c",n[m]);
	      if(j-i>max)
	        max=j-i+1;
		
		printf("\n");
	}
		
	}
	printf("Max palindrome length:%d",max);
}
