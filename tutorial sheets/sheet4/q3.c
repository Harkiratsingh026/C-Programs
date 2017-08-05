#include<stdio.h>
int main()
{
	int A[10][10]={0},i,j,k,l,flip;
    A[0][0]=1;
    for(i=1;i<=6;++i)
    {
        A[i][0]=1;
        for(j=1;j<=6;++j)
        {
            A[i][j]=A[i-1][j-1]+A[i-1][j];
        }

    }
    for(i=1;i<=5;++i)
    
    {
    	flip=1;
    	j=0;
    	for(k=5;k>i;--k)
    	{
    		printf(" ");
		}
		for(l=1;l<=i*2-1;++l)
		{
			if(flip==1)
			{
				flip=0;
				printf("%d",A[i-1][j]);
				j++;
			}
			else
			{
				flip=1;
				printf(" ");
			}
			
		}
		printf("\n");
	}
    
}
