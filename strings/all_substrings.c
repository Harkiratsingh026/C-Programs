#include<stdio.h>
int main()
{
	int i,j,k;
	char n[100];
	printf("Enter a string:");
	scanf("%s",n);
	for(i=0;i<strlen(n);++i)
	{
		
		for(j=i;j<strlen(n);++j)
		{
			for(k=i;k<=j;++k)
			printf("%c",n[k]);
			
			printf("\n");
		}
		
	}
}
