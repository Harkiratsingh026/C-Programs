#include<stdio.h>
int main()
{
	int i,j,k,m,n,l,flag=0;
	char a[100],b[100],c[100];
	printf("Enter string a:");
	gets(a);
	printf("Enter string b:");
	gets(b);
	printf("Enter string c:");
	gets(c);
	m=strlen(a);
	n=strlen(b);
	l=strlen(c);
	for(i=0,j=0,k=0;k<l;++k)
	{
		if(c[k]==a[i] && i<m)
		{
			i++;
			continue;
		}
		else if(c[k]==b[j] && j<n)
		{
			j++;
			continue;
		}
		else
		{
		   flag=1;
		   break;
		}
		 
		 
	}
	if(flag==1)
	  printf("Not interleaving order");
	  else
	  printf("Interleaving order");
}

