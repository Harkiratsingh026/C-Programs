#include<stdio.h>
int main()
{
	int i,j,A[10],count=0;
	printf("enter array elements:");
	for(i=0;i<5;++i)
	{
		scanf("%d",&A[i]);
	}
	for(i=0;i<5;++i)
	{
		for(j=i+1;j<5;++j)
		{
			if(A[i]>A[j])
			 count ++;
		}
	}
	printf("\n no. of inversions:%d",count);
}
