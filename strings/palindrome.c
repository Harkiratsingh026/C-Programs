#include<stdio.h>
int length(char *s)
{
	int l=0;
	while(*s!='\0')
	{
		l++;
		s++;
	}
	return l;
}
int palin(char *s)
{
	int l,i,j;
	l=length(s);
	for(i=0,j=l-1;i<=j;++i,--j)
	{
		if(s[i]==s[j])
		{
			
			continue;
		}
		else return -1;
	}
	return 1;
}
int main()
{
	int x;
	char str[100];
	printf("Enter a string:");
	scanf("%s",str);
	x=palin(str);
	if(x==1)
	 printf("Palindrome");
	else
	printf("not palindrome"); 
}
