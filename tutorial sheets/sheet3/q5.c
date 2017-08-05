#include<stdio.h>
int main()
{
	int yr,days=0,n,i;
	printf("\n enter the yr");
	scanf("%d",&yr);
	if(yr<1900)
	printf("enter valid yr");
	else if(yr==1900)
	{
	check(days);
    }
	else
	{
	n=yr-1900;
	for(i=0;i<n;i++)  {  
		if(i%4==0)
		days+=2;
		else
		days+=1;
	  }
	 days=days%7;
	 check(days);
    }
	return 0;
	
}

check(int n)
{
  switch(n)
  {
     case 0:printf("monday");
     break;
	 case 1:printf("tuesday");
     break;
	 case 2:printf("wednesday");
     break;
	 case 3:printf("thrusday");
     break; 	 
  	 case 4:printf("friday");
     break;
	 case 5:printf("saturday");
     break;
     case 6:printf("sunday");
     break;
  }	
  
}
