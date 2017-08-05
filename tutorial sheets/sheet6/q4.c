#include<stdio.h>
int main()
{
	char s[100],op[52]={'\0'};
	int count[26]={0},l,i,x,j=0;
	
	printf("Enter string:");
	gets(s);
	l=strlen(s);
	for(i=0;i<l;++i)
	{
		
		
		if(s[i]>96&&s[i]<123)
		{
			x=(int)s[i]-97;
			count[x]++;
			if(count[x]==1)
			{
			op[j]=(char)(x+'a');
			j+=2;
			}
		}
	}
	for(i=0,j=1;i<26;++i)
	{
		x=op[j-1];
		x=x-97;
		op[j]=count[x];
		j+=2;
	}
	j=0;
	while(op[j]!='\0' && op[j+1]!='\0')
	{
		printf("%c%d",op[j],op[j+1]);
		j+=2;
	}
/*	for(i=0;i<26;++i)
	{
		min=pos[0];
	  for(j=1;j<26;++j)
	  {
	  	if(pos[j]<min && pos[j]!=0)
	  	  min=pos[j];
	  	
	   } 
	   pos[min]=0;
	   
	   if(count[i]!=0)printf("%c%d",min+'a',count[min]);
    }*/
}
