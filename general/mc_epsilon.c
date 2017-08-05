#include<stdio.h>
int main()
{
	int eps,preveps;
	eps=0.1;
	while(1+eps!=1)
	{
		preveps=eps;
		eps=eps/2;
	}
	printf("%d",preveps);
}
