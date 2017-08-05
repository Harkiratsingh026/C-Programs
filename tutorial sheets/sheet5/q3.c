#include<stdio.h>
#include<stdlib.h>
char * disemvowel(char * s)
{
	char *k;
    int i,j,l=strlen(s);
    k=(char *)malloc(sizeof(char));
    for(i=0,j=0;i<l;++i)
    {
    	if(s[i]!='a'&&s[i]!='A'&&s[i]!='e'&&s[i]!='E'&&s[i]!='I'&&s[i]!='i'&&s[i]!='o'&&s[i]!='O'&&s[i]!='u'&&s[i]!='U')
    	   {
		   k[j++]=s[i];}
	}
	k[j]='\0';
	return k;
}
int main()
{
	
	char s[100],*c;
	printf("Enter string:");
	gets(s);
	c=disemvowel(s);
	printf("Sting:");
	puts(c);
	
}
