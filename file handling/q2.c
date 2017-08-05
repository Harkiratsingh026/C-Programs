#include<stdio.h>
int main()
{
	FILE *fp;
	int A[10][10];
	int m,n,val,i=0,j;
	
	fp=fopen("f2_in.txt","r");
	fscanf(fp,"%d %d",&m,&n);
	
	for(i=0;i<m;++i)
	{
	   
		for(j=0;j<n;++j)
		{
			fscanf(fp,"%d",&val);
			A[i][j]=val;
		}
	}
	printf("The array is:\n");
	for(i=0;i<m;++i)
	{
	   
		for(j=0;j<n;++j)
		{
			printf("%d ",A[i][j]);
		}
		printf("\n");
	}
	fclose(fp);
}
	
