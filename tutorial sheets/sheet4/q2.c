#include<stdio.h>
int main()
{
	int i,j,k,l,n,cond=1,count=-1;
	printf("Enter n:");
	scanf("%d",&n);
	for(i=0;i<n;++i)
	{
		for(j=65;j<=71-i;++j)
		{
			printf("%c",(char)j);
		}
		for(k=0;k<count&&i>0;++k)
		{
			printf(" ");
		}
		for(l=71-i;l>=65;--l)
		{
			
			printf("%c",(char)l);
			if(cond==1)
			{
				printf("\b");
				cond=2;
			}
		}
		 printf("\n");
		 count+=2;
	}
}
