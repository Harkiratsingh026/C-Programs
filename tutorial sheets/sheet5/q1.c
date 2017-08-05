#include<stdio.h>
int count(char* s, char c)
{
	int i,l=strlen(s),count=0;
	for(i=0;i<l;++i)
	{
		if(s[i]==c) count++;
		
	}
	return count;
}

int main()
{
	
	char s[100],c;
	printf("Enter string:");
	gets(s);
	printf("Enter character to search occurence:");
	scanf("%c",&c);
	printf("%c occurs %d times.",c,count(s,c));
}
