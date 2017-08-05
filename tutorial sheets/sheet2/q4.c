#include<stdio.h>
int main()
{
	int i,n,sign=1;
	float sum=0.0,temp,check;
	printf("X \t pie\n");
	for(i=1;!(check>3.1415&&check<3.1416);i+=2)
	{
		temp=4.0/i;
		sum+=sign*temp;
		sign*=-1;
		check=(sum*10000);
		check/=10000;
		printf("%d \t %.4f\n",i,check);
	}
	
}
