#include<stdio.h>
int main()
{
	float C1=0,C2=0,p,p1,p2,c1,c2;
	for(p=0;p<=10.1;p+=0.1)
	 {
	 	c1=30-8*p;
	 	c2=10*p*p;
	 	if(c1<C1)
	 	{
	 		C1=c1;
	 		p1=p;
		 }
		 if(c2<C2)
	 	{
	 		C2=c2;
	 		p2=p;
		 }
	 	
	 }
	 printf("Minimum p for C1:%.1f\n",p1);
	 printf("Minimum p for C2:%.1f",p2);
	 
}
