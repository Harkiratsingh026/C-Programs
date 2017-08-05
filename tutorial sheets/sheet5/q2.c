#include<stdio.h>
#include<stdlib.h>
char * mySubstring(char * s, int start, int end)
{
    char *k;
    int i,j;
    k=(char *)malloc(sizeof(char));
	for(j=0,i=start-1;i<end;j++,++i)
	{
		
		k[j]=s[i];
	 } 
	 k[j]='\0';
	 puts(k);
	 return k;
}
int main()
{
	
	char s[100],*c;
	int st,end;
	printf("Enter string:");
	gets(s);
	printf("Enter start and end position:");
	scanf("%d %d",&st,&end);
	c=mySubstring(s,st,end);
	printf("The substring is:");
	puts(c);
	
}
