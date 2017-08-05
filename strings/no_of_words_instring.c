#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,count=0;
	char c[100];
	printf("Enter string:");
	gets(c);
	for(i=0;i<strlen(c);++i)
	{
		if(c[i]==' ')
		{
			j=i;
			while(c[j++]==' ');
			count++;
			i=j;
		}
	}
	printf("No. of words:%d",count+1);
}
