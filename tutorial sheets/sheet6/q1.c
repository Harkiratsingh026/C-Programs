#include<stdio.h>
#include<stdlib.h>
int search(char *s, char *p)
{
	int l,x,count=0,i,j,next;
	l=strlen(s);
	x=strlen(p);
	for(i=0,j=0;i<l;++i)
	{
		if(s[i]==p[j])
		{
			next=i;
			while(s[next]==p[j]){next++;j++;}
			
			if(next-i==x)
			 {
			   count++; 
			   }
			   j=0;
			
		}
		
	}
	return count;
}
int main()
{
	int x;
	char s[100],p[100];
	printf("Enter string:");
	gets(s);
	printf("Enter pattern:");
	gets(p);
	x=search(s,p);
	printf("Number of occurences:%d",x);
}
