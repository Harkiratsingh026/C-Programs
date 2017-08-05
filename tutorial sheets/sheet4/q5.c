#include<stdio.h>
main()
{
    int i,j,temp=7,x=1;
    for(i=0;i<4;i++)
    {
        for(j=0;j<x;j++)
        {
            printf("%d ",temp);
            temp=temp+1;
        }
        
        x=x*2;
        temp=2*(temp-j);
        printf("\n");
    }
}

