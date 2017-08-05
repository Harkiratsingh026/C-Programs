#include<stdio.h>
int main()
{
	FILE *fp; 
	int A[50],n,i;
	fp=fopen("f1_in.txt","r");
	fscanf(fp,"%d",&n);
	for(i=0;(fscanf(fp,"%d",&A[i]))!=EOF;++i)
	{
		
	}
	printf("Array elements:");
	for(i=0;i<n;++i)
	{
		printf("%d ",A[i]);
	}
	fclose(fp);
}
	
