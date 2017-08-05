#include<stdio.h>
#include<stdlib.h>
char * repeat(char *s, int n)
{
	int i,l,j,c=0;
	char *k;
	k=(char *)malloc(sizeof(char));
	l=strlen(s);
	k[0]='\0';
	for(i=1;i<=n;++i)
	{
		for(j=0;j<l;++j)
		{
			k[c]=s[j];
			c++;
		}
	}
	return k;
}
int main()
{
	
	char s[100],*c;
	int n;
	printf("Enter string:");
	gets(s);
	printf("Enter the number of times:");
	scanf("%d",&n);
	c=repeat(s,n);
	printf("String:");
	puts(c);
	
}
