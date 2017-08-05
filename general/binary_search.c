#include<stdio.h>
int binsearch(int A[],int key)
{
	int low=0,high=10,mid;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(A[mid]==key)
		   return mid;
		else if(A[mid]<key)
		{
			low=mid+1;
		   }
		   else{
		   	high=mid-1;
		   }   
	}
	return -1;
	
}
int main()
{
	int i,A[10],key,ret;
	printf("enter array elements(sorted)");
	for(i=0;i<10;++i)
	{
		scanf("%d",&A[i]);
	}
	printf("\n enter key to be searched:");
	scanf("%d",&key);
	ret=binsearch(A,key);
	if(ret==-1)
	  printf("\nNOt found");
	  else
	   printf("found at %d position",ret+1);
}
