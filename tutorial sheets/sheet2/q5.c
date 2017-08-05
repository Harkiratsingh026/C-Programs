#include<stdio.h>
#include<math.h>
int main()
{
	int i,sign=-1,flip=0;
	double sum=0.0,term=1.0,x;
	printf("%lf",sin(90));
	printf("Enter a number:");
	scanf("%lf",&x);
	for(i=1;i<=(int)x;++i)
	{
		if(i>2)
		{
		if(flip==1)
		{
			flip=0;
		  term=term*x/i;
			
		}
		else
		{
				flip=1;
		  term=term*x/i;
			term=term*sign;
			sum+=term;
			sign*=-1;
		}
	   }
	   else term=term*x/i;
	}
	printf("%lf",sum);
}
