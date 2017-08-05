#include<stdio.h>
int main()
{
	int i,j,p=0;
	int A[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
	count=4;
	for(i=0;count;)
	{
		for(j=0;j<4;)
		{
			if(p==0)
			{
				j++;
				printf("%d",A[i][j]);
			}
			else if(p==1) 
			{
			  i++;
			  printf("%d",A[i][j]);
			}
			
			else if(p==2)
			{
			   j--;
			   printf("%d",A[i][j]);
			}
			
			else 
			{
			  i--;
			  printf("%d",A[i][j]);
			}
			
		}
		if(p==0)p=1;
		else if(p==1)p=2;
		else if(p==2) p=3;
		else if(p==3) p=0;
	}
}
