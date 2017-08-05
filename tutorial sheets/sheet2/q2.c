#include<stdio.h>
int main()
{
	int i,j,n;
	char c;
	printf("Enter side of square:");
	scanf("%d",&n);
	printf("Enter character:");
	fflush(stdin);
	scanf("%c",&c);
	for(i=0;i<n;++i)
	{
		for(j=0;j<n;++j)
		{
			printf("%c",c);
		}
		printf("\n");
	}
}
