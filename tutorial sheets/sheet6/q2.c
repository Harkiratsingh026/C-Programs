#include<stdio.h>
#include<math.h>
void generate(char *s)
{
	int pos[50],i=0,j=0,l,k=1;
	int quot,rem,bin[50]={0};
	while(s[i]!='\0')
	{
		if(s[i]=='?')
		 {
		 	pos[j++]=i;
		 	//s[i]='0';
		 }
		 i++;
	}
	l=j;
	for(i=0;i<pow(2,l);++i)
	{
		quot=i;
		k=0;
		while(quot!=0)
		{
			bin[k++]=quot%2;
			quot/=2;
		}
		for(j=0;j<l;++j)
		{
			s[pos[j]]=bin[j]+'0';
		}
		puts(s);
	}
	
	
}
int main()
{
	int x;
	char st[100];
	printf("Enter string:");
	gets(st);
	st[strlen(st)]='\0';
	generate(st);
	
	
}
