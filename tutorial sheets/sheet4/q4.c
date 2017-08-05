#include<stdio.h>
main()
{
    int i,j,n=7;
    
    for(i=n;i>0;i=i-2)
    {
        
        for(j=i;j>0;j--)
        {
            
            printf("%d ",j);
            
        }
        printf("\n");
    }
}

