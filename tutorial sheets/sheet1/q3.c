#include<stdio.h>
int main()
{
	FILE *fp;
	fp=fopen("f3_in.txt","r");
	int i=0;
	char s[100],chk[11];

	while(fgets(s,90,fp)!=NULL)
	{
		
		for(i=0;i<10;++i)
		{
			chk[i]=s[i];
		}
		chk[i]='\0';	
		if(strcmp(chk,"<testcase ")==0)
		  continue;
		else
		 puts(s);
	}
	fclose(fp);

}	
