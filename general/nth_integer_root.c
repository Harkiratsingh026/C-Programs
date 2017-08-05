#include<stdio.h>
int root(int n)
{
	double mid=0,low=0,high=n,po,prev,i;
	
	
	while(low<=high)
	{
		
	    mid=(low+high)/2;
	    
		po=mid*mid*mid;
		
		if(po==n)
		 return mid;
		else if(po>n)
		{
			high=mid-1;
		 } 
		 else{
		 	prev=mid;
		 	low=mid+1;
		 }
		
	}
	return (int)prev;
	
}
int main()
{
	int n,x,rt;
	printf("Enter a number:");
	scanf("%d",&n);
	
	rt=root(n);
	printf("%d",rt);
//	printf("\nlargest integer root=%d",rt);
}
