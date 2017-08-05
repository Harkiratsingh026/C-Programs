#include<stdio.h>
#define MAX 10
int main()
{
	FILE *fp,*fq;
	int i,j,n,m,val1,val2,a[MAX][MAX];
	
	fp=fopen("f2_in.txt","r");
	
	
	if(!fp)
	{
		printf("could not open file");
	}
	fscanf(fp,"%d%d",&n,&m);
	for(i=0;i<n;i++)
	{
	 
	  for(j=0;j<m;j++)
	   {
	   	 fscanf(fp,"%d",&val1);
	       a[i][j]=val1;
       }
	}
	fq=fopen("q2_output.txt","w");
	for(j=0;j<m;j++)
	{
	  for(i=0;i<n;i++)
	  {
	  	fprintf(fq,"%d ",a[i][j]);
      }
      fprintf(fq,"\n");
    }
	fclose(fq);
	fclose(fp);
}
