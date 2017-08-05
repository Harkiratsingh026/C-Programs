#include<stdio.h>
void swap(char **s,int pos1,int pos2)
{
	char *temp=*s,c;
	c=temp[pos1];
	temp[pos1]=temp[pos2];
	temp[pos2]=c;
}
int main()
{
	int d,pos[100],i=0,length;
	char s[100];
	printf("Enter string:");
	gets(s);
	printf("Enter d:");
	scanf("%d",&d);
	length=strlen(s);
	while(s[i+1]!='\0')
	{
		if(s[i]==s[i+1])
		{
			if(length-1-i<d)
			{
				
				  swap(&s,i+1-d,i+1);
			}
			else 
			swap (&s,i+1+d,i+1);
		}
		i++;
	}
}
