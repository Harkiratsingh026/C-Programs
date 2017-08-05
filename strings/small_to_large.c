#include<stdio.h>
int main()
{
	char s[100];
	int i=0;
	printf("Enter a string:");
	gets(s);
	while(s[i]!='\0')
	{
		if(s[i]>=97 && s[i]<=122)
		   s[i]-=32;
		   i++;
	}
	puts(s);
}
