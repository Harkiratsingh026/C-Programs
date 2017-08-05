#include<stdio.h>
int main()
{
    int i,j,count=1;
    for(i=1;i<=5;++i)
    {
    	if(i%2==0)
    	  count=1;
    	else 
		 count=0 ; 
        for(j=1;j<=i;++j)
        {
        	count=1-count;
            printf("%d ",count);
            
        }
        printf("\n");
    }
    return 1;
}
