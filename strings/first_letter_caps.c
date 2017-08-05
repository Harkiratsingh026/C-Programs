#include<stdio.h>
int main()
{
	char s[100];
	int i=0;
	printf("Enter a string:");
	gets(s);
	if(s[0]>96&& s[0]<122) s[0]-=32;
	while(s[i]!='\0')
	{
		if(s[i]==' ')
		{
			while(s[i]==' ') i++;
			if(s[i]>96&& s[i]<122) s[i]-=32;
			continue;
		}
		i++;
	}
	puts(s);
}
