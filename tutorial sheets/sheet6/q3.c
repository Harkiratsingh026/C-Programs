#include<stdio.h>
int main()
{
	char s[100];
	int count[26]={0},pos[26]={0},l,i,x,previ;
	
	printf("Enter string:");
	gets(s);
	l=strlen(s);
	for(i=0;i<l;++i)
	{
		
		if(s[i]>64 && s[i]<92)
		{
			x=(int)s[i]-65;
			count[x]++;
			pos[x]=i;
		}
		if(s[i]>96&&s[i]<123)
		{
			x=(int)s[i]-97;
			count[x]++;
			pos[x]=i;
		}
	}
	for(i=0;i<26;++i)
	    printf("%d ",count[i]);
	    printf("\npos\n");
	for(i=0;i<26;++i)
	    printf("%d ",pos[i]); 
			previ=0;
  for(i=0;i<26;++i)
  {
  	if(count[i]==1)
  	{
  		if(previ==0)
  		{
  			previ=i;
		  }
  			if(pos[previ]>pos[i])
  			{
  				previ=i;
			  }
	  }
  }
  printf("\n%c",('a'+previ));
}   

