#include<stdio.h>
int length(char A[])
{
	int i=0,l=0;
	while(A[i]!='\0')
	{
		l++;
		i++;
	}
	return l;
}
int main()
{
	int l;
	char name[100];
	printf("Enter string:");
	gets(name);
	l=length(name);
	printf("Length=%d",l);
}
