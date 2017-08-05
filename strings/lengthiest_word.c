#include<stdio.h>
#include<string.h>

int main()
{
    int max=0,pos1=0,pos2=0;
	int i,ex=0,exfin=0,count=-1,len=0;
	char c[100];
	printf("Enter string:");
	gets(c);
	for(i=0;i<strlen(c);++i)
	{
		count++;
		while(c[i]!=' ') {
		i++; len++;}
		if(len-1>max)
		{ 
		    exfin=ex;
		    ex=0;
		    pos1=pos2;
			max=len;
			len=0;
			pos2=i;
		}
		if(c[i]==' ')
		{
			while(c[i]==' ') {
			i++; ex++;}
			
			
			continue;
	    }
	    
		}
	
	printf("No. of words:%d \nLargest word=%d \n",count+1,max+1);
	pos1+=exfin;
	for(i=pos1;i<pos2;++i)
	{
		printf("%c",c[i]);
	}
}
