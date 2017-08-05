#include<stdio.h>
int max1,max2;
int max(int A[],int begin,int end)
{
	int mid=(begin+end)/2;
	if(begin<end)
	{
		max1=max(A,begin,mid);
		max2=max(A,mid+1,end);
	}
	if(A[max1]>A[max2])
	  return A[max1];
	else
	  return A[max2];
	
}
int main()
{
	int i,A[10]={5,4,4,9,2,1,6,4,10,13},m;
	m=max(A,0,9);
	printf("\nMaximum element:%d",m);
}
