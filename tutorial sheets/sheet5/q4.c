#include<stdio.h>
int main()
{
	int i,count=0,l;
	char s[100];
	printf("Enter string:");
	gets(s);
	l=strlen(s);
	for(i=0;i<l;++i)
	{
		if(s[i]>47&&s[i]<58)
		   count++;
	}
	printf("Total digits:%d",count);
}
